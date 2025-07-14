#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double meal_charge = 88.76;
    double tax = 0.0675;
    double tip = 0.2;

    double tax_amount = meal_charge * tax ;
    double tip_amount = (meal_charge+tax_amount) * tip ;
    double total_bill = meal_charge + tax_amount + tip_amount ;
    cout << fixed << setprecision(2);
    cout << "Meal cost: " << meal_charge <<endl;
    cout << "Tax amount:  " << tax_amount << endl;
    cout << "Tip amount: " << tip_amount << endl;
    cout << "Total bill: " << total_bill << endl;
    return 0;
}