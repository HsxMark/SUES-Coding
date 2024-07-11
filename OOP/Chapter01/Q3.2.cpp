#include <iostream>
using namespace std;
void gradeWithIf(int score)
{
    char grade;
    if (score >= 90)
    {
        grade = 'A';
    } else if (score >= 80) 
    {
        grade = 'B';
    } else if (score >= 70)
    {
        grade = 'C';
    } else if (score >= 60) 
    {
        grade = 'D';
    } else {
        grade = 'E';
    }
    cout << "成绩 " << score << " 的等级是：" << grade << endl;
}

int main() 
{
    int score1, score2, score3;

    cout << "请输入三个百分制成绩：";
    cin >> score1 >> score2 >> score3;

    cout << "使用 if 语句：" << endl;
    gradeWithIf(score1);
    gradeWithIf(score2);
    gradeWithIf(score3);
    return 0;
}
