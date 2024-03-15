#include <iostream>

using namespace std;

int main(){

    string name;

    cout << "Enter your name: ";
    getline(cin, name);


    // gives a condition of length
    // if(name.length() > 12){
    //     cout << "Your name can't be over 12 characters";
    // } else {
    //     cout << "Welcome " << name;
    // }

    
    // give a condition
    // if(name.empty()){
    //     cout << "You did not enter your name";
    // } else {
    //     cout << "Welcome " << name;
    // }


    // clears the name
    // name.clear();
    // cout << "Hello " << name;


    // name.append("@gmail.com");
    // cout << "Your username is now " << name;


    // only shows the letter at the position chose
    // cout << name.at(0);


    // inserts the choosen character before the choosen position of the string
    // name.insert(0, "@");
    // cout << name;


    // erases from the start to the end point
    // name.erase(0, 3);
    // cout << name;


    // go to https://cplusplus.com/reference/string/string for more

    return 0;
}