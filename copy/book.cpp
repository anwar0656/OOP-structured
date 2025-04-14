#include<iostream>
using namespace std;
class book{
    private:
    string title;
    string *author;

    public:
    book(string t,string a){
        title=t;
        author=new string;
        *author=a;
    }

    book(book &obj){
        title=obj.title;
        author=new string;
        *author=*(obj.author);
    }

};
int main(){

    return 0;
}