#include <iostream>

using namespace std;

int main() 
{
    int n;
    // 输入数据的数量
    cout << "请输入数据的数量：";
    cin >> n;
    // 动态分配数组
    int* arr = new int[n];
    // 输入数据

    cout << "请输入" << n << "个数值：" << endl;

    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }

    // 按顺序打印输出
    cout << "按顺序输出：" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 按逆序打印输出
    cout << "按逆序输出：" << endl;
    for (int i = n - 1; i >= 0; --i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
