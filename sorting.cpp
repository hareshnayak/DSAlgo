#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[],int n){
// naive approach 
// swap adjaccent elements

for(int j = 0;j<n-j-1;j++){
    for(int i = 0;i<n;i++){
        if(a[j]>a[i]) 
        swap(a[j],a[i]);
        else continue;
    }
    }
}

void selecSort(int a[], int n){
    // bring the min element to the front
    int min = 0;
    for(int i = 0;i<n-1;i++)
    {
        min = i;
        for(int j = min+1 ; j<n;j++){            
            if(a[j]<a[min])            
                min = j;                            
                                      
        }
        swap(a[i], a[min]);
    }
}

// QUESTION : Print names with sorted salaries 
// if salary is same then sort acc to lexographic order of name

class emp{
    public: 
    string name;
    int salary;
};
bool comparat(emp a , emp b){
    if(a.salary == b.salary) return a.name<b.name;
    else return a.salary<b.salary;
}

void salarySort(emp a[], int n){
    sort(a,a+n,comparat);
}

void insertionSort(int a[], int n){
    // first element is sorted, rest n-1 elements are unsorted
    // pick the elements and backiterate them placing them sorting
sort(a, a+n);
    for(int i = 1; i<n;i++){
        int no = a[i], j;
        for( j = i-1; j>=0 && no<a[j]; j--){            
            a[j+1] = a[j];
        }
        a[j+1] = no;
    }
}

// sorting the wave form
// given a array which forms a graph 
// you have to sort the graph in the form of a wave max-min pairs

// APPROACH :  Go to every 2nd element and make it the peak
void sortWave(int a[], int n){    
    for(int i=0;i<n;i+=2){    
        if (i>0 && a[i-1]>a[i]) swap(a[i-1],a[i]);
        if (i<n-1 && a[i+1]>a[i]) swap(a[i+1],a[i]);
    }
}

void printARR(int a[], int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void printEMP(emp a[], int n){
    for(int i =0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].salary<<endl;
    }
    cout<<endl;
}

// Quick sort 
// It picks a pivot and sorts the array according the the pivot i.e, smaller to the pivot stay at left side and larger go to right side
//the pivot can be taken as any random element / rightmost /leftmost
int partition(int a[], int low, int high)
{
    // last element is taken as pivot
    int pivot = a[high];

    // index starts with low - 1
    int i = low-1; 

    // iterating from low to high 
    // comparing a[j] to pivot : if a[j] is smaller then swap a[++i] and a[j]
    for(int j = low;j<=high-1;j++){
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }
    }

    // swap the a[i+1] with last element
    swap(a[i+1],a[high]);

    // Now new pivot is i+1
    return (i+1);
}

void quicksort(int a[], int low, int high){
    if(low<high){
        int pi = partition(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }
    
}


// MERGE SORT
// Merge sort finds the middle element recursively and then sorts and then merges the array back

void merge(int arr[], int l , int m , int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[] , int l , int r ){
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        int i=0,j=0,k=0;
        vector<int> vec;
        while(i<n && j<m){
            if(arr1[i]<=arr2[j] && arr1[i]!= vec[k])
            {
                vec.push_back(arr1[i]);
                i++;
            }
            else if(arr1[i]>arr2[j] && arr2[j]!= vec[k])
            {
                vec.push_back(arr2[j]);
                j++;
            }
            k++;
        }
        while(i<n){
            vec.push_back(arr1[i]);
            i++;
            k++;
        }
        while(j<m){
            vec.push_back(arr2[j]);
            j++;
            k++;
        }
        //return vector with correct order of elements
        return vec;
    }

int main() {
// int a[10] = {3,2,4,7,4,6,9,2,3,4};
int a[10] = {5,4,7,2,9,1,10,8,3,6};
int a1[5] = {1,2,3,4,5};
int a2[3] = {1,2,3}; 
vector<int> ans;
ans = findUnion(a1,a2,5,3);
for(int i:ans) cout<<i<<' ';
// cout<<findUnion(a1,a2,5,3);
// printARR(a,10);
// // bubbleSort(a,10);
// // quicksort(a,0,9);
// mergeSort(a,0,9);
// printARR(a,10);
// sortWave(a, 10);
// emp e[5] = {{"ha",100,},{"pa",200,},{"za",100,},{"ka",100,},{"la",50,},};
// salarySort(e,5);
// printEMP(e,5);
} 
