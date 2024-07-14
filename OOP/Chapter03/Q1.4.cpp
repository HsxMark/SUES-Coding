#include <iostream>
using namespace std;

// 实现两个数据互换的函数
void swap(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    // 输入两个整数
    cout << "请输入两个整数：" << endl;
    cin >> x >> y;
    // 输出交换前的结果
    cout << "交换前：" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    // 调用 swap 函数交换两个整数的值
    swap(x, y);
    // 输出交换后的结果
    cout << "交换后：" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}
