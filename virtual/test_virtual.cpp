/**
 * Sample Code --Virtual--
 *
 * <なんで書いたの？>
 * virtualってよく使われているけれど、いろいろよく分からなくなるので改めて書いて確認したかった.
 * 例えば
 *   XXX hoge = new YYY()
 * とか、書けるのはXXXが継承元でYYYが継承先って関係をきちんと確認したかった.
 * あと、よく"undefined reference to vtable for ..."ってコンパイルエラーに遭遇して"ぐぬぬ"ってなるので
 * こいつが何を意味しているかきちんと確認しておきたかった.
 *   意味:親クラスの中の"最初の"virtual functionの実体をどこにも定義していない場合に出るエラーらしい.
 *
 * [20150614] Junya YAMASHITA
 */
#include <iostream>

class test_interface
{
public:
  test_interface(){}
  virtual ~test_interface(){}
/*
  // こっちを使うと「俺はどこかで継承されてもいいんだぜ！でもなかったらこの処理を行うぜ！」ということを意味する.
  virtual void func()
  {
    std::cout << "test_interface" << std::endl;
  }
*/
/*
  // こっちを使うとただの関数.
  void func()
  {
    std::cout << "test_interface" << std::endl;
  }
*/
  // こっちを使うと「俺は絶対継承されるぜ！だから継承してちゃんと実体作れよ！」ということを意味する（これが純粋仮想関数）.
  virtual void func() = 0;
};

class test : public test_interface
{
public:
  test()
  {
  }
  virtual ~test()
  {
  }

  void func()             // 親でVirtual宣言されている場合, Virtualは省略できる. 親でVirtual宣言されていない場合はただのオーバーライド.
  {
    std::cout << "test" << std::endl;
  }

};

class test_child : public test
{
public:
  test_child()
  {
  }
  virtual ~test_child()
  {
  }

  void func()
  {
    std::cout << "test_child" << std::endl;
  }

};

int main(int argc, char const *argv[])
{
  test_interface* obj = new test();
  obj->func();
  delete obj;

  test* obj2 = new test();
  obj2->func();
  delete obj2;

  test* obj3 = new test_child();
  obj3->func();
  delete obj3;

  test_interface* obj4 = new test_child();
  obj4->func();
  delete obj4;

  return 0;
}