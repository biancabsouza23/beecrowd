#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    int num_vit_C, num_emp_C, sal_gol_C, num_vit_F, num_emp_F, sal_gol_F;
    cin >> num_vit_C >> num_emp_C >> sal_gol_C >> num_vit_F >> num_emp_F >> sal_gol_F;
    
    int pontos_C = num_vit_C * 3 + num_emp_C;
    int pontos_F = num_vit_F * 3 + num_emp_F;

    if(pontos_C > pontos_F){
        cout << "C" << '\n';
    }else if(pontos_F > pontos_C){
        cout << "F" << '\n';
    }else{
        if (sal_gol_C > sal_gol_F){
            cout << "C" << '\n';
        }else if(sal_gol_F > sal_gol_C){
            cout << "F" << '\n';
        }else{
            cout << "=" << '\n';
        }
    }
    
    return 0;
}
