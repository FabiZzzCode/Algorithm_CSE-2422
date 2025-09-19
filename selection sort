#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "array size: ";
    cin>> n;

    int arr[n+123];
    cout << "unsorted array: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int mini;
    for(int i = 0; i<n-1; i++){
        mini = i;
        for(int j = i+1; j<n; j++){
            if(arr[mini] > arr[j]){
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
    cout << "sorted array : ";
     for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}
