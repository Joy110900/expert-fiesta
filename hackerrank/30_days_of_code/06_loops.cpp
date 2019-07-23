/* 
Given an integer,n , print its first 10 multiples.
Each multiple n*i (where 1 <= i <= 10) should be printed on a new line in the form:
 n x i = result.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    std:: cin >> n;
    std:: cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int i = 1; i < 11; i++)
    {
        std:: cout << n << " x " << i << " = " << n*i << std:: endl; 
    }    

    return 0;
}
