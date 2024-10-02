#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    int num_parad, limite, pos_agua, ant = 0;
    char resultado = 'N';
    bool status = true;

    cin >> num_parad >> limite;

    while (num_parad){
        
        cin >> pos_agua;

        if ((pos_agua - ant) > limite){
            status = false;
            break;
        }
        ant = pos_agua;
        num_parad--;
    }
 
    if (status){
       if ((42195 - ant) <= limite){
            resultado = 'S';
        } 
    }
    
    cout << resultado << '\n';

    return 0;
}