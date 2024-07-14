#include <iostream>
#include <cmath>
using namespace std;

class Complex 
{
private:
    double real;
    double imag;

public:
    // 无参构造函数
    Complex() : real(0.0), imag(0.0) {}

    // 有参构造函数
    Complex(double r, double i) : real(r), imag(i) {}

    // 深拷贝构造函数
    Complex(const Complex &other) : real(other.real), imag(other.imag) {}

    // 析构函数
    ~Complex() 
    {
        // 可以在这里添加需要清理的资源
    }

    // 输出函数
    void print() const 
    {
        cout << "(" << real << " + " << imag << "i)" << endl;
    }

    // 求模函数
    double modulus() const 
    {
        return sqrt(real * real + imag * imag);
    }

    // 加法函数
    Complex add(const Complex &other) const 
    {
        return Complex(real + other.real, imag + other.imag);
    }
};

int main() 
{
    // 定义复数对象并测试
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);

    // 输出复数
    cout << "复数 c1: ";
    c1.print();

    cout << "复数 c2: ";
    c2.print();

    // 求模并输出
    cout << "c1 的模: " << c1.modulus() << endl;
    cout << "c2 的模: " << c2.modulus() << endl;

    // 计算 c1 和 c2 的和并输出
    Complex c3 = c1.add(c2);
    cout << "c1 和 c2 的和: ";
    c3.print();

    return 0;
}
