#include <iostream>
#include <cmath> 
using namespace std;
int main()
 {
    int N = 15;
    long long M = 0; // 使用long long以防止溢出

    for (int i = 1; i <= N; ++i) 
    {
        M += pow(i, i);
    }
    cout << "当N=" << N << "时，对应的M=" << M << endl;
    return 0;
}
