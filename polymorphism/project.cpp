#include<iostream>
using namespace std;
class shape{
    public:
    virtual float area()=0;
    virtual float perimeter()=0;
};

class rectangle:public shape{
protected:
int length;
int width;
public:
rectangle(int l,int w): length(l),width(w){}
float area(){
    return length*width;
}
float perimeter(){
    return 2*(length+width);
}
};
class circle:public shape{
    int radius;

    public:
    circle(float r):radius(r){}
    float area (){
    return 3.142*radius*radius;
}
float perimeter(){
    return 2*3.142*radius;
}
};
int main(){
    shape *p=new rectangle(10,5);
   cout<<"Area of rectangle "<< p->area()<<endl;
    cout<<"\n";
    cout<<"Perimeter of rectangle "<<p->perimeter()<<endl;
     
     int radius=3;
     p=new circle(3);
    cout<<"Area of a circle is "<< p->area()<<endl;
     cout<<"Perimeter of Circle is "<<p->perimeter()<<endl;




    return 0;
}