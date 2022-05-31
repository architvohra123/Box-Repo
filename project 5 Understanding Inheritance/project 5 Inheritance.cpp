#include <iostream>
using namespace std;
class Vehicle{
private:
    int types=2;
public:
    string color;
    string fuel="oil";
    void print(){
        cout<<"Vehicle is printed"<<endl;
    }
    Vehicle(){
        cout<<"Vehicle Const"<<endl;
    }
    ~Vehicle(){
        cout<<"Vehicle Dest"<<endl;
    }
protected:
    string tyres="rubber";
};
class Car: public Vehicle{
public:
    int passengers;
    Car(){
        cout<<"Car Const"<<endl;
    }
    ~Car(){
        cout<<"Car Dest"<<endl;
    }
    void print(){
        cout<<"Car is printed";
    }
};
class Truck: public Vehicle{
public:
    int storage;
    Truck(){
        cout<<"Truck const"<<endl;
    }
    ~Truck(){
        cout<<"Truck dest"<<endl;
    }
    void print(){
        cout<<"Truck is printed"<<endl;
    }
};
class Bus:public Car,public Truck{
public:
    Bus(){
        cout<<"Bus const"<<endl;
    }
    ~Bus(){
        cout<<"Bus dest"<<endl;
    }
    void print(){
        cout<<"Bus is printed"<<endl;
    }
};
int main(){
    Vehicle v;
    v.print();
    Car c;
    c.print();
    Truck t;
    t.print();
    Bus b;
    b.print();
}
