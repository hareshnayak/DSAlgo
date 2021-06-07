#include<iostream>
using namespace std;

int main(){
    int x =10 ;
    cout<<x<<endl;
    cout<<&x<<endl; // prints address of x

    // doesn't work for character variables
    char ch = 'S';
    char* chptr = &ch;
    cout<<chptr<<endl;

    // to print the address of the character
    // type caste it from char* to void* or int*
    cout<<(void*)chptr<<endl;

    /* Pointer variable
    Pointer variable stores the address of a variable
    */
    int* ptr;
    ptr = & x; // ptr stores address of x

    float a = 10.7;
    float* aptr = &a;


    cout<<x<<" "<<ptr<<endl;
    cout<<a<<" "<<aptr<<endl;
    cout<<ch<<" "<<chptr<<endl;

    //Size of a pointer variable
    cout<<"\nSize of a pointer variable"<<endl;
    cout<<"size of int pointer "<< sizeof(ptr)<<endl;
    cout<<"size of float pointer "<<sizeof(aptr)<<endl;
    cout<<"size of char pointer "<<sizeof(chptr)<<endl;

    // Every pointer variable will have SAME SPACE

    // Do not write char* ptr = &<integer>
    // It happens because when char pointer is used it points to one memory box
    // When integer pointer is used it points to the firsts box of a 4 box memory

    //Dereference operator(*)
    cout<<"\nDereference operator(*)"<<endl;
    cout<<*(ptr)<<endl; // prints values of x
    cout<<*(&x)<<endl; // prints values of x
    cout<<ptr<<endl; // prints address of x
    cout<<*(&ptr)<<endl; // prints address of x
    cout<<&(*ptr)<<endl; // prints address of x
    cout<<&(ptr)<<endl; // prints the address of ptr variable

    // pointer that points to pointer
    int** ptrptr = &ptr;
    cout<<ptrptr<<endl; // prints address of ptr
    return  0;
}
