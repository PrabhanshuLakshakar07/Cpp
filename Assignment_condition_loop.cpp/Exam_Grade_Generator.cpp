#include<iostream>


using namespace std;

int main(){

    int readMarks;
    cout<<"Enter the Marks :=";
    cin>>readMarks;

    if (readMarks>=90)
     {
        cout<<"Grade A+ , Excellent!";
    }
    else if (readMarks>=80)
    {
        cout<<"Grade A , Very Good!";
    }
    else if (readMarks>=70)
    {
        cout<<"Grade B , Good! mast h yese karte raho ";
    }
    else if (readMarks>=60)
    {
        cout<<"Grade C , Fair! keep study hard";
    }
    else if (readMarks>=50)
    {
        cout<<"Grade D , Poor! study hard ";
    }
    else{
        cout<<"Grade F , Fail! Pad le Bete";
    }
    cout<<"Grade:-"<<readMarks;

    return 0;


}