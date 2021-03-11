#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define MAX_VALUE 50
using namespace std;

int mat[MAX_VALUE][MAX_VALUE];
int visit[MAX_VALUE][MAX_VALUE];
int cnt = 0;
int M, N, K,T;

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

void DFS(int x, int y)
{
    visit[x][y] = 1;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= M || ny < 0 || ny >= N)
            continue;
        if (mat[nx][ny] == 1 && visit[nx][ny] == 0)
            DFS(nx, ny);
    }
}

int main()
{
    vector<int>v;
    cin >> T;
    while (T--)
    {
        cnt = 0;
        cin >> M >> N >> K;
        // 테스트 케이스마다 배열 초기화
        for(int i=0;i<=M;i++)
            for (int j = 0; j <= N; j++)
            {
                mat[i][j] = 0;
                visit[i][j] = 0;
            }
        // 배추가 있는 위치 입력
        for (int i = 0; i < K; i++)
        {
            int x, y;
            cin >> x >> y;
            mat[x][y] = 1;
        }

        // 배추가 있는 위치에서 dfs 시작
        for (int i = 0; i < M; i++)
            for (int j = 0; j < N; j++)
            {
                if (mat[i][j] == 1 && visit[i][j] == 0)
                {
                    cnt++;
                    DFS(i, j);
                }
            }

        v.emplace_back(cnt);


    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
