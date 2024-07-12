#include <iostream>
using namespace std;


// 计算阶乘的函数
unsigned long long factorial(int n) 
{
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}


int main()
 {
    int num;
    cout << "请输入项数：";
    cin >> num;

    unsigned long long sum = 0;

    for (int i = 1; i <= num; ++i) 
    {
        sum += factorial(i);
    }
    cout << "阶乘数列的和为：" << sum << endl;
    return 0;
}
