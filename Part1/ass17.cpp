#include <iostream>
#include <iomanip>
using namespace std ;
int main(){
    double customers = 16500;
    double energy_drink = 0.15;
    double citrus_flavored = 0.58;
    cout << fixed << setprecision(1);
    cout <<"The number customers purchase energy drinks: " << customers * energy_drink << endl ;
    cout << "The number customers purchase citrus-flavored: " << customers * citrus_flavored << endl;
    return 0;
}