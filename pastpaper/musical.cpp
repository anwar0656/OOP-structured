#include<iostream>
using namespace std;
class instrument{
    public:

    void play(){
        cout<<"instrumental "<<endl;
    }
};

class guitar:virtual public instrument{
    public:
void play(){
    cout<<"guitar is played "<<endl;
}
    
};

class drum:virtual public instrument{
public:
void play(){
    cout<<"Drum is played "<<endl;
}
};

class band: public guitar,public drum{
    public:

    void play(){
        cout<<"band is played via "<<endl;
       instrument::play();
       guitar::play();
       drum::play();
    }
};
int main(){

band b1;
b1.play();

    return 0;
}