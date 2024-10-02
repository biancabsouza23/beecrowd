#include <bits/stdc++.h>
using namespace std;

int main(){

    int quant_esp, quant_carimb, quant_comp, cont = 0;
    cin >> quant_esp >> quant_carimb >> quant_comp;
    map <int, bool> fig_car;

    for (int i = 0; i < quant_carimb; i++){
        int num;
        cin >> num;
        fig_car[num] = true;
    }
    
    int fig_comp;
    for (int i = 0; i < quant_comp; i++){
        cin >> fig_comp;
        if(fig_car[fig_comp]){
            cont++;
            fig_car[fig_comp] = false;
        }
    }

    cout << quant_carimb - cont << endl;
    
    return 0;
}