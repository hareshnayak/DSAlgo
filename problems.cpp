#include<bits/stdc++.h>
using namespace std;

// distinct elements in the array
// O(n) time complexity
// O(n) auxiliary space complexity
int returnDistinct(int arr[], int n){    
    int c = 0;
    unordered_set <int>s; // unordered set takes only distinct elements 
    for(int i = 0;i<n;i++){
        s.insert(arr[i]);
    }
    c=s.size();
    return c;
}

//return the frequenc of the elements in array
// O(n) time complexity
// O(n) auxiliary space
void returnFreq(int arr[], int n){
    unordered_map <int, int>m;
    for(int i = 0 ; i<n;i++){
       m[arr[i]]++;
    }
    for(auto x : m){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

// Binary search
// return the index of the element if present
int BinarySearch(int arr[], int n , int key){
    sort(arr,arr+n);
    int high = arr[n-1] , low = arr[0];
    int mid = (high+low)/2; 
    bool flag = false;
    while(low<=high){
        if(arr[mid]==key) {
            flag = true;
            break;
            }
        if(arr[mid]<key) low = mid-1;
        else if(arr[mid]>key) high = mid+1;        
    }
    if(flag == true) return mid;
    return -1;    
}

int main() {
int arr[5] = {1,2,3,1,4};
// cout<<returnDistinct(arr, 5)<<endl;
// returnFreq(arr, 5);
cout<<BinarySearch(arr,5,4);
}
