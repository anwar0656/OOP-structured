#include<iostream>
using namespace std;
class student{
    private:
    string name;
    float *cgpa;

    public:

    student(string n,float c){
        name=n;
        cgpa=new float;
        *cgpa=c;
    }
student(const student &obj){
name=obj.name;
cgpa=new float;
*cgpa=*(obj.cgpa);


}

void display(){
    cout<<"Name "<<name<<" CGPA "<<*cgpa<<endl;
}

~student(){
    delete cgpa;
}

};
int main(){

student s1("Muhammad anwar ",4.7);
    return 0;
}