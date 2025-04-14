// student management system
#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    string name;
    int age;
    string department;
    int subjects;
    int *marks;
    static int count;

public:
    student(int n = 0, int a = 0, int d = 0, int s = 0, int *m = 0)
    {
        count++;
        name = n;
        age = a;
        department = d;
        subjects = s;
        marks = m;
    }

    void input()
    {
        cout << "Enter name ";
        cin >> name;
        cout << "Enter age";
        cin >> age;
        cout << "Enter department ";
        cin >> department;
        cout << "Enter number of subjects ";
        cin >> subjects;

        marks = new int[subjects];

        for (int i = 0; i < subjects; i++)
        {
            cout << "Enter marks of a subject " << i + 1;
            cin >> *(marks + i);
        }
    }

    void display()
    {
        cout << "name" << name;

        cout << "age" << age;

        cout << "department" << department;

        cout << "number of subjects" << subjects;

        for (int i = 0; i < subjects; i++)
        {
            cout << "marks of a subjects " << *(marks + i);
        }
    }

    ~student()
    {
        count--;
        delete marks;
        marks = nullptr;
    }
};
int student::count=0;
int main()
{
    
 int n;
 cout<<"Enter number of students "<<endl;
 student* students=new student[n];


 for(int i=0;i<n;i++){
    students[i].input();
 } 
  for(int i=0;i<n;i++){
    students[i].display();
 } 


 delete[] students;



    return 0;
}
