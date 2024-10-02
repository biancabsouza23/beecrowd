#include <bits/stdc++.h>
using namespace std;


int main(){
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if(!inputFile.is_open() || !outputFile.is_open()){
        cout << "Error opening file" << endl;
        return 1;
    }
    
    string line;
    while (getline(inputFile, line)){
        vector<int> nums;
        istringstream iss(line);
        int num, cont = 0, maior = 0, aux = 1, atual = 0, aux1 = 0;
        // Extraí todos os inteiros da linha
        while (iss >> num) {
            nums.push_back(num);
        }

        for (int i = 1; i <= nums[0]; i++){
            aux = i;
            if(nums[aux] == nums[aux+1]){
                cont++;
            } else {
                aux1 = maior;   
                if(aux1 < cont){
                    maior = cont;  
                }
                cont = 0; 
            }
        }
        outputFile <<  maior + 1 << endl; //saida aqui
    }
    
    
    inputFile.close();
    outputFile.close();

    return 0;
}
