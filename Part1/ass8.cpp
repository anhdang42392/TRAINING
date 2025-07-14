#include <iostream>
#include <iomanip>
using namespace std ;
int main(){
    double item1 = 15.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 12.95;
    double item5 = 3.95;

    double tax = 0.07;
    double subtotal = item1 + item2 + item3 + item4 + item5;
    double tax_amount  = subtotal * tax ;
    cout << "Total: " <<fixed << setprecision(2) << subtotal + tax_amount << "$" <<endl;
    return  0;
}