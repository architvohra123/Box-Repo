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
int main(){
    Car c;
}
