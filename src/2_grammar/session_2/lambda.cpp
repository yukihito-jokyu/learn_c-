#include <iostream>
#include <functional>

int Add(int x, int y)
{
    return x + y;
}

int main()
{
    // auto 変数名 = [ キャプチャ ]( 引数リスト ) -> 戻り値の型 { 処理内容 };
    auto func = [](int a, int b) -> int
    { return a + b; };

    int result = func(4, 6);
    std::cout << result << std::endl;

    int init = 5;
    auto f = [init](int a, int b)
    { return init + a * b; };
    auto g = [&init](int a, int b)
    { return init + a * b; };

    init = 0;

    // 【コピーキャプチャの場合】
    //    ラムダ式の定義時点で init がコピーされているので、ラムダ式内の init は 5
    int result_copy = f(2, 4);
    std::cout << result_copy << std::endl;

    // 【参照キャプチャの場合】
    //    ラムダ式実行時の init の値が参照されるので、ラムダ式内の init は 0
    int result_ref = g(2, 4);
    std::cout << result_ref << std::endl;

    std::function<int(int, int)> funct = Add;
    int result_v2 = funct(3, 5);
    std::cout << result_v2 << std::endl;

    return 0;
}