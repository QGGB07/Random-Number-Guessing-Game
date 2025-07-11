#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess;
    int guessCount = 0;

    cout << "Welcome to the Random Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    // Loop until the user guesses the correct number
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        guessCount++;

        if (guess > randomNumber) {
            cout << "Too high, try again." << endl;
        } else if (guess < randomNumber) {
            cout << "Too low, try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " 
                 << guessCount << " attempts." << endl;
        }

    } while (guess != randomNumber);

    return 0;
}
