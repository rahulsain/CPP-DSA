#include <bits/stdc++.h>

using namespace std;

class student
{

    string name;
    int age;
    bool gender;

public:
    student(){
        cout<<"Default Constructor" << endl;
    }
    student(string name, int age, bool gender)
    {   cout<<"Paramaterized Constructor" << endl;
        this->name = name;
        this->age = age;
        this->gender = gender;
    }
    ~student(){
        cout<<"Deconstructor"<<endl;
    }

    student(student &a){
        cout<<"Copy Constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

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

    bool operator==(student &a)
    {
        if (a.name == name && a.age == age && a.gender == gender)
            return true;
        return false;
    }

} a, b, c;

int main()
{
    student stud1, stud2("Neha", 18, 0);
    string name;
    int age;
    bool gender;
    cin >> name >> age >> gender;
    stud1.getData(name, age, gender);
    cin >> name >> age >> gender;
    b.getData(name, age, gender);
    if (a == c || b == stud2 || c == stud1)
        cout << "same";
    else
        cout << "different";
    cout << endl;
    student a = b; // deep copy
    c = b; // shallow copy
    a.printData();
    b.printData();
    c.printData();
    return 0;
}