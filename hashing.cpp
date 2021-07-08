#include<bits/stdc++.h>
using namespace std;

void insert(bool a[], int n){
    a[n-1] = true;
    
}

void printARR(bool a[], int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void deleteOp(bool a[], int n){
    a[n-1] = false;
}

void search(bool a[], int n){
    if(a[n-1]== true) cout<<"present"<<endl;
    else cout<<"Not present"<<endl;
}

// Implementation of chaning using linked lists and STL
struct MyHash{
    int bucket; // The length of the array of linked lists
    list<int> *table; // Declaring a array of linkedLists called table
   // Constructor to initialize bucket to b and table to array of size bucket
    MyHash(int b){
        bucket = b;
        table = new list<int>[bucket];
    }
    void insert(int key){
        int i = hash(key); // hashing the key
        table[i].push_back(key); // going to index i of table array and adding key at last of linked list
    }
    bool search(int k){
        int i = hash(k);
        for(auto x : table[i]) if(x = k) return true; // traversing the table[i] (i.e all the linked lists till we find key)
        return false;
    }
    void deleteOp(int key){
        int i =hash(key);
        table[i].remove(key); // going to index i of table array and deleting key at last of linked list
    }
    int hash(int key){
        return key%bucket; // hashing by taking modulous with bucket so n/m (alpha=load factor) is 1.
    }
};


int main() {
    int key;
    MyHash mh(7);            
    cout<<"insert key"<<endl;
    cin>>key;
    mh.insert(key);        
    cout<<"insert key"<<endl;
    cin>>key;
    mh.insert(key);        
    cout<<"search key"<<endl;
    cin>>key;
    cout<<mh.search(key)<<endl;        
    cout<<"delete key"<<endl;
    cin>>key;
    mh.deleteOp(key);        
    cout<<"search key"<<endl;
    cin>>key;
    cout<<mh.search(key)<<endl;            

    

}
