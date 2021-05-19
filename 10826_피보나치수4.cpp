#include <iostream>
using namespace std;
string fb[10000];

unsigned long long int fibo(int n)
{
    fb[0] = '0';
    fb[1] = '1';
    for(int i = 2; i <= n; i++)
        fb[i] = fb[i-1] + fb[i-2];
    return fb[n];
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
}