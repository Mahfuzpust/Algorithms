#include <bits/stdc++.h>
using namespace std;

int lcs( char X[], char Y[], int i, int j )
{
    if (i == 0 || j == 0)
        return 0;

    if (X[i-1] == Y[j-1])
        return 1 + lcs(X, Y, i-1, j-1);
    else
        return max(lcs(X, Y, i, j-1), lcs(X, Y, i-1, j));
}

int max(int a, int b)
{
    return (a > b)? a : b;
}


int main()
{
    char X[] = "PRESIDENT";
    char Y[] = "PROVIDENCE";

    //char X[100]; char Y[100];
    //gets(X);
    //gets(Y);

    int i = strlen(X);
    int j = strlen(Y);

    cout<<"Length of LCS is "<< lcs( X, Y, i, j) ;

    return 0;
}
