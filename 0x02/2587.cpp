#include <iostream>
using namespace std;

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[5], sum=0, ctr;
    for(int i=0;i<5;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]>arr[j]) 
                swap(arr, i, j); 
        }
    }
    cout << sum/5 << "\n" << arr[2];
}

