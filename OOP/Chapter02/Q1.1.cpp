#include <iostream>
using namespace std;

int isPrime(int n) 
{
    // 处理小于等于1的情况
    if (n <= 1)
     {
        return 0;
    }
    // 处理2和3的情况
    if (n == 2 || n == 3) 
    {
        return 1;
    }
    // 处理其他情况
    if (n % 2 == 0 || n % 3 == 0)
     {
        return 0;
    }
    for (int i = 5; i * i <= n; i += 6) 
    {
        if (n % i == 0 || n % (i + 2) == 0) 
        {
            return 0;
        }
    }
    return 1;
}// 判断是否为素数的函数


int main()
 {
    int num;
    cout << "请输入一个整数：";
    cin >> num;

    if (isPrime(num)) 
    {
        cout << num << " 是素数。" << endl;
    } 
    else 
    {
        cout << num << " 不是素数。" << endl;
    }

    return 0;
}
