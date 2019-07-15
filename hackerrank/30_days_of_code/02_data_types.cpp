   /*  
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    */


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() 
{
    int i = 4, a;
    double d = 4.0;
    double b;
    string s = "HackerRank ", c;

    cin >> a;
    cin >> b;
    cin.ignore();
    getline(cin,c);
    
    cout << i + a << endl << fixed << setprecision(1) << d + b << endl << s + c << endl;  

    return 0;
}