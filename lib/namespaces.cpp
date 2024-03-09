#include <iostream>

/*
    Namespace = provides a solution for preventing name conflicts in large projects.
    Each entity needs a unique name.
    A namespace allows for identically named entities as long as the namespaces are different.
*/


// using namespace std = avoid the use of std:: (universally)
// using std::string = avoid the use of std:: for this specific case
// using std::cout = avoid the use of std:: for this specific case


using namespace std;


namespace first{
    int x = 1;
}


int main(){

    using namespace first;
    cout << x << '\n';

    return 0;
}