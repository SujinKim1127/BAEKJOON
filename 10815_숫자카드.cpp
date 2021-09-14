#include <iostream>
#include <algorithm>
using namespace std;

/* 이분탐색 */

int n;
int one[500000];

int m;
int two[500000];

int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &one[i]);

    sort(one, one + n);

    scanf("%d", &m);
    for(int i = 0; i < m; i++)
        scanf("%d", &one[i]);

    for(int i = 0; i < m; i++)
    {
        int num = 0;
        int low = 0;
        int high = n - 1;

        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(one[mid] == two[i])
            {
                num = 1;
                break;
            }
            if(one[mid] < two[i])
                low = mid + 1;
            if(one[mid] > two[i])
                high = mid - 1;
        }
        printf("%d ", num);
    }
}