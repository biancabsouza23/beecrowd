#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

float areaLajota1(int diagonal){
    float area;
    area = pow(diagonal, 2)/2;

    return area;
}

int main(){
    
    int diagonal = 1, largura_sala, comprimento_sala, num_lajotas1, num_lajotas2, area_sala;
    float area_lajota1, area_lajota2, area_lajota3, area_sala_sem_extremidades;

    cin >> largura_sala >> comprimento_sala;
    area_lajota1 = areaLajota1(diagonal);
    area_sala = largura_sala * comprimento_sala;
    num_lajotas2 = (comprimento_sala - 1 + largura_sala - 1) * 2;
    area_sala_sem_extremidades = area_sala - ((comprimento_sala*area_lajota1) + ((largura_sala - 1)*area_lajota1));
    num_lajotas1 = area_sala_sem_extremidades/area_lajota1;
    cout << num_lajotas1 << '\n' << num_lajotas2 << '\n';
    
    return 0;
}


