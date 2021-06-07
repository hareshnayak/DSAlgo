#include<iostream>
using namespace std;
/*
ARRAYS

GENERATING SUBARRAYS

Given an array output all sub-arrays

Finding the maximum/minimum sum subArray

- Generate all the subArrays
- Compare with current sum to max sum

*/


int main(){

int n,c=0,maxSum = 0, currentSum;
int left, right;
cout<<"Input n : "<<endl;
cin>>n;
int arr[n];

for(int i = 0; i<n;i++){
    cout<<"Enter arr["<<i<<"] : ";
    cin>>arr[i];
}
cout<<"Output substrings"<<endl;
for(int i =0 ; i<n ; i++){
    for(int j = i; j<n;j++){
            cout<<"subArray"<<++c<<" : ";
            //Printing elements of the subArray
            currentSum = 0;
        for(int k = i;k<=j;k++){
            cout<<arr[k]<<" ";
            currentSum +=arr[k];
        }
        cout<<endl;
        if(maxSum<=currentSum){
            maxSum = currentSum;
            left = i;
            right = j;
        }
    }
    cout<<endl;
}
cout<<"max Sum : "<<maxSum<<" with subArray : "<<left<<","<<right;
return 0;
}
