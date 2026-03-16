#include <iostream>
#include <string>
using namespace std;

class Laptop{
    private :  string Brand ;
                int Ram;

    public:
    // Parameterized Constructor
    Laptop(string b, int r)
    {
        Brand = b;
        Ram = r;

        cout << "Laptop created: " << Brand << " " << Ram << "GB" << endl;
    }
     };

int main(){
    Laptop l1("Dell", 16);
    Laptop l2("HP", 8);
    Laptop l3("Apple", 32);
   
return 0;


}

