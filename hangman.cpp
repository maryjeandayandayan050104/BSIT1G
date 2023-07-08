#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <algorithm>
using namespace std;

// A function that uses two-dimensional array to make random pair of a category and secret word
    pair<string, string> hangman(){
        string words[6][10] = {
            {"APPLE", "BACON", "BREAD", "CHILI", "CURRY", "FUDGE", "GRAPE", "HONEY", "LEMON", "MANGO"},
            {"BLUEBELL", "DAFFODIL", "GARDENIA", "HIBISCUS", "MARIGOLD", "PETUNIA", "PRIMROSE", "SUNFLOWER", "ZINNIA"},
            {"AZERBAIJAN", "BOSNIA", "CZECHIA", "DJIBOUTI", "KYRGYZSTAN", "PHILIPPINES", "VENEZUELA", "ZIMBABWE"},
            {"BLUES", "CLASSICAL", "COUNTRY", "ELECTRONIC", "HIPHOP", "JAZZ", "OPERA", "REGGAE", "ROCK", "SOUL"},
            {"ALGORITHM", "COMPILER", "FUNCTION", "CONTINUE", "QUEUE", "INTERFACE", "VARIABLE", "IMPORT", "STATIC", "DEFAULT"},
            {"BEAVER", "DUGONG", "ELEPHANT", "FALCON", "GIRAFFE", "MONKEY", "PANDA", "RABBIT", "TIGER", "ZEBRA"}
        };

        // An array of category names
        string categoryNames[] = {"FOODS", "FLOWERS", "COUNTRY", "GENRES","PROGRAMMING","ANIMALS"}; // Add the new category name
        // Random category
        int category = rand() % 6; // Change the argument of rand() % to 6
        // Random secret word base from the category
        int index = rand() % 10;

        return make_pair(words[category][index], categoryNames[category]);
    }

// A function that returns true if the user has guessed the word correctly, false otherwise
    bool isCorrect(string word, string user_guess) {
        // Convert both strings to uppercase
        transform(word.begin(), word.end(), word.begin(), ::toupper);
        transform(user_guess.begin(), user_guess.end(), user_guess.begin(), ::toupper);
        // Compare the word and the guess
        if(word == user_guess){
            return true;
        }else{
            return false;
        }
    }

// A function that returns a string with dashes for each letter of the word, except for the letters that the user has guessed correctly
    string getHint(string word, string letters) {
    string hint = "";
        // Loop through each letter of the word
        for (int i = 0; i < word.length(); i++) {
            // Check if the letter is in the letters string
            if(letters.find(word[i]) != string::npos) {
                // Append the letter to the hint
                hint += word[i];
                hint += " ";
            }else{
                // Append a dash to the hint
                hint += "_ ";
            }
        }
        return hint;
    }

    // A function that returns true if the user has used up all their guesses, false otherwise
    bool isGameOver(int guesses_left){
        if(guesses_left <= 0){
            return true;
        }else{
            return false;
        }
    }

// A function that contains hangman stages
    string hangman_pics[] = {
        "\t\t\t  +----+\n"
        "\t\t\t  |    |\n"
        "\t\t\t       |\n"
        "\t\t\t       |\n"
        "\t\t\t       |\n"
        "\t\t\t       |\n"
        "\t\t\t=========",
        "\t\t\t  +----+\n"
        "\t\t\t  |    |\n"
        "\t\t\t  O    |\n"
        "\t\t\t       |\n"
        "\t\t\t       |\n"
        "\t\t\t       |\n"
        "\t\t\t=========",
        "\t\t\t  +----+\n"
        "\t\t\t  |    |\n"
        "\t\t\t  O    |\n"
        "\t\t\t  |    |\n"
        "\t\t\t       |\n"
        "\t\t\t       |\n"
        "\t\t\t=========",
        "\t\t\t  +----+\n"
        "\t\t\t  |    |\n"
        "\t\t\t  O    |\n"
        "\t\t\t /|    |\n"
        "\t\t\t       |\n"
        "\t\t\t       |\n"
        "\t\t\t=========",
        "\t\t\t  +----+\n"
        "\t\t\t  |    |\n"
        "\t\t\t  O    |\n"
        "\t\t\t /|\\   |\n"
        "\t\t\t       |\n"
        "\t\t\t       |\n"
        "\t\t\t=========",
        "\t\t\t  +----+\n"
        "\t\t\t  |    |\n"
        "\t\t\t  O    |\n"
        "\t\t\t /|\\   |\n"
        "\t\t\t /     |\n"
        "\t\t\t       |\n"
        "\t\t\t=========",
        "\t\t\t  +----+\n"
        "\t\t\t  |    |\n"
        "\t\t\t  O    |\n"
        "\t\t\t /|\\   |\n"
        "\t\t\t / \\   |\n"
        "\t\t\t       |\n"
        "\t\t\t========="
        };

    // A function that displays the opening hangman
    void displayHangmanAnimation(string hangman_pics[], int size) {
        for (int i = 0; i < size; i++) {
            system("cls");
            cout << hangman_pics[i] << endl;
            Sleep(1000);
        }
    }

int main(){
    // Initialize random value
    srand(time(0));

    // Variables
    string word; // The secret word
    string letters; // The letters guessed by the user
    string user_guess; // The user's guess letters
    int welcome_massage; // The user's answer to the welcome message
    int guesses_left; // The number of guesses left for the user

    // Display welcome message
    displayHangmanAnimation(hangman_pics, sizeof(hangman_pics)/sizeof(hangman_pics[0]));
    cout << "\n\t [1] PLAY GAME    ";
    cin >> welcome_massage;
    cin.ignore(); // Clear the newline character from the buffer
    if(welcome_massage!=1){
        system("cls");
        displayHangmanAnimation(hangman_pics, sizeof(hangman_pics)/sizeof(hangman_pics[0]));
        cout << "\n\t\tWe're sorry to see you go. Please come back and play again soon!\n\n\n" << endl;
        return 0;
    }else{
        // Start the loop to let the user play multiple times
        int playAgain = 1; // The looping function variable
        do {
        system("cls");
        cout << hangman_pics[0] << endl; // Add this line to display the first stage of the hangman drawing
        int hangman_stage = 0; // The hangman stages

            // Start a new game
            if (playAgain == 1) {
                // Initialize the guesses to be equal to the number of stages in the hangman drawing minus one
                guesses_left = sizeof(hangman_pics)/sizeof(hangman_pics[0]) - 1;
                // Initialize the letters to be an empty string
                letters = "";
                // Get random word and category from the preferred category 
                pair<string, string> result = hangman();
                word = result.first;
                string categoryName = result.second;

                    // Display the category name to the user
                    cout << "\nCATEGORY: \033[33m" << categoryName << "\033[0m" << endl;

                    // Display a message with number of guesses and hint
                    cout << "You have " << guesses_left << " chance(s) to get the word.\n" << endl;
                    cout << getHint(word, letters) << endl;
                    
                    // Add a boolean variable to keep track of whether the user has already guessed a letter
                    bool already_guessed = false;

                    // Start a loop for the guess parts and hangman stages
                    while(!isCorrect(word, user_guess) && !isGameOver(guesses_left) && hangman_stage < sizeof(hangman_pics)/sizeof(hangman_pics[0])){
                        // Check if already_guessed is true and display a message accordingly
                        if (already_guessed) {
                            system("cls");
                            cout << hangman_pics[hangman_stage] << endl;
                            cout << "\n\033[31mYou have already guessed that.\033[0m" << endl;
                            cout << "\nCATEGORY: " << categoryName << endl;
                            cout << "You have \033[33m" << guesses_left << "\033[0m guesses left.\n" << endl;
                            cout << getHint(word, letters) << endl;
                            already_guessed = false;
                        }

                        cout << "\nGuess a letter: ";
                        getline(cin, user_guess);
                        if (user_guess.length() == 1) {
                            // Convert both strings to uppercase
                            string uppercase_letters = letters;
                            transform(uppercase_letters.begin(), uppercase_letters.end(), uppercase_letters.begin(), ::toupper);
                            transform(user_guess.begin(), user_guess.end(), user_guess.begin(), ::toupper);

                            // Check if the letter has already been guessed
                            if(uppercase_letters.find(user_guess) != string::npos) {
                                // Set already_guessed to true
                                already_guessed = true;
                            }else{
                                // Append the letter to the letters string
                                letters += user_guess;
                                system("cls");

                                // Convert both strings to uppercase
                                string uppercase_word = word;
                                transform(uppercase_word.begin(), uppercase_word.end(), uppercase_word.begin(), ::toupper);

                                // Check if the letter is in the word
                                bool isCorrectGuess = uppercase_word.find(user_guess) != string::npos;

                                // Display the hangman stage
                                cout << hangman_pics[hangman_stage] << endl;

                                // Display a message indicating if the guess is correct or wrong
                                if (isCorrectGuess) {
                                    cout << "\n\033[32mThat's correct!\033[0m" << endl;
                                } else {
                                    cout << "\n\033[31mThat's wrong.\033[0m" << endl;
                                    guesses_left--;
                                    hangman_stage++;
                                }

                                // Check if the user has successfully guessed the secret word
                                string guessed_word = getHint(word, letters);
                                guessed_word.erase(remove(guessed_word.begin(), guessed_word.end(), ' '), guessed_word.end());
                                if(isCorrect(word, guessed_word)){
                                    break;
                                }
                                
                                cout << "\nCATEGORY: " << categoryName << endl;
                                cout << "You have \033[33m" << guesses_left << "\033[0m guesses left.\n" << endl;
                                cout << getHint(word, letters) << endl;
                            }

                        }else{
                            // Check if the user's guess is correct
                            bool isCorrectGuess = isCorrect(word, user_guess);

                            // Clear the screen
                            system("cls");

                            // Display the hangman stage
                            cout << hangman_pics[hangman_stage] << endl;

                            // Display a message indicating if the guess is correct or wrong
                            if (isCorrectGuess) {
                                cout << "\n\033[32mThat's correct!\033[0m" << endl;
                            } else {
                                cout << "\n\033[31mThat's wrong.\033[0m" << endl;
                            }

                            cout << "You have \033[33m" << guesses_left << "\033[0m guesses left.\n" << endl;
                            cout << getHint(word, letters) << endl;

                        }
                    }

                    // Check if the user has guessed the word correctly or ran out of guesses and display a message accordingly
                    system("cls");
                    string final_guessed_word = getHint(word, letters);
                    final_guessed_word.erase(remove(final_guessed_word.begin(), final_guessed_word.end(), ' '), final_guessed_word.end());
                    if(isCorrect(word, final_guessed_word)){
                        cout << "\n\n\t\tCategory\t: \033[32m" << categoryName << "\033[0m" << endl;
                        cout << "\t\tSecret word\t: \033[32m" << word << "\033[0m" << endl;
                        cout << "\n\t\tCongratulations! You have guessed the word!\n" << endl;
                    }else{
                        cout << "\n\t\t\033[31mGAME OVER!\033[0m\n\t\tThe secret word was \033[33m" << word << "\033[0m" << endl;
                        cout << hangman_pics[sizeof(hangman_pics)/sizeof(hangman_pics[0])-1] << endl;
                    }
                }

            // Ask the user if they want to play again and get their input
            cout << "_____________________________________________________________________" << endl;
            cout << "\n\t [1] PLAY AGAIN\t"; 
            cin >> playAgain;
            cin.ignore();
            user_guess = "";

        }while(playAgain != 0);
        system("cls");
        displayHangmanAnimation(hangman_pics, sizeof(hangman_pics)/sizeof(hangman_pics[0]));
        cout << "\t\tWe're sorry to see you go. Please come back and play again soon!\n" << endl;
        cout << "\n\t\t\tThank you for playing Hangman Game!\n" << endl;
    }
    return 0;
}
