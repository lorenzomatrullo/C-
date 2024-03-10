#include <iostream>

using namespace std;

int main(){

    //integers
    int age = 19;
    int year = 2024;


    //double (numbers including decimals)
    double price = 10.99;
    double gpa = 2.5;


    //single character
    char grade = 'A';
    char initial = 'L';


    //array of characters (strings)
    char name[] = "Lorenzo";
    std::string day = "Friday";
    string address = "Street No. 12"; //or this version if you use namespace std;


    //boolean (true or false)
    bool yes = true;
    bool no = false;


    // To display a text before calling the variable
    cout << "Address: " << address;


    // To display a text before and after calling the variable
    cout << "You are " << age << " years old";


    return 0;
}