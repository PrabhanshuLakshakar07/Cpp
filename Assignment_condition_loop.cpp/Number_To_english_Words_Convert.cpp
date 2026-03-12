#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin>>n;

    string ones[]={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    string teens[]={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    string tens[]={"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

    if(n < 10)
        cout<<ones[n];
    else if(n < 20)
        cout<<teens[n-10];
    else
    {
        cout<<tens[n/10];
        if(n%10 != 0)
            cout<<" "<<ones[n%10];
    }
}