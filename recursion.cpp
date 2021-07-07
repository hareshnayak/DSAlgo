#include<iostream>
using namespace std;

int fact(int n)
{
    // NOT Tail recursive because the control comes back to parent function
    if(n==0) return 1;
    else 
    return n*fact(n-1);        
}

int sumAllDigits(int n){
    if(n==0) return n;
    return n%10+sumAllDigits(n/10);        
}

int sumAllDigitsTAIL(int n, int sum=0){
    if(n==0) return sum;
    return sumAllDigitsTAIL(n/10,sum+n%10);
}

int factTAIL(int n, int res=1 ){
    if(n==0) return res;
    return factTAIL(n-1,n*res);
}

int fibonacci(int n ){
if(n<=1) return n;
return fibonacci(n-1)+fibonacci(n-2);
}

bool isPalindrome(string str, int low, int high){   
    if(low>=high) {
        cout<<"yes"<<endl;
        return true;
        }      
    if(str[low]!=str[high])
    {
        cout<<"no"<<endl;
        return false;
        }    
    else return isPalindrome(str, low+1, high-1);
}

void printnto1(int n ){
   if(n==0) return ;
    cout<<n<<" ";
    printnto1(n-1);
}
void print1ton(int n){    
    if(n==0) return ;
    print1ton(n-1);
    cout<<n<<" ";
}

void print1tonTAIL(int n, int i ){      
    if(n>=1)
    {
        cout<<i<<' ';
        print1tonTAIL(n-1,i+1);
    }
   }



int MaxNoPiece(int n, int a, int b, int c){
    // without recursion
    if(n==a || n==b || n==c)
    return 1;
    else if(n==a+b || n==b+c || n==a+c)
    return 2;
    else if(n==a+b+c) 
    return 3;
    else return -1;
}

int maxOf3(int a, int b, int c){
    return (a>b && a>c)?a:(a<b && b>c)?b:c;
}

// Cut out pieces of a rope of length a,b or c when the length of the given wire is n
// if wire is of odd length and the peices are even then cannot cut the rope.

int maxCuts(int n, int a, int b, int c)
{
    if(n==0) return 0;
    if(n<0) return -1;
    int res = maxOf3(maxCuts((n-a), a,b,c),maxCuts((n-b), a,b,c),maxCuts((n-c), a,b,c));
    cout<<"res : "<<res<<endl;
    if(res==-1) return -1;
    return res+1;
} 

void printSubString(string str, string curr="", int current=0){
    if(str.length() == current)
    {
        cout<<curr<<" "; 
        return;
    }
    printSubString(str,curr+str[current],current+1);
    printSubString(str,curr,current+1);
    
}

void TowerHanoi(int n , char a='A' , char b='B', char c='C'){
    // a is from and c is to 
    // b is auxiliary
    if(n==1) {
        cout<<"move 1 from "<<a<<" to "<<c<<endl;
        return;
    }
    TowerHanoi(n-1,a,c,b);
    cout<<"move "<<n<<" from "<<a<<" to "<<c<<endl;
    TowerHanoi(n-1,b,a,c);

}

int main() {
// cout<<"factorial : "<<fact(5);
// cout<<"factorial : "<<factTAIL(5);
// cout<<sumAllDigits(0001);
// cout<<maxCuts(5,3,2,8)<<endl;
// cout<<maxCuts(5,3,5,1)<<endl;
// cout<<maxCuts(23,12,11,7)<<endl;
// printSubString("ABCD");
// isPalindrome("ABCBA",0,4);
// cout<<maxCuts(5,4,2,6)<<endl;
// cout<<fibonacci(5);
// printnto1(10);
// cout<<endl;
// print1ton(10);
// cout<<endl;
// print1tonTAIL(10,1);
// TowerHanoi(3);
cout<<sumAllDigitsTAIL(1023);
return 0;
}
