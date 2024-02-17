#include<bits/stdc++.h>
using namespace std;

class Car{
public:
    string model;
    string make;
    int rentalFee;

    Car(string cm, string cmk){
     model= cm;
     make =cmk;
       rentalFee = 0;
     cout << "Car 1: created with no rental fee. "<< endl;

    }
    Car (string cm, string cmk,int cr){
    model= cm;
     make =cmk;
     rentalFee=cr;

     cout << "Car 2: created with rental fee"<< rentalFee<< ".Rental Fee:"<< rentalFee<< endl;
    }
};
 int main() {
    Car c1("Sedan", "Toyota");
    Car c2("SUV", "Ford", 50);


    c1.rentalFee = 50;

    return 0;
}
