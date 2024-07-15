#include <iostream>
#include <vector>

using namespace std;

// 向量类
class Vector 
{
private:
    vector<double> elements; // 向量元素

public:
    // 缺省值的构造函数
    Vector(int size = 3, double value = 0.0) : elements(size, value) {}

    // 有参构造函数
    Vector(const vector<double>& elements) : elements(elements) {}

    // 重载加法运算符
    Vector operator+(const Vector& other) const 
    {
        if (elements.size() != other.elements.size()) 
        {
            cerr << "Error: Vectors must be of the same size to add!" << endl;
            return Vector();
        }
        Vector result(elements.size());
        for (size_t i = 0; i < elements.size(); ++i) 
        {
            result.elements[i] = elements[i] + other.elements[i];
        }
        return result;
    }

    // 输出向量
    void print() const 
    {
        cout << "[";
        for (size_t i = 0; i < elements.size(); ++i) 
        {
            cout << elements[i];
            if (i != elements.size() - 1) 
            {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
};

int main() 
{
    // 定义并初始化向量
    Vector v1({1.0, 2.0, 3.0});
    Vector v2({4.0, 5.0, 6.0});

    // 输出初始向量
    cout << "Vector v1: ";
    v1.print();
    cout << "Vector v2: ";
    v2.print();

    // 计算向量的和并输出
    Vector v3 = v1 + v2;
    cout << "v1 + v2 = ";
    v3.print();

    return 0;
}
