#include <iostream>
#include <cmath> // 包含数学函数库
using namespace std;
int main()
{
    double r, h;
    // 从键盘输入数据
    cout << "请输入圆的半径 r：";
    cin >> r;
    cout << "请输入圆柱的高 h：";
    cin >> h;
    // 常量 PI
    const double PI = 3.141592653589793;
    // 计算圆的周长
    double circumference = 2 * PI * r;
    // 计算圆的面积
    double area = PI * r * r;
    // 计算圆柱的表面积（2 * 圆的面积 + 圆的周长 * 圆柱的高）
    double surface_area = 2 * area + circumference * h;
    // 计算圆柱的体积
    double volume = area * h;

    // 输出计算结果
    cout << "圆的周长: " << circumference << endl;
    cout << "圆的面积: " << area << endl;
    cout << "圆柱的表面积: " << surface_area << endl;
    cout << "圆柱的体积: " << volume << endl;
    return 0;
}
