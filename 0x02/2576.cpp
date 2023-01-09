#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[8], sum=0, min;
    for(int i=0;i<7;i++){
        cin >> arr[i];
        if(arr[i]%2==0) arr[i]=0;
        sum += arr[i];
    }
    min = sum;
    for(int i=0;i<7;i++){
        if(arr[i]>0 && arr[i]<min) min=arr[i];
    }
    if(sum==0) cout << "-1";
    else cout << sum << "\n" << min;
}

