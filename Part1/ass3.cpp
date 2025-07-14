#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double purchase = 95 ;
    double state_tax = 0.04;
    double coutry_tax = 0.02;
    double total_tax = purchase *(state_tax + coutry_tax);
    cout << "The total tax: "<<fixed<<setprecision(2) << total_tax <<endl;
    return 0 ;
}