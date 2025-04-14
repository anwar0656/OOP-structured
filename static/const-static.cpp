#include<iostream>
using namespace std;
class dayofyear{
    private:
    int date,month,year;
    public:
    dayofyear(int d=0,int m=0,int y=0): date(d),month(m),year(y) {}
    void input(){
        cout<<"Enter date"<<endl;
        cin>>date;
        cout<<"Enter month"<<endl;
        cin>>month;
        cout<<"Enter year "<<endl;
        cin>>year;
    }

       void output() const{
        cout<<"date ";
        cout<<date;
        cout<<"month ";
        cout<<month;
        cout<<"year"<<endl;
        cout<<year;
    }
};
int main(){
    dayofyear today;
    today.input();
    today.output();
    dayofyear const birthday(23,5,2006);
    birthday.output();
    return 0;
}