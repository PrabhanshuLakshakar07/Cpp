#include <iostream>
using namespace std;
int main() {
    float principal, rate, time, SI;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time (): ";
    cin >> time;
    SI = (principal * rate * time) / 100;
    cout << "Simple Interest = " << SI << endl ;
    return 0;
    
}