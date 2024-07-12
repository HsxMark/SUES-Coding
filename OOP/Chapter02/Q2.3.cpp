#include <iostream>
#include <cstring> // 包含字符串处理函数库

using namespace std;

int main()
 {
    // 定义并初始化字符数组
    const char s[] = "C is a general purpose, procedural, imperative computer programming language developed in 1972 by Dennis Ritchie at the Bell Telephone Laboratories for use with the Unix operating system.";

    // 定义计数变量
    int uppercaseCount = 0;
    int lowercaseCount = 0;
    int digitCount = 0;
    int spaceCount = 0;
    int commaCount = 0;

    // 统计字符数量
    for (int i = 0; i < strlen(s); ++i)
     {
        if (isupper(s[i])) 
        {
            ++uppercaseCount;
        } else if (islower(s[i]))
         {
            ++lowercaseCount;
        } else if (isdigit(s[i])) 
        {
            ++digitCount;
        } else if (isspace(s[i])) 
        {
            ++spaceCount;
        } else if (s[i] == ',') 
        {
            ++commaCount;
        }
    }

    // 输出统计结果
    cout << "大写字母的个数：" << uppercaseCount << endl;
    cout << "小写字母的个数：" << lowercaseCount << endl;
    cout << "数字的个数：" << digitCount << endl;
    cout << "空格的个数：" << spaceCount << endl;
    cout << "逗号的个数：" << commaCount << endl;

    return 0;
}
