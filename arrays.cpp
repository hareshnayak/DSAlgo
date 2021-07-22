#include<bits/stdc++.h>
using namespace std;
/*
ARRAYS

GENERATING SUBARRAYS

Given an array output all sub-arrays

*/
void maxSubArray(int n ,int arr[])
{
/*
Finding the maximum/minimum sum subArray
- Generate all the subArrays
- Compare with current sum to max sum

time complexity - n^3
*/

int c=0,maxSum = 0, currentSum;
int left, right;

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
cout<<"max Sum : "<<maxSum<<" is no."<<c<<" with subArray : "<<left<<","<<right;
}

void csumMaxSubArray(int n , int arr[])
{
    int cs[n] = {0}, ms = 0;
    int left, right, currentSum = 0;
    //Making Array of cumulative sum
    for(int i =0; i<n;i++)
    {
        if(i ==0)
            cs[i]=arr[i];
        else
        cs[i]=cs[i-1]+arr[i];
    }
    // Finding CurrentSum and then comparing it with maxSum
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = i; j<n;j++)
        {
            currentSum = cs[j] - cs[i-1];
            if(currentSum>ms)
            {
                ms = currentSum;
                left = i;
                right = j;
            }
        }
    }
     cout<<"max sum is : "<<ms<<" at "<<left<<","<<right<<endl;
}


void KadanesAlgo(int n , int arr[])
{
    int cs = 0, ms = INT_MIN;
    // It provides the maxSum subArray in O(n)
    // But it does not provide the subArray
    for(int i = 0; i<n;i++)
    {
        cs = cs + arr[i];       
        ms = max(cs, ms);
        if(cs < 0)
            cs = 0;
    }
    cout<<"max sum is : "<<ms<<endl;
}

int sumOfNo(int n){
    return n*(n+1)/2;
}

void searchNinsert0ifFound(int s, int n, int a[], int cap){
    //Isnserts 0 at the position if 's' is found
    for(int i=0; i<n;i++){
        if(a[i]==s){
            if(n==cap){
                cout<<"n = cap"<<endl;
                int g=2*cap;
                int arr[g] = {0};
                cout<<"cap = "<<cap<<" g = "<<g<<endl;
                for(int k = 0;k<n;k++){
                    arr[k]=a[k];
                }
                for(int j = n;j>=i;j--)
                {
                    arr[j+1]=arr[j];
                }
                arr[i]=0;
                for(int z =0 ;z<g;z++)
                    cout<<arr[z]<<' ';
                    cout<<endl;
            }
            else{
                cout<<"n != cap"<<endl;
                for(int j = n-1;j>=i;j--)
                {
                    a[j+1]=a[j];
                }                   
            a[i]=0;
            for(int z = 0 ;z<n+1;z++)
                cout<<a[z]<<' ';
                cout<<endl;
        }
        break;
        }        
    }    
}

// Return index of the largest no. in the given array
int returnLarge(int a[], int n){
for(int i = 0; i<n;i++){
    bool flag = true;
    for(int j = 0;j<n;j++){
        if(a[j]>a[i]){
            flag = false; 
            break;
        }
    }
    if(flag==true) return i;
}
return -1;
}

int returnLarge2(int a[], int n){
    int res = 0;
    for(int i=0;i<n;i++){
        if(a[i]>a[res])
        res = i;
    }
    return res;
}

int returnSecLarge(int a[], int n ){
    int large = 0;
    int seclar = 0;
    for(int i=0;i<n;i++){
        if(a[i]>a[large])
        large = i;
    }
    for(int k=0;k<n;k++){
        if(k!=large){
            if(a[k]>a[seclar]){
                seclar = k;
            }
        }
    }
    return seclar;
}

int secLarge2(int a[], int n){
    // if multiple same vlaues then the seconad largest is not the same no
    int large = 0;
    int seclar = 0;
    for(int i=0;i<n;i++){
        if(a[i]>a[large])
        large = i;
    }    
    for(int k=0;k<n;k++){
        if(k!=large && a[k] != a[large]){
            if(a[k]>a[seclar]){
                seclar = k;
            }
        }
    }
    if(a[seclar] = a[large]){
        return -1;
    } 
    return seclar;
}

int seclarge3(int a[], int n){
    int large = 0, secLarge = -1;
    for(int i = 1 ; i<n;i++)
    {
        if(a[i]>a[large])
        {
            secLarge = large;
            large = i;         
        }
        else if(a[i]!=a[large])
        {
            if( a[i]>a[secLarge] || secLarge == -1 )
                secLarge = i;            
        }
    }
    return secLarge;
}

void sendAll0End(int a[], int n){
    // time complexity is O(n^2)
    for(int i = 0; i<n;i++){
        if(a[i]==0){
            for(int k = i+1; k<n;k++){
             if(a[k]!=0)
            { swap(a[i],a[k]);   
             break;}
            }            
        }
    }
}

void sendAll0End2(int a[] , int n )
{
    int count = 0;
    for(int i =0; i<n;i++)
    {
       if(a[i]!=0)
        {
            swap(a[count],a[i]);
            count++;            
        }
    }
}

void printARR(int a[], int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int* reverseARR(int a[], int n){
    int low = 0, high = n-1;
    while(low<high){
        swap(a[low],a[high]);
        low++;
        high--;
    }
    return a;
}

int* leftrotate(int a[],int n){
    int d = a[0];
    for(int i =0;i<n;i++){
        a[i]=a[i+1];
    }
    a[n-1] = d;
    return a;
}

void deleteOp(int s, int a[], int n){
for(int i = 0 ; i<n;i++){
    if(a[i]==s){
        for(int j = i;j<n;j++){
            a[j]=a[j+1];
        }
    }
}
printARR(a,n);
cout<<0;
cout<<endl;
}

int rainWaterTRAP(int *arr, int n){
// left[i] contains height of tallest bar to the
    // left of i'th bar including itself
    int left[n];
 
    // Right [i] contains height of tallest bar to
    // the right of ith bar including itself
    int right[n];
 
    // Initialize result
    int water = 0;
 
    // Fill left array
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
        left[i] = max(left[i - 1], arr[i]);
 
    // Fill right array
    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        right[i] = max(right[i + 1], arr[i]);
 
    // Calculate the accumulated water element by element
    // consider the amount of water on i'th bar, the
    // amount of water accumulated on this particular
    // bar will be equal to min(left[i], right[i]) - arr[i] .
    for (int i = 0; i < n; i++)
        water += min(left[i], right[i]) - arr[i];
 
    return water;
}


int main(){
int n;
cout<<"Input n : "<<endl;
cin>>n;
int arr[n];
for(int i = 0; i<n;i++)
    {
    cout<<"Enter arr["<<i<<"]: ";
    cin>>arr[i];
}
//maxSubArray(n,arr);
csumMaxSubArray(n, arr);
//KadanesAlgo(n, arr);
return 0;
}
