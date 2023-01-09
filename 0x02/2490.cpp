#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[4], sum;
    for(int i=0;i<3;i++){
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        sum = arr[0] + arr[1] + arr[2] + arr[3];
        switch(sum) {
            case 4 : cout << "E\n"; break;
            case 0 : cout << "D\n"; break;
            case 1 : cout << "C\n"; break;
            case 2 : cout << "B\n"; break;
            case 3 : cout << "A\n"; break;
        }
    }
}

