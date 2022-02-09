// Hangman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <cstdio> // printf
#include <cctype> // tolower
#include <cstdlib> // malloc and free
#include <cstring> // strlen
#include <string>

using namespace std;
int main()
{
    const char* wordList[] = { "Cat", "Smartphone", "Bagley", "Space" };
    int iWrongGuesses = 8;
    char alphabet[] = { "abcdefghijklmnopqrstuvwxyz" };
    char* cHiddenWord = nullptr;
    string sUserInput;

    int iTotalLetters = 0;
    int iAvailableAlphabet = 0;
    int rand = 0;

    //Random int generator in range
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(0, sizeof(wordList) / sizeof(*wordList) - 1);
    rand = distr(gen);

    //Word assigment
    iAvailableAlphabet = strlen(alphabet);
    iTotalLetters = strlen(wordList[rand]);
    
    cHiddenWord = (char*)malloc(sizeof(char) * (iTotalLetters + 1));
    
    char* cFullWord = new char[iTotalLetters + 1];
    strcpy_s(cFullWord, iTotalLetters + 1, wordList[rand]);
    
    char* tempChar = cFullWord;

    cout << cFullWord << "\n";
    cout << *(tempChar+1); //This works
    

    /*
    char* tempChar = cFullWord;
    while (tempChar) {
        cout << *tempChar;
        *tempChar++;
    }
    
    
    while (iWrongGuesses != 0) {
        cout << "Enter your letter/s: " << endl;
        cin >> sUserInput;
        for (char const& c : sUserInput) {
            cout << c << ' ';
        }

        cout << "Guess a letter for the word: " << "" << "/n";
        cout << "You have " << iWrongGuesses << " wrong guesses left, and have guessed "
            << iGuessedL << " letters out of " << iTotalLetters << " so far.";
        cout << "Available letters are: " << iAvailableLetters;

    }
    */
    

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
