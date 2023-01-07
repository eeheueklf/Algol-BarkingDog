#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, y_rate=0, m_rate=0;
    cin >> a;
    for(int i=0; i<a; i++){
        cin >> b;
        y_rate += (b/30+1) * 10;
        m_rate += (b/60+1) * 15;
    }

    if(y_rate < m_rate) cout << "Y " << y_rate;
    else if(y_rate > m_rate) cout << "M " << m_rate;
    else cout << "Y M " << m_rate;
}