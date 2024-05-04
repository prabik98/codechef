#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define ff first
#define ss second

void io(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void swapping(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[], int n){                     //TC = O(n2), SC = O(1), Inplace sorting, Stable sorting - where element's relative is same
    for(int i = 1; i < n; i++){
        bool swapped = false;                   //Optimization to O(N) - conditional, if array is already sorted
        for(int j = 0; j < n - i; j++){
            if(arr[j] > arr[j+1]){
                swapped = true;
                swapping(arr, j, j+1);
            }
        }
        if(swapped == false)
            break;
    }
}

void selectionSort(int arr[], int n){          //TC = O(n2), SC = O(1), Inplace, Stable sorting
    for(int i = 0; i < n - 1; i++){
        int min_index = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min_index])
                min_index = j;
        }
        if(min_index != i)
            swapping(arr[min_index], arr[i]);
    }
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout << endl;
}

int main(){
    void io();

    int arr[] = {1, 4, 6, 2, 3};
    int n = arr.size();
    bubbleSort(arr, n);
    selectionSort(arr, n);
    return 0;
}