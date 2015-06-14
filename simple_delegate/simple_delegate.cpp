/**
 * Naka-chan homework
 *
 * Simple Delegate
 *
 * <困ったこと>
 * メンバ関数のポインタの文法
 *     <戻り値の型> (<クラス名>::*<変数名>)(<引数リスト>);
 * メンバ関数のポインタの使い方
 *     メンバ関数には隠し引数である<this>ポインタがあるため、これを渡す必要がある
 *     .*や->*を使ってhoge.*fuga()とかhoge->*fuga()とか書く
 *     注意すべきは.*や->*は関数呼び出しの()よりも優先度が低いため、このままだとこうなっちゃう
 *     hoge.*(fuga())とかhoge->*(fuga())
 *     これじゃあ<this>ポインタの意味がなくなってしまうので(hoge.*fuga)()とか(hoge->*fuga)()みたいに
 *     括弧でくくってあげる必要がある、ダサいけどね
 *
 * [20150424]  Yamajun
 */

#include <iostream>

class Delegate
{
public:
  // コンストラクタを記載すると、必ず実体の定義を書かねばならなくなる
  Delegate(){}
  virtual ~Delegate(){}
  virtual void operator()(const int i) = 0;
};

void func(const int i){
  std::cout << "This is Normal func() i = " << i << std::endl;
}

class My_class
{
public:
  My_class(){
  }
  ~My_class(){
  }

  void func(const int i){
    m_val = i;
    std::cout << "This is My_class::func():: m_val = " << m_val << std::endl;
  }

  int get_val() const
  {
    return m_val;
  }

private:
  int m_val;
};

class Simple_func
  : public Delegate
{
public:
  typedef void (*call_back)(const int);

  Simple_func(call_back func)
   : m_call_back(func){
  //Simple_func(void (*call_back)(const int i))
  // : m_call_back(call_back){       // 戻り値の型 (* 引数名)(関数の取り得る引数)
  }
  ~Simple_func(){
  }

  virtual void operator()(const int i)
  {
    (*m_call_back)(i);
  }

private:
  call_back m_call_back;
  //void (*m_call_back)(const int i);
};


template<typename T_Class >
class Simple_class
  : public Delegate
{
public:
  typedef void (T_Class::*call_back_t)(const int);
  Simple_class(T_Class* obj, call_back_t call_back)
  //Simple_class(T_Class* obj, void (T_Class::*call_back)(const int i))   // 戻り値の型 (クラス名::*変数名)(関数の取り得る引数)
   : m_call_back(call_back)
   , m_obj(obj){
  }
  virtual ~Simple_class(){
  }

  // 最初の()はコンストラクタ的な意味、で後の()が関数の引数部分的な意味
  virtual void operator()(const int i) {
      (m_obj->*m_call_back)(i);
  }

private:
  call_back_t m_call_back;
  //void (T_Class::*m_call_back)(const int i);
  T_Class *m_obj;
};

void api_yamajun(Delegate& call_back)
{
  /**
   * ここでいろいろ処理した結果をAPIの呼び出し元に返してあげる
   */
  int i = 0;
  i++;
  call_back(i);
}

int main(int argc, char const *argv[])
{
  // クラスのメンバ関数を渡した場合.
  // 型はTemplateを使っているのでなんでもよい
  // 受ける側は継承元のインターフェイスクラス
  My_class obj;
  Simple_class<My_class > obj2(&obj, &My_class::func);
  // *は()よりも呼び出し優先度が低いので*obj2()と書くと*(obj2())ってことになってエラーになるので注意！
  //  (*obj2)();

  // グローバル関数を渡した場合.
  // 受ける側は継承元のインターフェイスクラス
  Simple_func obj3(func);
  //  (*obj3)();

  api_yamajun(obj2);
  std::cout << obj.get_val() << std::endl;

  api_yamajun(obj3);
  return 0;
}