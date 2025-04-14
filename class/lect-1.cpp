#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    int age;

public:
    student(int a = 0)
    {
        age = a;
    }
    void setage(int a)
    {
        age = a;
    }

    int getage()
    {
        return age;
    }

    void input()
    {
        cout << "Enter age " << endl;
        cin >> age;
    }
    void display()
    {
        cout << "Age:" << age << endl;
    }
};
int main()
{

    student s1;
    student s2;
    s2.input();
    s2.display();

    return 0;
}