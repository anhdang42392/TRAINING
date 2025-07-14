#include <iostream>
#include <iomanip>
using namespace std ;
int main(){
    double once_acre = 43.560;
    double land = 391.876 ;
    cout << "The number of acres: " <<fixed << setprecision(2)<< land / once_acre << endl;
    return  0;
}