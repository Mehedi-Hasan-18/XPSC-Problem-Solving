#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string studentId;
    string name;
    string course;
    Student(string studentId, string name, string course)
    {
        this->studentId = studentId;
        this->name = name;
        this->course = course;
    }

    void displayInfo()
    {
        cout << "Student Details:" << endl;
        cout << "ID: " << studentId << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string id, name, course;
    cin >> id >> name >> course;

    Student student(id, name, course);
    student.displayInfo();

    return 0;
}
