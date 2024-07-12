#include <iostream>
#include <cmath> // 包含数学函数库

using namespace std;

int main()
 {
    double a, b, c;

    // 从键盘输入系数a, b, c
    cout << "请输入方程的系数a, b, c：";
    cin >> a >> b >> c;

    if (a == 0) 
    {
        // a为0时，方程退化为线性方程
        if (b == 0) 
        {
            if (c == 0)
             {
                cout << "方程有无数解。" << endl;
            } 
            else 
            {
                cout << "方程无解。" << endl;
            }
        } 
        else 
        {
            double x = -c / b;
            cout << "方程为线性方程，解为：x = " << x << endl;
        }
    } 
    else 
    {
        // 计算判别式
        double discriminant = b * b - 4 * a * c;

        if (discriminant > 0) 
        {
            // 判别式大于0，有两个不相等的实根
            double x1 = (-b + sqrt(discriminant)) / (2 * a);
            double x2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "方程有两个不相等的实根：" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        } 
        else if (discriminant == 0) 
        {
            // 判别式等于0，有两个相等的实根
            double x = -b / (2 * a);
            cout << "方程有两个相等的实根：" << endl;
            cout << "x1 = x2 = " << x << endl;
        } 
        else 
        {
            // 判别式小于0，有两个共轭复根
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-discriminant) / (2 * a);
            cout << "方程有两个共轭复根：" << endl;
            cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
            cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
        }
    }
    return 0;
}
