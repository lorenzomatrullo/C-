#include <iostream>
#include <ctime> // Include the <ctime> header for time()

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand((time(0)));

    // Generate a random number
    int randomNumber = (rand() % 100) + 1;

    cout << "Random number: " << randomNumber;

    return 0;
}
