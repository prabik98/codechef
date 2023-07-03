#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define ff first
#define ss second

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

void io(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int partition(int arr[], int start, int end){
    int pivot = arr[end];

    int i = start-1; //starting index of pivot
    for(int j = start; j< end; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[end]);
    return i+1;
}

void quickSort(int arr[], int start, int end){
    if(start < end){
        int pi = partition(arr, start, end);

        quickSort(arr, start, pi-1);
        quickSort(arr, pi+1, end);
    }
}


void printArray(int arr[], int n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    void io();

    int arr[]={10, 80, 30, 90, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0, end = n-1;
    quickSort(arr, start, end);
    printArray(arr, n);
    
    return 0;
}