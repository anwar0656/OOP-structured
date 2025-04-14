#include<iostream>
using namespace std;
class rational{
    private:
    int p,q;
    public:
    rational(int x=0, int y=0): p(x),q(y){}

    rational operator -(rational a){
        rational temp;
        temp.p=p-a.p;
        temp.q=q-a.q;
        return temp;
    }

    friend ostream& operator<<(ostream&o ,rational output){
        o<<output.p<<"/"<<output.q;
        return o;
    }
};

int main(){
    rational r1(4,5);
    rational r2(1,2);    
    rational output;
    output=r1-r2;
    cout<<output<<endl;
    return 0;
}