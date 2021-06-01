#include <bits/stdc++.h>
using namespace std;

void revArray(int arr[], int start, int end){
    while(start<end){
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        start++, end--;
    }
}

int main(){
    int n;
    cout << "Enter the array size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    revArray(arr, 0, n-1);

    cout << "The reversed array is :\n";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
