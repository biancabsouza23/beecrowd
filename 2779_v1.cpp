#include <iostream>
using namespace std;
#include <vector>


int main(){
    int total_album, num_fig_comp, fig;
    cin >> total_album >> num_fig_comp;
    vector <int> fig_compradas;

    for(int i = 0; i < num_fig_comp; i++){
        cin >> fig;
        fig_compradas.push_back(fig);
    }

    for (int i = 1; i <= total_album; i++){
        for(int f : fig_compradas){
            cout << "total album atual; " << total_album << endl;
            if(i == f){
                total_album--;
                cout << "i: " << i << " f: " << f << endl << total_album << endl;
                break;
            }
        }
    }
    
    //cout << total_album << endl;

    return 0;
}


/*
exemplo:
album: 10 figurinhas
compradas: 3 figurinhas (5, 5, 1) (vetor)
album_deve_ter: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 (n precisa ser vetor, posso 
trabalhar com um contador. O proprio i?)
faltam: 8 figurinhas para completar o album

coloco o i para comparar com o vetor de figurinhas compradas (outro for)
se i == fig_compradas[j], eu tiro 1 do faltam


*/