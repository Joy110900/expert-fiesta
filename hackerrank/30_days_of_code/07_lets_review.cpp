/*
Given a string, S, of length N that is indexed from 0 to N-1, 
print its even-indexed and odd-indexed characters as 2 
space-separated strings on a single line.
 */
/* Editorial Code. Good Approach. Should keep in mind.
#include <iostream>
#include <cstring>
using namespace std;


int main() {
    int tests;
    scanf("%d", &tests);
    char input[10000];
    for(int k = 0; k < tests; k++) {
        scanf("%s", input);

        for(int i = 0; i < strlen(input); i += 2) {
            printf("%c", input[i]);
        }
        printf(" ");
        for(int i = 1; i < strlen(input); i += 2) {
            printf("%c", input[i]);
        }
        printf("\n");
    }
    return 0;
}
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() 
{
    short n;
    cin >> n;
    cin.ignore();
    char S[n][10000];

    for(int i=0; i<n; i++)
    {
        cin >> S[i];   
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; S[i][j]!=NULL; j++)
            if(j%2==0)
                cout << S[i][j];

        cout << " ";
        
        for(int j=0; S[i][j]!=NULL; j++)
            if(j%2!=0)
                cout << S[i][j];

        cout << endl;
    }        
    
    return 0;
}
