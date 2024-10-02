#include <iostream>
using namespace std;
#include <set>

int main(){
    int total_album, num_fig_comp, fig, faltam;
    cin >> total_album >> num_fig_comp;
    set <int> fig_compradas;

    for(int i = 0; i < num_fig_comp; i++){
        cin >> fig;
        fig_compradas.insert(fig);
    }

    faltam = total_album - fig_compradas.size();
    cout << faltam << endl;
    
    return 0;
}
