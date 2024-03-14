#include <iostream>

using namespace std;

/*
    * = dereferencing the pointer to actually get to value of what it is pointing to
*/

int main(){

    int max = 100;
    int *pMax = &max;

    cout << "ADDRESS of Max: " << &max << '\n';
    cout << "ADDRESS of pMax: "<< pMax << '\n';
    cout << "VALUE of Max: "<< max <<  '\n';
    cout << "VALUE of pMax: " << *pMax << '\n';

    *pMax += 1;
    cout << "VALUE incremented: " << *pMax;
    


    return 0;
}