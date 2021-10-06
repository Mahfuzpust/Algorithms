#include<iostream>
#include<string.h>
using namespace std;

int lcsfunction(char str1[], char str2[], int i, int j)
{
    int value1, value2,v1,v2;
    if(i==0 || j==0)
        return 0;

    if(str1[i-1]==str2[j-1])
    {
        value1= 1+lcsfunction(str1,str2,i-1,j-1);
        return value1;
    }
    else{
        v1=lcsfunction(str1,str2,i,j-1);
        v2=lcsfunction(str1,str2,i-1,j);
        value2=max(v1,v2);
        return value2;

    }
}

int max(int num1, int num2)
{
    int max1=(num1>num2)? num1 : num2;
    return max1;
}

int main()
{
    char str1[]="ABCBDAB";
    char str2[]="BDCABA";

    int i,j;
    i=strlen(str1);
    j=strlen(str2);

    cout << lcsfunction(str1,str2,i,j);
    return 0;

}

