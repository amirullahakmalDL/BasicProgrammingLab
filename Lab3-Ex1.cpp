//You can use this example for Q4 on logic question

# include <iostream>
using namespace std;
int main(){

    int w, x, y, z;
    w = 2;
    x = -4;
    y = 2;
    z = 300;

    if (y > x && !(y >= x)){
        cout<<"A is true"<<endl;
    }
    if ( z > 100 || z < w){
        cout<<"B is true"<<endl;
    }
    if ( (y * 100 - x +100) < z ){
        cout<<"C is True"<<endl;
    }
    if ((y == w && z > x) || !(x < 10)){
        cout<<"D is True"<<endl;
    }


    return 0;
}