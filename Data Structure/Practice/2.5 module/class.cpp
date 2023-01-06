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

    void print_info()
    {
        cout << "Name: " << name << " "
             << "Student Id: " << stu_id << " "
             << "Age: " << age << " "
             << "Father Name: " << father_name << " "
             << "Mother Name: " << mother_name << "\n"
             << "\n";
    }
};

class Teacher
{
private:
    string name;
    string stu_id;
    int age;
    string father_name;
    string mother_name;

public:
    void print_info()
    {
        cout << "Name: " << name << " "
             << "Student Id: " << stu_id << " "
             << "Age: " << age << " "
             << "Father Name: " << father_name << " "
             << "Mother Name: " << mother_name << "\n"
             << "\n";
    }

    void TeacherInfo(string s, string id, int ag)
    {
        name = s;
        stu_id = id;
        age = ag;
    }
};

class Ractangle
{
public:
    int width, height;
    Student s;
    int area()
    {
        return width * height;
    }
    int perimeter()
    {
        return 2 * (width + height);
    }
};

// Recursive Class

class Person
{
public:
    string name;
    Person *father, *mother;

    void print_information()
    {
        cout << "Name: " << name << "\n";
        cout << "Father Name: " << father->name << "\n";
        cout << "Mother Name: " << mother->name << "\n";
    }
};

class User
{
protected:
    string name;
    int age;
};

class Admin : User
{
private:
    string designation;

public:
    void set(string s, int ag, string dg)
    {
        name = s;
        age = ag;
        designation = dg;
    }

    void print()
    {
        cout << name << "\n";
        cout << age << "\n";
        cout << designation << "\n";
    }
};

int main()
{
    Admin ad;
    ad.set("Faisal", 77, "Admin");
    ad.print();

    Teacher stu;

    stu.TeacherInfo("Faisal Karim", "GJ100", 71);
    stu.print_info();

    Person p;
    p.father = new Person;
    p.mother = new Person;
    p.name = "A";
    p.father->name = "B";
    p.mother->name = "C";
    p.print_information();

    Student s;
    s.name = "Safin Arab";
    s.stu_id = "GJ2021009144";
    s.age = 5;
    s.father_name = "Anwar Hossian";
    s.mother_name = "Shahin Akter";

    Student s2;
    s2.name = "Faisal Karim";
    s2.stu_id = "GJ2021009143";
    s2.age = 22;
    s2.father_name = "Farid Ahmed";
    s2.mother_name = "Khaleda Begum";

    // s.print_info();
    // s2.print_info();

    Ractangle r1;
    r1.width = 8;
    r1.height = 4;

    // cout << r1.area() << "\n";
    // cout << r1.perimeter() << "\n";
    r1.s.name = "Faisal Karim";
    r1.s.age = 22;

    // r1.s.print_info();

    return 0;
}