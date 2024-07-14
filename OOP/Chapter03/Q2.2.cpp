#include <iostream>
#include <string>
using namespace std;

// 定义结构体表示学生信息
struct Student 
{
    int id;
    string name;
    int score1;
    int score2;
    int score3;
};
// 计算学生平均成绩的函数
double calculateAverage(int score1, int score2, int score3) 
{
    return (score1 + score2 + score3) / 3.0;
}

int main() {
    // 用赋初值的方法输入5个学生的数据到结构体数组中
    Student students[5] = 
    {
        {101, "Zhou", 93, 89, 87},
        {102, "Yang", 85, 80, 78},
        {103, "Chen", 77, 70, 83},
        {104, "Qian", 70, 67, 60},
        {105, "Li", 72, 70, 69}
    };

    // 输出表头
    cout << "No    name   score1  score2  score3   average" << endl;
    // 输出每个学生的数据和平均成绩
    for (int i = 0; i < 5; ++i) 
    {
        double average = calculateAverage(students[i].score1, students[i].score2, students[i].score3);

        // 格式化输出，确保对齐
        cout << students[i].id << "   ";

        cout << students[i].name;
        for (size_t j = 0; j < 7 - students[i].name.size(); ++j) 
        {
            cout << " ";
        }

        cout << students[i].score1 << "      "
             << students[i].score2 << "      "
             << students[i].score3 << "      ";

        printf("%.2f\n", average);  // 使用 printf 格式化输出平均成绩，保留两位小数
    }
    return 0;
}
