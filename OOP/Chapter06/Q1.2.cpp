#include <iostream>
#include <string>

using namespace std;

// 基类：Person
class Person 
{
protected:
    string name;
    int age;

public:
    // 无参构造函数
    Person() : name(""), age(0) {}

    // 有参构造函数
    Person(string name, int age) : name(name), age(age) {}

    // 信息输出函数
    virtual void printInfo() const 
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// 派生类：Student
class Student : public Person 
{
private:
    int studentID;
    string major;

public:
    // 无参构造函数
    Student() : Person(), studentID(0), major("") {}

    // 有参构造函数
    Student(string name, int age, int studentID, string major)
        : Person(name, age), studentID(studentID), major(major) {}

    // 重载信息输出函数
    void printInfo() const override {
        cout << "Student Name: " << name << ", Age: " << age
             << ", Student ID: " << studentID << ", Major: " << major << endl;
    }
};

// 派生类：Teacher
class Teacher : public Person 
{
private:
    int teacherID;
    string department;

public:
    // 无参构造函数
    Teacher() : Person(), teacherID(0), department("") {}

    // 有参构造函数
    Teacher(string name, int age, int teacherID, string department)
        : Person(name, age), teacherID(teacherID), department(department) {}

    // 重载信息输出函数
    void printInfo() const override {
        cout << "Teacher Name: " << name << ", Age: " << age
             << ", Teacher ID: " << teacherID << ", Department: " << department << endl;
    }
};

int main() 
{
    // 定义并初始化Student对象
    Student student1("Alice", 20, 12345, "Computer Science");
    Student student2("Bob", 21, 12346, "Mathematics");

    // 定义并初始化Teacher对象
    Teacher teacher1("Dr. Smith", 45, 67890, "Physics");
    Teacher teacher2("Dr. Johnson", 50, 67891, "Chemistry");

    // 输出学生信息
    cout << "Student Information:" << endl;
    student1.printInfo();
    student2.printInfo();

    // 输出教师信息
    cout << "\nTeacher Information:" << endl;
    teacher1.printInfo();
    teacher2.printInfo();

    return 0;
}
