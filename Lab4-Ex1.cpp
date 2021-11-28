#include<iostream>
using namespace std;
int main(){

    const float feeCharge = 1.05;
    const float firstFee = 6830;
    float Fee =  firstFee;
    int year = 1;

    while (year <= 5 ){

        cout<<"Fee for year "<<year<<" is "<<Fee<<endl;
        Fee *= feeCharge; 
        year++;
    }
}