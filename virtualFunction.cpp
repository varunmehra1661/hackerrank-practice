#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person
{
protected:
    string name;
    int id;
    int age;

public:
    virtual int nextId() = 0;
    virtual void getdata()
    {
        id = nextId();
        cin >> name >> age;
    }
    virtual void putdata()
    {
        cout << name << " " << age;
    }
};

class Professor : public Person
{
    static int pId;
    int publications;

public:
    virtual int nextId()
    {
        return ++pId;
    }
    virtual void getdata()
    {
        Person::getdata();
        cin >> publications;
    }
    virtual void putdata()
    {
        Person::putdata();
        cout << " " << publications << " " << id << endl;
    }
};
int Professor::pId = 0;

class Student : public Person
{
    static int sId;
    int marks;

public:
    Student() : marks(0) {}
    virtual int nextId()
    {
        return ++sId;
    }
    virtual void getdata()
    {
        Person::getdata();
        for (int i = 0; i < 6; i++)
        {
            int t;
            cin >> t;
            marks += t;
        }
    }
    virtual void putdata()
    {
        Person::putdata();
        cout << " " << marks << " " << id << endl;
    }
};
int Student::sId;
int main()
{

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
