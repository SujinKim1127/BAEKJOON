// 1260_DFS와 BFS.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>
#include <queue>
#define MAX_VALUE 1001
using namespace std;

int N, M, V;
int mat[MAX_VALUE][MAX_VALUE];
int visit[MAX_VALUE];

void dfs(int v)
{
    cout << v << " ";
    visit[v] = 1;
    for (int i = 1; i <= N; i++)
    {
        if (visit[v] == 1 || mat[v][i] == 0)   // 방문한 노드이거나 연결안된 노드는 스킵
            continue;
        dfs(i);             // 재귀로 다시 검색
    }
}

void bfs(int v)
{
    queue<int> q;
    q.push(v);              // v 삽입
    visit[v] = 0;           // 방문한곳 체크, 위에서 1로 만들었으니까 이번에는 0으로 체크
    while (!q.empty())
    {
        v = q.front();      // 맨앞에 무엇이 있는지
        cout << q.front() << " ";
        q.pop();            // 맨앞에 있는것 삭제
        for (int i = 1; i <= N; i++)        // v(현재노드)에서 방문할 수 있는곳 체크
        {
            if (visit[i] == 0 || mat[v][i] == 0)    // 방문했거나 연결안된 노드이면
                continue;                           // 스킵하고 i++
            q.push(i);      // i값 넣기
            visit[i] = 0;   // i 방문 했음
        }
    }
}

int main()
{
    std::cout << "Hello World!\n";
}

