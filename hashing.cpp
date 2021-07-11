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

//Implementation of Open Addressing using Hashing
struct MyHashOpen{
    int *arr;
    int bucket;
    MyHashOpen(int b){
        bucket = b;
        for(int i = 0;i<bucket;i++)
        arr[i]={-1};
    }
    void insert(int key){        
        int i = hash(key);    
        // linear probing 
        while(arr[i]==-1) {        
            i = (i+1)%bucket; // circular traversal                
        }
        arr[i] = key;
    }
    void deleteOp(int key){
        int i = hash(key);
        int h =i;
       while(arr[i]!=key) {
        if(arr[h]=key) arr[h] = -2;
            h = (h+1)%bucket; // circular traversal            
        if(i==h) cout<<"element not found!" << endl;
        }                
        cout<<"element not found!" << endl;     
    }
    bool search(int key){
        int i = hash(key);
        int h = i;
        while(arr[i]!=key) {
        if(arr[h]=key) return true;
            h = (h+1)%bucket; // circular traversal            
        if(i==h) return false ;
        }        
    return false;
    }
    int hash(int key){
        // Implementing linear probing
        return key%bucket;
    }
};


class DoubleHash{
    int size;
    int cap = 13;
    int *hashtable;
    public:
    DoubleHash(int b){
        size=0;
        cap = b;
        hashtable = new int[cap];
        for(int i = 0; i<b;i++){
            hashtable[i] = -1;
        }
    }
    bool isFull(){
        return (size==cap);
    }
    int hash1(int key){
        return key%cap;
    }
    int hash2(int key){
        return ((cap-1) - key%(cap-1))%cap;
    }
    void insert(int key){
        if(isFull()){return;}
        int i = hash1(key);
        if(hashtable[i] == -1 || hashtable[i] == -2 ) {hashtable[i] = key; size++;}
        else{
            int index = 1;           
            while(1){
                int newi = (hash1(key) + index * hash2(key))%cap;
                if(hashtable[newi]==-1 || hashtable[i] == -2 ){
                    hashtable[newi] = key;
                    size++;
                    break;
                }
                index++;
            }
        }
    }
     void search(int key)
    {
        int index1 = hash1(key);
        int index2 = hash2(key);
        int i = 0;
        while (hashtable[(index1 + i * index2) % cap] != key) {
            if (hashtable[(index1 + i * index2) % cap] == -1 ) {
                cout << key << " does not exist" << endl;
                return;
            }
            i++;
        }
        cout << key << " found" << endl;
    }
    void deleteOp(int key){
        int index1 = hash1(key);
        int index2 = hash2(key);
        int i = 0;
        if(hashtable[index1] == key) {hashtable[index1] = -2; return;}
        while (1) {
            if (hashtable[(index1 + i * index2) % cap] == -1) {
                cout << key << " does not exist" << endl;
                return;
            }
            if(hashtable[(index1 + i * index2) % cap] == key){hashtable[index1] = -2; break; return;}
            i++;  
        }    
    }
     void displayHash()
    {
        for (int i = 0; i < cap; i++) {
            if (hashtable[i] != -1)
                cout << i << " --> "
                     << hashtable[i] << endl;
            else
                cout << i << endl;
        }
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
