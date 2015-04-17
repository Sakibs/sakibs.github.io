#include <iostream>
#include <string>
#include <cmath>
#include <time.h>
using namespace std;

/*
 * Try to guess the number your computer is thinking of!
 * We first generate a random number between 0 and MAX_CHOICES,
 * prompt the user for a guess, and tell them if they win,
 * are 1 away from the number, or are way off (2+ away).
 * Players have only MAX_TRIES turns to guess the number.
 */
int main () {
    // Magic incantation: don't worry about for now
    srand(time(0));
    
    // Set how many choices and tries players have
    const int MAX_CHOICES = 5; // Guess 0 - 4
    const int MAX_TRIES = 3;   // Get 3 tries
    
    bool wantsToPlay = false;
    
    do {
        // Target is the random number we're guessing
        int target = rand() % MAX_CHOICES;
        
        int counter = 1;
        int guess;
        bool wonGame = false;
        // get guesses until he runs out of tries
        do{
            // get guess from input
            cout << "Make a guess: ";
            
            cin >> guess;
            // if user guesses target, tell him he won!
            if (guess == target) {
                cout << "You guessed correctly!!" << endl;
                wonGame = true;
            }
            else {
                // give user a hint
                
                // abs in cmath
                int diffence = abs(guess - target);
                
                if (diffence == 1) {
                    cout << "So close!! Just 1 away" << endl;
                }
                else {
                    cout << "You are waaaayyyy off :P"<<endl;
                }
            }
            
            counter++;
        } while(counter <= MAX_TRIES && wonGame == false);
    
        // get input if user wants to play.
        string play;
        cout << "Do you play again? (yes or no)";
        cin.ignore(10000, '\n');
        getline(cin, play);
        
        // check if yes or no
        if(play == "yes")
            wantsToPlay = true;
        else
            wantsToPlay = false;
        
    } while(wantsToPlay);
    
}