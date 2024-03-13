#include <iostream>

using namespace std;

int main(){

    int count = 1;
    int &countRef = count;

    countRef++;
    cout << "count: " << count << '\n';
    
    int x = 0;
    int y = 100;

    int &xRef = x;
    xRef = y;
    xRef++;

    cout << "x: " << x;


    return 0;
}