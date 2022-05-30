#include <iostream>
using namespace std;
class Vehicle{
private:
    int types=2;
public:
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
    string color;
    Car(int x){
        cout<<"Car Param Const with argument "<<x<<endl;
    }
    ~Car(){
        cout<<"Car Dest"<<endl;
    }
    void print(){
        tyres="lol";
        cout<<tyres<<endl;
    }
};
int main(){
    Car c(101);
    c.Vehicle::print();
    c.fuel="tel";
    cout<<c.fuel<<endl;
    c.print();
}
