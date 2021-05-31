#include<iostream>
using namespace std;

int main(){
    int x =10 ;
    cout<<x<<endl;
    cout<<&x<<endl; // prints address of x

    // doesn't work for character variables
    char ch = 'S';
    cout<<&ch;

    // to print the address of the character
    // type caste it from char* to void* or int*
    cout<<(void*)&ch<<endl;



    return  0;
}
