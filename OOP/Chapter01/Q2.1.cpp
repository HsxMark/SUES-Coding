//求两个数之和（静态输入和动态输入）。在两种情况下完成：在程序内部定义变量时赋初值，或者通过赋值语句赋值；用户输入数据。
#include <iostream>
using namespace std;
int main() 
{
    // 静态输入：在程序内部定义变量时赋初值
    int a = 10;
    int b = 20;
    int sum = a + b;
    cout << "静态输入（赋初值）：\n";
    cout << "a = " << a << ", b = " << b << ", a + b = " << sum << endl;    
    return 0;
}
