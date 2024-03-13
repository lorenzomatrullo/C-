#include <iostream>

using namespace std;

int main(){

    int count = 0; 
    int max = 0;
    int *pMax = &max;

    cout << "VALUE: " << *pMax << '\n';
    cout << "ADDRESS: "<< pMax << '\n';

    *pMax += 1;
    cout << "VALUE incremented: " << *pMax;
    


    return 0;
}