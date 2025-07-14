#include <iostream>
#include <iomanip>
using namespace std ;
int main (){
    double cost = 14.95;
    double profit =0.35;
    double selling_price = cost + (cost * profit);
    cout << "The selling price: " <<fixed << setprecision(2) << selling_price << " $" << endl;
    return  0;
}