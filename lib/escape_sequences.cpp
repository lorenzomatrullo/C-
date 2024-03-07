#include <iostream>

using namespace std; // use this package to avoid using std:: prefix and go just for the calls

int main(){

    // This is a comment

    /*
        This
        is
        a
        multiline
        comment
    */
    

    // use this to print
    std::cout << "Hello World";
    cout << "Hello World";


    // add << std::endl to add a new line
    std::cout << "Hello World" << std::endl;
    cout << "Hello World" << endl;


    // or use << '\n' to add a new line
    std::cout << "Hello World" << '\n';
    cout << "Hello World" << '\n';


    return 0;
}