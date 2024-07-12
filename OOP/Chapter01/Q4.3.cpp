#include <iostream>
using namespace std;
int main()
 {
    // 定义最大匹数（大、中、小马总数不能超过100匹）
    int max_horses = 100;
    // 定义所需的总负担
    double total_load = 100.0;
    cout << "大马数\t中马数\t小马数" << endl;
    // 遍历所有可能的大马匹数
    for (int big = 0; big <= max_horses; ++big) 
    {
        // 遍历所有可能的中马匹数
        for (int medium = 0; medium <= max_horses - big; ++medium) 
        {
            // 计算剩余的小马匹数
            int small = max_horses - big - medium;
            // 计算总负担
            double load = big * 3 + medium * 2 + small * 0.5;
            // 判断是否满足条件
            if (load == total_load) 
            {
                cout << big << "\t" << medium << "\t" << small << endl;
            }
        }
    }
    return 0;
}
