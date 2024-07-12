#include <iostream>
using namespace std;
int main()
 {
    // 初始化3x3二维数组
    int matrix[3][3] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // 输出互换前的数组
    cout << "互换前的数组：" << endl;
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // 互换关于主对角线对称的元素
    for (int i = 0; i < 3; ++i)
     {
        for (int j = i + 1; j < 3; ++j) 
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // 输出互换后的数组
    cout << "互换后的数组：" << endl;
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
