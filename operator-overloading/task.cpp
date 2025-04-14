#include<iostream>
using namespace std;
class rational{
    private:
    int p,q;
    public:
    rational(int py=0,int qy=0): p(py),q(qy) {}
    rational operator+(rational a){
        rational temp;
        temp.p=p+a.p;
        temp.q=q+a.q;
        return temp;

    }

    friend ostream& operator<<(ostream &o,rational &c){
        o<<c.p<<"/"<<c.q<<endl;
    return o;
    }
};
int main(){
    rational r1(10,3);
    rational r2(2,5);
    rational c;
    c=r1+r2;
    cout<<c<<endl;

    return 0;
}