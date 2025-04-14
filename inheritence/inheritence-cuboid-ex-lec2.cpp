#include<iostream>
using namespace std;

class rectangle {
    private:
        int length, breadth;
    public:
        rectangle() {}
        void setlength(int l) { length = l; }
        void setbreadth(int b) { breadth = b; }
        int getlength() { return length; }
        int getbreadth() { return breadth; }
};

class cuboid : public rectangle {
    private:
        int height;
    public:
        cuboid(int l, int b, int h) {
            setlength(l);
            setbreadth(b);
            height = h;
        }

        void setheight(int h) { height = h; }
        int getheight() { return height; }

        int volume() {
            return getlength() * getbreadth() * height;
        }
};

int main() {
    cuboid c(10, 11, 12);
    cout << "Volume: " << c.volume() << endl;
    return 0;
}
