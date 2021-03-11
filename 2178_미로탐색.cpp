#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
#include <vector>
#define MAX_VALUE 100
using namespace std;

int mat[MAX_VALUE][MAX_VALUE] = { 0, };
int visit[MAX_VALUE][MAX_VALUE] = { 0, };
int check[MAX_VALUE][MAX_VALUE] = { 0, };

int M, N, K, T;

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

void BFS(int i, int j)
{
    visit[i][j] = 1;

    queue <pair<int, int>> q;
    q.push(make_pair(i, j));

    while (!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;

        q.pop();

        for (int k = 0;k < 4; k++)
        {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (ny < 0 || ny >= N || nx < 0 || nx >= M)     // 맵 범위 넘어가면
                continue;

            if (mat[ny][nx] == 1 && visit[ny][nx] == 0 && check[ny][nx] == 0)
            {
                check[ny][nx] = check[y][x] + 1;
                visit[ny][nx] = 1;
                q.push(make_pair(ny, nx));
            }
        }
    }
}

int main()
{
    string s;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        for (int j = 0; j < M; j++)
            mat[i][j] = s[j] - '0';     // 아스키코드 값 빼주기
    }
    BFS(0,0);

    printf("%d\n", check[N - 1][M - 1] + 1);
    return 0;
}
