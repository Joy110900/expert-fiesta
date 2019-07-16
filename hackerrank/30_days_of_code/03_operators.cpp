/*
    Given the meal price (base cost of a meal), 
    tip percent (the percentage of the meal price being added as tip), 
    and tax percent (the percentage of the meal price being added as tax) for a meal, 
    find and print the meal's total cost.
 */
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) 
{
    double t, t1, t2; 
    int a;
    t1 = meal_cost*(tip_percent*0.01);
    t2 = meal_cost*(tax_percent*0.01);
    a = round(meal_cost + t1 + t2);
    
    cout << a;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
