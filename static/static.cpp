#include<iostream>
using namespace std;
class day{
    private:
    static int count;
    public:
    day(){
        count ++;
    } 
    ~day(){
        count --;
    }

    static int getcount (){
        return count;
    }

};
int day::count=0;
int main (){
day d1,d2,d3,d4;
cout<< day::getcount();
    return 0;
}