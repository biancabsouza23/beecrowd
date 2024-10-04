#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    
    int dist;

    cin >> dist;
    
    if (dist <= 800){
        cout << "1" << '\n';
    } else if (dist <= 1400){
        cout << "2" << '\n';
    } else {
        cout << "3" << '\n';
    }
    
    return 0;
}
