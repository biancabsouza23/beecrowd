#include <bits/stdc++.h>
using namespace std;


int main(){
        vector<int> nums;
        int num, cont = 0, maior = 0, aux = 1, aux1 = 0;

        while (true) {
            cin >> num;
            nums.push_back(num);
            if (nums.size() == (nums[0]+1)){
                break;
            }
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
        cout <<  maior + 1 << endl; 
    
    return 0;
}
