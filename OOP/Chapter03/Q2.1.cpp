#include <iostream>
using namespace std;

// 定义结构体表示日期
struct Date 
{
    int year;
    int month;
    int day;
};

// 判断是否是闰年
bool isLeapYear(int year) 
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
    {
        return true;
    } 
    else
    {
        return false;
    }
}

// 计算该日在本年中是第几天
int dayOfYear(Date date) 
{
    // 每个月的天数（平年）
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // 如果是闰年，二月份的天数为29天
    if (isLeapYear(date.year))
    {
        daysInMonth[1] = 29;
    }

    // 计算该日在本年中是第几天
    int dayOfYear = 0;
    for (int i = 0; i < date.month - 1; ++i) 
    {
        dayOfYear += daysInMonth[i];
    }
    dayOfYear += date.day;

    return dayOfYear;
}

int main() 
{
    Date date;

    // 输入年、月、日
    cout << "请输入年：" << endl;
    cin >> date.year;
    cout << "请输入月：" << endl;
    cin >> date.month;
    cout << "请输入日：" << endl;
    cin >> date.day;
    // 计算该日在本年中是第几天
    int dayNumber = dayOfYear(date);
    // 输出结果
    cout << "该日在本年中是第 " << dayNumber << " 天。" << endl;
    return 0;
}
