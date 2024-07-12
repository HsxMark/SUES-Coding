#include <iostream>
using namespace std;
int main()
 {
    double limit;
    
    // 从键盘输入limit
    cout << "请输入limit的值：";
    cin >> limit;

    double sum = 0.0;
    int n = 0;

    // 使用while循环
    while (sum <= limit) 
    {
        n++;
        sum += 1.0 / n;
    }
    cout << "当n=" << n << "时，不等式成立，sum=" << sum << endl;
    return 0;
}
