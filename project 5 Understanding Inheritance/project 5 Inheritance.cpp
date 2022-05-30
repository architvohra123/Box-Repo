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
};
int main(){
    Car c(101);
    c.print();
}
