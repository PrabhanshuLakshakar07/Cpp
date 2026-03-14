#include<iostream>
using namespace std;

int search(int arr[],int n,int key){
    for(int i=0;i<=n;i++){


        if(arr[i]==key){
            return i;
        }

        

    }

}


int main (){
    int n,key;
    cout<<"enter the number ";
    cin>>n;
    int arr[n];
    cout<<"enter the array element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the key to search :";
    cin>>key;
    int index=search(arr,n,key);
    if(index!=-1){
        cout<<"key found at index :"<<index;
    }
    else{
        cout<<"key not found in array";
    }
    



}