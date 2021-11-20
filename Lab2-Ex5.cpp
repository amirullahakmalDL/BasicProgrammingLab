#include<iostream>
#include<string>
using namespace std;
int main(){

    string car_plate;
    int day, month, year;
    float time_in, time_out, payment;

    cout<<"Welcome to Parking System"<<endl;
    cout<<"Please enter your car plate: ";
    getline(cin, car_plate);
    cout<<"Please enter your date. The format should be dd/mm/yyyy: ";
    cin>>day>>month>>year;
    cout<<"Please enter your time in: ";
    cin>>time_in;
    cout<<"Please enter your time out: ";
    cin>>time_out;

    if (time_out - time_in <= 1.0){
        payment = 3.00;
    }
    else if (time_out - time_in <= 2.0){
        payment = 4.00;
    }
    else if (time_out - time_in <= 3.0){
        payment = 5.00;
    }

    cout<<"Parking Sys Sdn. Bhd"<<endl;

    cout<<"Car Plate: "<<car_plate<<endl;
    cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;
    cout<<"Time In: "<<time_in<<"\tTime Out: "<<time_out<<endl;
    cout<<"Total Payment: RM "<<payment<<endl;

    return 0;

}