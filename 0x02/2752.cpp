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
    int arr[3];
    cin >> arr[0] >> arr[1] >>arr[2] ;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(arr[i]>arr[j]) 
                swap(arr, i, j); 
        }
    }
    cout << arr[0] << " " << arr[1] << " " << arr[2];
}

