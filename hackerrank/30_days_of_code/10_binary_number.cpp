 /*
Given a base-10 integer, n, convert it to binary (base-2).
Then find and print the base-10 integer denoting the maximum number 
of consecutive 1's in n's binary representation.
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c=0, max=0;; 
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while(n > 0)
    {
        if(n%2 == 1)
        {
            c++;
            if(c >= max)
                max = c;
        }    
        else            
            c = 0;
        n/=2;
    }
    printf("%d\n",max);
    return 0;
}

/*My approach. wasnt right as stored the binary in integer so it could not take big values.
int main()
{
    int d=0, s, r=1, n, t=0, c=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while(n != 0)
    {
        t = t + (n%2)*r;
        n = n/2;
        r = r*10;
    }
    std::cout << t << endl;
    while(t != 0)
    {
        s = t%10;
        if(s == 1)
            c++;
        
        if(c >= d)
            d=c;

        if(s == 0)
            c=0;
    
        t = t/10;
    }

    std:: cout << d;

    return 0;
}
*/