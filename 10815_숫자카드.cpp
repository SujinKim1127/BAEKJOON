#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

long n;
unsigned long long one[500000];
list<unsigned long long> p;

long m;
unsigned long long two[500000];
list<unsigned long long> q;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> one[i];
        p.push_back(one[i]);
    }

    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> two[i];
        q.push_back(two[i]);
    }

    
    auto it = find(two[0], two[499999], one[i]);
}