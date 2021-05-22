#include <iostream>
using namespace std;
int n, m;
int arr[9] = {0, };
bool visited[9] = {0, };

void BackTracking(int cnt)
{
    if(cnt == m)
    {
        for (int i = 0; i < m; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;        
    }
    for(int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
            visited[i] = true;
            arr[cnt] = i;
            BackTracking(cnt + 1);
            visited[i] = false;
        }
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    BackTracking(0);
    return 0;
}