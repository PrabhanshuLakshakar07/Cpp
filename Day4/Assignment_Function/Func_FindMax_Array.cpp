#include<iostream>
using namespace std;

int findMax(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
   
    return max;


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
    int maximum=findMax(arr,n);
    cout<<"maximum number is :"<<maximum;
}



