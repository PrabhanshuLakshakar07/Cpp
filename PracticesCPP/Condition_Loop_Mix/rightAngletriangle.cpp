#include<iostream>
using namespace std;


main (){
   for (int i = 1; i <= 4; i++) {       // i = Row number
    for (int j = 1; j <= i; j++) {   // j chalega sirf 'i' tak
        cout << "* ";
    }
    cout << endl;
}




}