// 2606_바이러스.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>
#include <queue>
#define MAX_VALUE 5001
using namespace std;

int N, C, cnt=0;
int mat[MAX_VALUE][MAX_VALUE];
int visit[MAX_VALUE];


void dfs(int v)
{
    visit[v] = 1;
    cnt++;      // 들어올때마다 카운트
    for (int i = 1; i <= C; i++)
    {
        if (mat[v][i] == 0 || visit[i] == 1)   // 방문한 노드이거나 연결안된 노드는 스킵
            continue;
        dfs(i);             // 재귀로 다시 검색
    }
    return;
}


int main()
{
    cin >> C >> N;
    int x, y;
    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        mat[x][y] = mat[y][x] = 1;  // 인접행렬 만들기
    }
    dfs(1);
    cout << cnt - 1;

}

