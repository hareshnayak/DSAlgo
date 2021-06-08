#include<iostream>
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
    int cs = 0, ms = 0;
    // It provides the maxSum subArray in O(n)
    // But it does not provide the subArray
    for(int i = 0; i<n;i++)
    {
        cs = cs + arr[i];
        if(cs < 0)
            cs = 0;
        ms = max(cs, ms);
    }
    cout<<"max sum is : "<<ms<<endl;
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
