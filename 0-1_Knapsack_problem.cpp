#include "bits/stdc++.h"

using namespace std;

int knapsack(int wt[], int val[], int n, int W)
{
    if(n == 0 || W == 0)
    {
        return 0;
    }

    if(wt[n-1] > W)
    {
        return knapsack(wt, val, n-1, W);
    }

    return max(knapsack(wt, val, n-1, W) , (knapsack(wt, val, n-1, W-wt[n-1]) + val[n-1]));
}

int main()
{
    int weight[] = {20 , 10 , 30};
    
    int total_weight = 50;

    int value[] = {100, 200, 150};

    cout<<knapsack(weight, value, 3, total_weight)<<endl;

    return 0;
}