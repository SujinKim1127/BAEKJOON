#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    int x[10000000];
    int copy[10000000];

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]); 
        copy[i] = x[i];
    }
    
    sort(copy, copy + n);
    
}