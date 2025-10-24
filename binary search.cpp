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
    sort(a, a+n);
    int tar;
    cout << "Target :";
    cin >> tar;

    int b = 0, e = n - 1;
    bool done = 1;
    while(b<=e){
        int mid = (b + e)/2;

        if(a[mid] == tar){
            cout << "Target Found at index : " << mid << endl;
            done = 0;
            break;
        }
        else if(a[mid] < tar){
            b = mid +1;
        }
        else e = mid - 1;
    }
    if(done) cout << "Not found" << endl;
}
