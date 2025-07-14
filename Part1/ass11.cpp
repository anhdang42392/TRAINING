#include <iostream>
#include <iomanip>
using namespace std ;
int main(){
    double gasoline = 20;
    double MPG_town = 23.5;
    double MPG_highway = 28.9;
    double avr_MPG = (MPG_highway + MPG_town) /2;
    double distance = gasoline * avr_MPG ;
    cout << "The distance: " << distance << " miles." << endl;
    return  0;
}