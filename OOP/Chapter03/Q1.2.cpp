#include <iostream>

using namespace std;

// 计算字符串长度的函数
int getlen(const char* str) 
{
    int length = 0;
    while (*str != '\0') 
    {
        ++length;
        ++str;
    }
    return length;
}

int main()
{
    char str[100];
    cout << "请输入一个字符串：" << endl;
    cin.getline(str, 100); // 使用 cin.getline 读取带空格的字符串
    // 调用 getlen 函数计算字符串长度
    int length = getlen(str);

    // 输出结果
    cout << "字符串的长度为：" << length << endl;

    return 0;
}
