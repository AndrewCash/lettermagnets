#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void checkA(string s, bool &works)
{
    int count = 0;

    for (int i=0; i<s.size(); i++)
    {
        if (s[i] == 'a') count++;
    }

    if (count > 5) (works = false);

    return;
}

int main()
{
    string phrase;
    getline(cin, phrase);

    // Check each letter
    bool phraseWorks = true;

    checkA(phrase, phraseWorks);

    if (phraseWorks)
        cout << "Go ahead bud.\n";
    else
        cout << "That phrase won't fit.\n";


    return 0;
}
