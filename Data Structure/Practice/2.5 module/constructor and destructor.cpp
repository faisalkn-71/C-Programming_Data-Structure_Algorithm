#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    string stu_id;
    int age;
    string father_name;
    string mother_name;

    Student()
    {
    }

    Student(string s, string id, int ag, string f_name, string m_name)
    {
        name = s;
        stu_id = id;
        age = ag;
        father_name = f_name;
        mother_name = m_name;
    }

    Student(string name, int age, string id)
    {
        this->name = name;
        stu_id = id;
        this->age = age;
    }

    void print_info()
    {
        cout << "Name: " << name << " "
             << "Student Id: " << stu_id << " "
             << "Age: " << age << " "
             << "Father Name: " << father_name << " "
             << "Mother Name: " << mother_name << "\n"
             << "\n";
    }

    ~Student()
    {
        cout << "Called";
        print_info();
    }
};

int main()
{
    Student s("A", "GJ100", 22, "B", "C");
    s.print_info();

    Student s1;
    s1.print_info();

    Student s2("X", 100, "Z77");
    s2.print_info();
}