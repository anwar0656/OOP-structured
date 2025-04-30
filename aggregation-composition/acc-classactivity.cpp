#include<iostream>
using namespace std;
#define endl '\n'
class acc{
    private:
    int accid;
    int accbalance;
    public:
    acc(int id=0,int bal=0): accid(id),accbalance(bal){}
    void display(){
        cout<<accid<<" "<<accbalance<<endl;
    }
};

class employee{
    private:
    string name;
    int sallary;
    acc account;
    public:
    employee(string n="",int s=0,int id=0,int bal=0):
    name(n),sallary(s),account(id,bal){}
    void display (){
        cout<<name<<" "<<sallary<<endl;
        account.display(); // use actual object to call its main display function 
    }
};
int main(){
    employee e("Muhammad anwar",30000,1,10000);
    e.display();


    return 0;
}