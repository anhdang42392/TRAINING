#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double payAmount = 2200;
    double payPeriods = 26;
    double annualPay = payAmount *payPeriods ;
    cout << "The total annual pay: " << annualPay << endl;
    return 0;
}