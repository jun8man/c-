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
  virtual void operator()() = 0;
};

void func(){
  std::cout << "This is Normal func()" << std::endl;
}

class My_class
{
public:
  My_class(){
  }
  ~My_class(){
  }

  void func(){
    std::cout << "This is My_class::func()" << std::endl;
  }
};

class Simple_func
  : public Delegate
{
public:
  Simple_func(void (*call_back)())
   : m_call_back(call_back){       // 戻り値の型 (* 引数名)(関数の取り得る引数)
  }
  ~Simple_func(){
  }

  virtual void operator()() {
      (*m_call_back)();
  }

private:
  void (*m_call_back)();
};

template<typename T_Class>
class Simple_class
  : public Delegate
{
public:
  Simple_class(T_Class* obj, void (T_Class::*call_back)())   // 戻り値の型 (クラス名::*変数名)(関数の取り得る引数)
   : m_call_back(call_back)
   , m_obj(obj){
  }
  virtual ~Simple_class(){
  }

  // 最初の()はコンストラクタ的な意味、で後の()が関数の引数部分的な意味
  virtual void operator()() {
      (m_obj->*m_call_back)();
  }

private:
  void (T_Class::*m_call_back)();
  T_Class *m_obj;
};

void api_yamajun(Delegate& call_back)
{
  call_back();
}

int main(int argc, char const *argv[])
{
  // クラスのメンバ関数を渡した場合.
  // 型はTemplateを使っているのでなんでもよい
  // 受ける側は継承元のインターフェイスクラス
  My_class obj;
  Simple_class<My_class> obj2(&obj, &My_class::func);
  // *は()よりも呼び出し優先度が低いので*obj2()と書くと*(obj2())ってことになってエラーになるので注意！
  //  (*obj2)();

  // グローバル関数を渡した場合.
  // 受ける側は継承元のインターフェイスクラス
  Simple_func obj3(func);
  //  (*obj3)();

  api_yamajun(obj2);
  api_yamajun(obj3);

  return 0;
}