#include <iostream>
using namespace std;
int main()
{ // 动态输入：通过用户输入数据
    int a, b; 
    cout << "请输入第一个整数：";
    cin >> a;
    cout << "请输入第二个整数：";
    cin >> b;
    int sum = a + b;
    cout << "动态输入：\n";
    cout << "a = " << a << ", b = " << b << ", a + b = " << sum << endl;
    return 0;
}
