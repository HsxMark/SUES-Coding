#include <iostream>
using namespace std;
int main() 
{
    // 定义数组存储10个整数
    int list[10];
    // 输入10个整数
    cout << "请输入10个整数：" << endl;
    for (int i = 0; i < 10; ++i) 
    {
        cin >> list[i];
    }
    // 用指针法从后向前输出数组中的整数
    cout << "数组中的整数从后向前输出：" << endl;
    int* p = list + 9;  // 指针指向数组的最后一个元素
    for (int i = 0; i < 10; ++i) 
    {
        cout << *p << " ";
        --p;  // 指针向前移动
    }
    cout << endl;
    return 0;
}
