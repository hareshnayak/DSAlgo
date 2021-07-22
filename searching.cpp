#include<bits/stdc++.h>
using namespace std;

// Binary search : Return index if found and -1 if not found
// works only for sorted arrays
int binSearch(int a[],int n, int find){
    sort(a,a+n);
    int start = 0, end = n-1;
    int mid;
    while(start<=end){       
        mid = start +(end-start)/2;
        if(a[mid]==find)  return mid+1;                         
        else if (find<a[mid]) end = mid -1;              
        else start = mid+1; 
    }
    return -1;
}
void printARR(int a[], int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int firstOcc(int a[],int n, int find){
    sort(a,a+n);
    printARR(a,n);
    int s = 0, e = n-1, mid;
    // used in the second approach
    int ans = -1;
    while(s<=e){
        mid = ((s+e)%2==0)?(s+e)/2:(s+e+1)/2;
        if(a[mid]==find){
            // One approach
            // for(int i = mid-1; a[i]==find;--i)
            // return i;
            // return mid;

            // another approach
                ans = mid;
                e = mid-1; 
                // s = mid +1; // last occurrance
        }
        else if (find<a[mid]) e = mid -1;              
        else s = mid+1; 
    }
    return ans;
}

// Return square root of a given no. to p no. of decimal places(precision)
// Application of binary search
float binsquareroot(int n, int p){
    int s = 0,e = n-1,mid;
    float ans;
    while (s<=e){
        mid = ceil((s+e)/2);
         if(mid*mid == n){
             ans = mid;
             break;
         }
        else if(mid*mid <=n){
            ans = mid;
            s = mid+1;
        }
        else {
            e = mid-1;
        }
    }
    float inc = 0.1;
    for(int i = 0; i<p;i++){
        while(ans*ans<n){
            ans+=inc;
        }
        ans -= inc;
        inc = inc/10;  
    }
    return ans;
}

// Given an array which is sorted and rotated.
// you need to find out a particular element.
int findinRotated(int *a, int n, int find, int rf){
    // to sort the array impliciti sorting 
    sort(a, a+n);
    printARR(a,n);

    // to rotate the array by the factor
    int k = 0;
    while(k<rf){
        int temp = a[0];
        for(int i = 0; i<n;i++){
            a[i]=a[i+1];
        }
        a[n-1] = temp;
        k++;
    }
    printARR(a,n);
    int s = 0,e = n-1,mid, ans = -1;
    while(s<=e){
        mid = ((s+e)%2==0)?(s+e)/2:(s+e+1)/2;
        if(a[mid]==find) {ans = mid; return ans;}
        else if(a[s]<a[mid])
        {
            if(a[s]<=find && a[mid]>=find)
            {                
                e = mid -1;                
            }
            else {
                s = mid+1;                
            }
        }
    }
    return ans;
}

int main() {
    int arr[10] = {2,12,8,9,12,12,13,13,12,14};
    // cout<<firstOcc(arr,10,12);
    // cout<<binsquareroot(10,3);
    cout<<findinRotated(arr,10,2,4);
    return 0;
}




// ceil((start+end)/2)
