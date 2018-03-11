#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int packs = 5; // number of magnet letter packs
    int SIZE = (packs * 26 - 1);
    
    // Create string and get user input
    char phrase[SIZE]; 
    cin.getline(phrase, SIZE);
    
    int alphabet[26 - 1];
    

    for (int index=0; index < (strlen(phrase)); index++)
    {
        if (phrase[index] == ('a' | 'A'))
        {
            
        }
    }
    
//    cout << numof_A << endl;
//    cout << numof_B << endl;
//    cout << numof_C << endl;

    return 0;
}

