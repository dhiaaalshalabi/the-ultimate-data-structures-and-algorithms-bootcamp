#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int id;
    string name;
    float grade;
} s1, s2;

void display(Student s);

int main(int argc, char const *argv[])
{
    Student s3;
    s3.id = 1;
    s3.name = "Name3";
    s3.grade = 3.8;

    cout << "Enter id: ";
    cin >> s1.id;
    cout << "Enter name: ";
    cin >> s1.name;
    cout << "Enter grade: ";
    cin >> s1.grade;

    display(s1);
    display(s3);

    return 0;
}

void display(Student s)
{
    cout << s.id << "\n";
    cout << s.name << "\n";
    cout << s.grade << "\n";
}
