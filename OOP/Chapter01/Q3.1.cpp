#include <iostream>
using namespace std;
int main() 
{
    int a, b, c;
    cout << "请输入三个整数a, b, c：";
    cin >> a >> b >> c;
    int max_val = a; // 假设a是最大值
    if (b > max_val)
    {
        max_val = b;
    }
    if (c > max_val) 
    {
        max_val = c;
    }
    cout << "输入的整数分别是：" << a << ", " << b << ", " << c << endl;
    cout << "其中最大值是：" << max_val << endl;
    return 0;
}
