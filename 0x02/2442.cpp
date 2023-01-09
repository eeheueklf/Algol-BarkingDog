#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i-1;j++)
            cout << " ";
        for(int j=0;j<i*2+1;j++)
            cout << "*";
        cout << "\n";
    }
}

// 4 1
// 3 3
// 2 5
// 1 7
// 0 9