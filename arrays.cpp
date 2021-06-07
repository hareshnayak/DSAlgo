#include<iostream>
using namespace std;
/*
ARRAYS

GENERATING SUBARRAYS

Given an array output all sub-arrays

Algorithm




*/


int main(){

int n;
cout<<"Input n : "<<endl;
cin>>n;
int arr[n];

for(int i = 0; i<n;i++){
    cout<<"Enter arr["<<i<<"] : ";
    cin>>arr[i];
}
int c =0;
cout<<"Output substrings"<<endl;
for(int i =0 ; i<n ; i++){
    for(int j = i; j<n;j++){
            cout<<"subArray"<<++c<<" : ";
            //Printing elements of the subArray
        for(int k = i;k<=j;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
}


