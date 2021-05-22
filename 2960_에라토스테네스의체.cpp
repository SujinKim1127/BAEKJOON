#include <iostream>
#include <algorithm>
using namespace std;
bool arr[1000];

int main()
{
    int n, k;
    int cnt=0;
    scanf("%d %d", &n, &k);

    for (int i = 2; i <= n; i++)
    {
        arr[i] = true;
    }
    for (int j = 2; j <= n && cnt <= k; j++) // P
    {   
        for(int i = j; i <= n; i += j)
        {
            if(arr[i])
            {
                arr[i] = false;
                cnt++;
                if(cnt==k)
                {
                    printf("%d", i);
                    return 0;
                }
            }
        }
    }
}
