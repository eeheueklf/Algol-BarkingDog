#include <iostream>
using namespace std;

void swap(unsigned long long int &x, unsigned long long int &y){
    unsigned long long int temp = x;
    x = y;
    y = temp;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long int a, b, gap;
    cin >> a >> b;

    if(a>b) swap(a,b);
    b==a?gap=0:gap=b-a-1;
    cout << gap << "\n";
    for(unsigned long long int i=a+1; i<b;i++)
        cout << i << " ";
}