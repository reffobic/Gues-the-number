//
// Created by Mohamed El Refai on 22/9/2023
//
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int randomNumber = rand() % 100 + 1; //generate random number from 1 to 100
    int guess, attempts = 0; //variables for storing the guess of the user and the number of attempts

    cout << endl;
    cout << "------------------ Guess the Number Game ------------------" << endl; //title
    cout << "A number have been picked from 1 to 100, try to guess it ;)" << endl;
    cout << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess; //user input

        if (guess < 0 || guess > 100){
            cout << "Invalid input, please enter a number between 1 and 100" << endl;
            continue; // checks if the data is correct or not if not it displays a message and asks the user to guess again
        }

        attempts++;

        if(guess < randomNumber){
            cout << "low, try again :)" << endl << endl; //if the guess is lower than the random number it shows a message
        } else if (guess > randomNumber){
            cout << "high, try again :)" << endl << endl; //if the guess is higher than the random number it shows a message
        } else {
            cout << endl << "Nice you got it right! Here is your free cookie :D\n\n" //if the guess is correct with a text cookie

                            "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡴⠚⣉⡙⠲⠦⠤⠤⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
                            "⠀⠀⠀⠀⠀⠀⢀⣴⠛⠉⠉⠀⣾⣷⣿⡆⠀⠀⠀⠐⠛⠿⢟⡲⢦⡀⠀⠀⠀⠀\n"
                            "⠀⠀⠀⠀⣠⢞⣭⠎⠀⠀⠀⠀⠘⠛⠛⠀⠀⢀⡀⠀⠀⠀⠀⠈⠓⠿⣄⠀⠀⠀\n"
                            "⠀⠀⠀⡜⣱⠋⠀⠀⣠⣤⢄⠀⠀⠀⠀⠀⠀⣿⡟⣆⠀⠀⠀⠀⠀⠀⠻⢷⡄⠀\n"
                            "⠀⢀⣜⠜⠁⠀⠀⠀⢿⣿⣷⣵⠀⠀⠀⠀⠀⠿⠿⠿⠀⠀⣴⣶⣦⡀⠀⠰⣹⡆\n"
                            "⢀⡞⠆⠀⣀⡀⠀⠀⠘⠛⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣶⠇⠀⢠⢻⡇\n"
                            "⢸⠃⠘⣾⣏⡇⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⣠⣤⣤⡉⠁⠀⠀⠈⠫⣧\n"
                            "⡸⡄⠀⠘⠟⠀⠀⠀⠀⠀⠀⣰⣿⣟⢧⠀⠀⠀⠀⠰⡿⣿⣿⢿⠀⠀⣰⣷⢡⢸\n"
                            "⣿⡇⠀⠀⠀⣰⣿⡻⡆⠀⠀⠻⣿⣿⣟⠀⠀⠀⠀⠀⠉⠉⠉⠀⠀⠘⢿⡿⣸⡞\n"
                            "⠹⣽⣤⣤⣤⣹⣿⡿⠇⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡔⣽⠀\n"
                            "⠀⠙⢻⡙⠟⣹⠟⢷⣶⣄⢀⣴⣶⣄⠀⠀⠀⠀⠀⢀⣤⡦⣄⠀⠀⢠⣾⢸⠏⠀\n"
                            "⠀⠀⠘⠀⠀⠀⠀⠀⠈⢷⢼⣿⡿⡽⠀⠀⠀⠀⠀⠸⣿⣿⣾⠀⣼⡿⣣⠟⠀⠀\n"
                            "⠀⠀⠀⠀⠀⠀⠀⠀⢠⡾⣆⠑⠋⠀⢀⣀⠀⠀⠀⠀⠈⠈⢁⣴⢫⡿⠁⠀⠀⠀\n"
                            "⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⣧⣄⡄⠴⣿⣶⣿⢀⣤⠶⣞⣋⣩⣵⠏⠀⠀⠀⠀⠀\n"
                            "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢺⣿⢯⣭⣭⣯⣯⣥⡵⠿⠟⠛⠉⠉⠀⠀⠀⠀⠀⠀⠀" << endl;
            cout << endl << "You got it in " << attempts << " tries" << endl; //display the number of tries
        }
    } while (guess != randomNumber);

    return 0;
}
