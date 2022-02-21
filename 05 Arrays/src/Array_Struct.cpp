#include <iostream>
#include <string>
using namespace std;

struct Subject
{
    int id;
    string name;
    float grade;
};

struct Student
{
    int id;
    string name;
    Subject subjects[6];
};

void display(Student s);

int main(int argc, char const *argv[])
{
    Student students[1000];
    students[0].id = 1;
    students[0].name = "Name";
    for (int i = 0; i < 6; i++)
    {
        students[0].subjects[i].id = 3;
        students[0].subjects[i].name = "DS";
        students[0].subjects[i].grade = 3.3;
    }
    display(students[0]);

    return 0;
}

void display(Student s)
{
    cout << s.id << "\n";
    cout << s.name << "\n";
    for (int i = 0; i < 6; i++)
    {
        cout << s.subjects[i].id << "\n";
        cout << s.subjects[i].name << "\n";
        cout << s.subjects[i].grade << "\n";
    }
}
