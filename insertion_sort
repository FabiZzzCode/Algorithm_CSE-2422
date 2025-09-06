#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "array size : ";
    cin >> n;

    int a[n+12];
    cout << "array : ";
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    for(int i = 1; i<n; i++){
        int temp = a[i];
        int j = i-1;
        while(j>= 0 && a[j] > temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    cout << "sorted Array :";
    for(int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
}
