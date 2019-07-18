/*
Given an integer, n, perform the following conditional actions:

If n is odd, print Weird
If n is even and in the inclusive range of 2 to 5, print Not Weird
If n is even and in the inclusive range of 6 to 20, print Weird
If n is even and greater than 20, print Not Weird
Complete the stub code provided in your editor to print whether or not n is weird.
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if(n%2 != 0)
        cout << "Weird" << endl;
    
    else if((n%2 == 0) and (n <= 5) and (n >= 2))
        cout << "Not Weird" << endl;

    else if((n%2 == 0) and (n <= 20) and (n >= 6))
        cout << "Weird" << endl;

    else if((n%2 == 0) and (n > 20))
        cout << "Not Weird";

    return 0;
}
