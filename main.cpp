// Andrew Cash 2018
// Sarah Bondurant 2019

// Determine if a phrase can fit in a speific number
// of magnetic letters

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Functions to check if a letter shows up
// more than a set number of times.

void check(string s, char c, bool &works, int &numberOfSets)
{
    int count = 0;

    for (int i=0; i<s.size(); i++)
        if (s[i] == c)
            count++;

    if (count > numberOfSets) (works = false);

    return;
}

int main()
{
    int numberOfSets = 5;

    cout << "Please enter a phrase: ";
    string phrase;
    getline(cin, phrase);

    // Check each letter
    bool phraseWorks = true;
    char c = 'a';

    for (int i = 0; i < 26 && phraseWorks; i++) {
        check(phrase, c, phraseWorks, numberOfSets);
        c++;
    }

    if (phraseWorks)
        cout << "Go ahead bud.\n";
    else
        cout << "That phrase won't fit.\n";

    return 0;
}
