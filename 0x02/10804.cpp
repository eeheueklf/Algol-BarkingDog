#include <iostream>
using namespace std;

void swap(int array[], int a, int b){
    int temp = array[a-1];
    array[a-1] = array[b-1];
    array[b-1] = temp;
}

void reverse(int array[], int a, int b){
    int c= a, d = b;
    for(int i= 0;i<(b-a+1)/2;i++){
        swap(array, c++, d--);
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, a, b, c=0;
    int arr[20];
    for(int i=0; i<20; i++){
        arr[i] = i+1;
    }
    
    for(int i=0; i<10; i++){
        cin >> a >> b;
        reverse(arr, a, b);
    }

    for(int i=0; i<20; i++){
        cout << arr[i] << " ";
    }
}