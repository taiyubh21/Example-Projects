// PointersReverseString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void reverse(char* str)
{
    char* endstring = str;

    // move endstring to the end of the string str
    while (*(endstring + 1) != '\0')
    {
        // to complete: move endstring to the right
        endstring++;
    }


    // swap characters; move endstring from right to left; str from left to right and swap until they cross; use tmp to swap
    char tmp;
    while (endstring > str)
    {
        // to complete: swap the values pointed by endstring and by str (use tmp variable)
        tmp = *str;
        *str = *endstring;
        tmp = *endstring;
        // to complete: move pointers (str toward the right, endstring towards the left)
        str++;
        endstring--;
    }
}


int main()
{
    string s1;

    cin >> s1;

    reverse(&s1[0] ); // need to complete the call- what should we pass as argument ?

    cout << s1;

    cin.get();


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
