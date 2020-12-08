#include <bits/stdc++.h>

using namespace std;

class student
{

    string name;
    int age;
    bool gender;

public:
    void getData(string name, int age, bool gender)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
    }

    void printData()
    {
        cout << "Name -> " << name << endl;
        cout << "Age -> " << age << endl;
        cout << "Gender -> " << gender << endl;
    }

} a, b, c;

int main()
{
    student stud1, stud2;
    string name;
    int age;
    bool gender;
    cin >> name >> age >> gender;
    a.getData(name, age, gender);
    cin >> name >> age >> gender;
    b.getData(name, age, gender);
    a.printData();
    b.printData();
    return 0;
}