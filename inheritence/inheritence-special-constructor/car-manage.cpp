#include<iostream>
using namespace std;

class vechile {
protected:
    string brand;
    string model;
    int price;
    vechile(string b = "", string m = "", int p = 0)
        : brand(b), model(m), price(p) {}
    void display() {
        cout << "Brand: " << brand << "\nModel: " << model << "\nPrice: " << price << endl;
    }
};

class car : virtual public vechile {
protected:
    int n_doors;
public:
    car(int n_d = 0) : n_doors(n_d) {}
    void display1() {
        vechile::display();
        cout << "Number of Doors: " << n_doors << endl;
    }
};

class bike : virtual public vechile {
protected:
    int e_capacity;
public:
    bike(int e_c = 0) : e_capacity(e_c) {}
    void display2() {
        vechile::display();
        cout << "Engine capacity: " << e_capacity << endl;
    }
};

class electricbike : public bike, public car {
private:
    int batery_backup;
public:
    electricbike(string b = "", string m = "", int p = 0, int n_d = 0, int e_c = 0, int bb = 0)
        : vechile(b, m, p), car(n_d), bike(e_c), batery_backup(bb) {}

    void displayAll() {
        vechile::display();
        cout << "Number of Doors: " << n_doors << endl;
        cout << "Engine Capacity: " << e_capacity << endl;
        cout << "Battery Backup: " << batery_backup << endl;
    }
};

int main() {
    electricbike eb("Tesla", "Model X", 100000, 4, 2000, 500);
    eb.displayAll();
    return 0;
}
