#include<iostream>
using namespace std;
int main(){

    char belacan_code, S, B, M;
    float kg, price;

    cout<<"Welcome to Belacan Penang Sdn Bhd"<<endl;
    cout<<"Belacan Code \t Belacan Name \t Shipping Charge(RM)"<<endl;
    cout<<"S \t\t Seberang Prai \t\t 7.40"<<endl;
    cout<<"B \t\t Belacan BTU \t\t 10.50"<<endl;
    cout<<"M \t\t Belacan Mak Timah  \t 14.70"<<endl;

    cout<<"Enter the belacan code: ";
    cin>>belacan_code;
    cout<<"Enter the belacan weight: ";
    cin>>kg;

    if (belacan_code == 'S'){
        price = kg * 7.40;
    }
    else if (belacan_code == 'B'){
        price = kg * 10.50;
    }
    else if (belacan_code == 'M'){
        price = kg * 14.70;
    }
    else
    cout<<"The code given is not available";

    cout<<"################################"<<endl;
    cout<<"State Code : "<<belacan_code<<endl;
    cout<<"Weight(kg): "<<kg<<endl;
    cout<<"Total Price : "<<price<<endl;

    return 0;


}