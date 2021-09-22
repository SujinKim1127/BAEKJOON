#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;

    vector<int> x(n);

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]); 
    }
    vector<int> copy(x);
    sort(copy.begin(), copy.end());     // 정렬

    copy.erase(unique(copy.begin(), copy.end(), copy.end()));
    
}