#include<iostream>
using namespace std;

int countNegative(int arr[],int n){

    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            count++;
        }
    }
    return count;


}


int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int arr[n];
    cout<<"enter the array element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int countNegativeNumbers=countNegative(arr,n);
    cout<<"count of negative numbers is:"<<countNegativeNumbers;
}