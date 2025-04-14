#include<iostream>
using namespace std;
class rational{
    private:
    int p,q;
    public:
    rational(int x=0,int y=0): p(x),q(y) {}

   friend bool operator ==(rational r1,rational r2){
   return(r1.p==r2.p) && (r1.q==r2.q);

   }

   friend ostream& operator <<(ostream &o,rational c){
    o<<c.p<<"/"<<c.q;
    return o;
   }
};
int main(){
    rational r1(2,3);
    rational r2(2,3);
    rational c;
    if (r1==r2)
    {
        cout<<"Equal"<<endl;
    }
    else
    {
        cout<<"not equal"<<endl;
    }
    
    

    return 0;
}