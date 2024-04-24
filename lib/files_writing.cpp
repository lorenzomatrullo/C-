#include <iostream>
#include <fstream>
using namespace std;

int main(){

    
    ofstream outFile;

    // outFile.open("file.txt");                     // this will clean the file everytime before writing the new stuff
    outFile.open("file.txt", ofstream::app);        // this will append stuff to the already existing stuff

    if (outFile.fail()) {
        cout << "Error opening file." << '\n';
        return 1;
    }


    double x = 4.5;
    int y = 10;
    string z = "abc";

    outFile << "content" << '\n';
    outFile << x << '\n';
    outFile << y << '\n';
    outFile << z << '\n';


    outFile.close();


    return 0;
}