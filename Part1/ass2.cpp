#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double percent = 0.58;
    double moneysales = 8.6;
    double division = moneysales * percent ;
    cout << "The division: " <<fixed << setprecision(2) <<  division << " millions" << endl; 
    return 0 ;
}