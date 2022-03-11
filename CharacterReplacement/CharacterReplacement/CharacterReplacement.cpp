// CharacterReplacement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

char* replace(char* s, char c1, char c2)
{
    for (; *s; ++s) //iterate through char array in for loop
        if (*s == c1 && *(s - 1) == '!')//if character is equal to character and the character before it is equal to special character
            *s = c2; //replace character with new character
    return s;
}

int main()
{
    char string[] = "!thisisa!t!est!";
    char c1 = 't';
    char c2 = 'X';

    cout << "String before replace : " << string << endl;
    replace(&string[0], c1, c2);
    cout << "String after replace : " << string << endl;
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
