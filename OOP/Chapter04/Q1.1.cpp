#include <iostream>
#include <string>
using namespace std;




class Student 
{
private:
    int id;
    string name;
    int score1;
    int score2;
    int score3;

public:
    // 无参构造函数
    Student() : id(0), name(""), score1(0), score2(0), score3(0) {}

    // 有参构造函数
    Student(int id, string name, int score1, int score2, int score3)
        : id(id), name(name), score1(score1), score2(score2), score3(score3) {}

    // 深拷贝构造函数
    Student(const Student &other)
        : id(other.id), name(other.name), score1(other.score1), score2(other.score2), score3(other.score3) {}

    // 析构函数
    ~Student() {
        // 可以在这里添加需要清理的资源
    }

    // 计算平均成绩的函数
    double calculateAverage() const 
    {
        return (score1 + score2 + score3) / 3.0;
    }

    // 输出函数
    void print() const 
    {
        cout << id << "   " << name << "   " << score1 << "   " << score2 << "   " << score3 << "   "
             << calculateAverage() << endl;
    }

    // 获取ID用于排序
    int getId() const 
    {
        return id;
    }

    // 排序函数
    static void sortStudents(Student students[], int size) 
    {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - 1 - i; ++j) {
                if (students[j].getId() > students[j + 1].getId()) 
                {
                    Student temp = students[j];
                    students[j] = students[j + 1];
                    students[j + 1] = temp;
                }
            }
        }
    }
};

int main() 
{
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

    // 输出排序前的学生信息
    for (int i = 0; i < 5; ++i) 
    {
        students[i].print();
    }

    // 对学生按学号排序
    Student::sortStudents(students, 5);

    // 输出排序后的学生信息
    cout << "\n排序后的学生信息：" << endl;
    cout << "No    name   score1  score2  score3   average" << endl;
    for (int i = 0; i < 5; ++i) 
    {
        students[i].print();
    }

    return 0;
}
