#include <iostream>
#include <algorithm>
using namespace std;

long long n, m;
long long height[1000000];
long long ans=0;  // 절단기 높이


bool BinarySearch(long long mid)
{
    unsigned long long sum =0;      // sum 초기화

    for(int i = 0; i < n; i++)
    {
        if(height[i] > mid)
            sum += height[i] - mid;
    }
    if(sum >= m)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
        return true;
    else    // m > sum
        return false;
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
        scanf("%d", &height[i]);
    
    sort(height, height+n);
    long long low = 1;
    long long high = height[n-1];
    while(low <= high)
    {
        long long mid = (low + high) / 2;
        if(BinarySearch(mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    printf("%d", ans);
}