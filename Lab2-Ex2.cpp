#include<iostream>
#include<string>
using namespace std;
int main(){

    string fullName;
    string fatherName;

    cout << "What is your name?: " ;
    getline(cin, fullName);

    cout<<fullName<<endl;

    cout << "What is your father's name: ";
    getline(cin, fatherName);

    cout<< fatherName<<endl;

    return 0;
}