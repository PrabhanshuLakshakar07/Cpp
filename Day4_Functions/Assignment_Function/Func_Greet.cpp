#include <iostream>

using namespace std;

void Great(string n){
    cout<<"Hello!"<<n;
}

int main(){
    string n;

    cout<<"Enter Your Name Please ";
    cin>>n;

    Great(n);
}