#include <iostream>
using namespace std;

int main(){
    
    int dist;

    cin >> dist;
    
    if (dist <= 800){
        cout << "1" << endl;
    } else if (dist <= 1400){
        cout << "2" << endl;
    } else {
        cout << "3" << endl;
    }
    
    return 0;
}
