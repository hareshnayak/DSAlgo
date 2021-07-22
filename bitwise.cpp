#include<bits/stdc++.h>
using namespace std;

// Bitwise operators operate on one bit and on the binary form of the data
// AND &
// OR |
// NOT ~ 
// XOR ^
// left shift <<    a<<n = a*pow(2,n)
// right shift >>   a>>n = a/pow(2,n)

// Question: you are given list of nos where every no is occurring twice except one
// arr = {5,2,6,9,2,5,6}
// ans = 9
// Hint : XOR of same no cancels out 
int returnUnique(vector<int> arr){
    int ans; int i;
    for( auto i : arr){
        ans ^= i; 
    }
    return ans;
}

// 2's complement sub: flip all the bits and then add 1 to it

// Question: Check ODD or EVEN
// Hint : Last digit of every ODD is 1
bool checkODD(int n){
    if(n&1==1) return true;
    else return false;
}

// Question: Calculate no of set bits in no i.e 1's 
// Time complexity  = O(no of bits)
int countBits(int n){
    int count = 0;
    while(n>0){
        count += (n&1);
        n=n>>1;
    }
    return count;
}

// Time complexity  = O(no of set bits)
int countBitsFast(int n){
    int count = 0;
    while(n){
        count++;
        n = n&(n-1);
    }
    return count;
}

// Question : Given two nos a, b. 
// return minimun no of bits in order to convert a into b
void convertReturnmin(int a, int b){
    int count=0;
    int i = a^b;
    while(i){
        if(i&1==1) count++;
        i = i>>1;
    }
    cout<<count;
}

// XOR swapping
void swapAB(int a, int b){
    cout<<"a : "<<a<<" b : "<<b<<endl;
    a ^= b;
    b ^= a;
    a ^= b;
    cout<<"a : "<<a<<" b : "<<b;
}

//To get the ith bit 
int getIthBit(int n, int i)
{
    return (n&(1<<i))!=0?1:0;
}

//Change the bit at i to 1
void setIthBit(int &n , int i){
    int mask = i<<1;
    n= (n|mask);
}

//Change the bit at i to 0
// void setIthBit(int &n , int i){
//     int mask = ~(i<<1);
//     n= (n&mask);
// }

// Find subsequences of a string
// Question : Generate all the subsets using bitmasking
void fliterChars( char* str, int no){
    int i = 0 ;
    while(no>0){
        (no&1)?cout<<str[i]:cout<<"";
        i++;
        no= no>>1;
    }
    cout<<endl;
}

void subSequence(char* str){
    int n = strlen(str);
     int range = (1<<n) -1;
     for(int i =0;i<range;i++){
         fliterChars(str,i);
     }
}

int main() {
// vector<int> arr = {5,2,6,9,2,5,6};
// cout<<returnUnique(arr);
// cout<<"9 is: "<<checkODD(9)<<endl;
// cout<<"10 is : "<<checkODD(10)<<endl;
// convertReturnmin(4,9);
// swapAB(5,7);
char str[100] = "asd";
subSequence(str);
return 0;
}
