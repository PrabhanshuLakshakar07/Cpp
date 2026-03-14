#include<iostream>
using namespace std;

int reverseArray(int arr[],int n){
    int reverse[n];
    for(int i=0;i<n;i++){
        reverse[i]=arr[n-1-i];
    }
    cout<<"reverse of array is :";
    for(int i=0;i<n;i++){
        cout<<reverse[i]<<" ";
    }
    
}
int main (){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int arr[n];
    cout<<"enter the array element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int reverse=reverseArray(arr,n);


}