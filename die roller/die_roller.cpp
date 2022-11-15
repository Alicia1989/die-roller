// die Rooler
// generating random

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));  //seed random number generator.

    int randomNumber = rand(); // generates the random number

    int die = (randomNumber % 6) +1; // gets a number between 1 and 6.
    cout << "You rolled a: " << die << endl;
    return 0;
}