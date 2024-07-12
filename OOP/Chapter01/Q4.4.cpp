#include <iostream>
using namespace std;
// 计算阶乘的函数
long long factorial(int n) 
{
    long long result = 1;
    for (int i = 1; i <= n; ++i) 
    {
        result *= i;
    }
    return result;
}

int main() 
{
    long long sum = 0;

    // 计算从1到10的阶乘之和
    for (int i = 1; i <= 10; ++i) 
    {
        sum += factorial(i);
    }
    cout << "sum = " << sum << endl;
    return 0;
}
