#include <iostream>
#include <iomanip>
using namespace std ;
int main(){
    double share = 35 ;
    double number_shares = 750 ;
    double commission = 0.02;
    double amount_paid = share * number_shares;
    double amount_commission = amount_paid * commission;
    cout << "The amount paid for stock alone: $" << amount_paid << endl ;
    cout << "The amount of commision: $" << amount_commission << endl;
    cout << "The total amount paid: $" << amount_paid + amount_commission << endl;
    return  0;
}