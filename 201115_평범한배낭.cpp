// 201115_평범한배낭.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// 12865번

#include <iostream>
#include <algorithm>
using namespace std;
// 숫자 너무 크니까 밖에 선언
int m[101][100001];

int main()
{

	int n;	// 물품 수
	int k;	// 버틸 수 있는 무게
	cin >> n;
	cin >> k;
	int W[101], V[101];

	for (int i = 1; i <= n; i++)		// 물품 수 만큼 반복
	{
		cin >> W[i] >> V[i];
	}

	// 물건수 무게 안에 가치 값을 넣기
	for (int i = 1; i <= n; i++)		// 물품 수 만큼 반복
	{
		for (int j = 1; j <= k; j++)	// 무게 만큼 반복
		{
			if (W[i] <= j)				// 배낭에 넣을 수 있는 무게라면
			{							// 이전에 넣은 물건까지 가치와 현재꺼까지 넣은 물건의 가치 비교
				m[i][j] = max(m[i - 1][j], m[i - 1][j - W[i]] + V[i]);
			}
			else						// 배낭 무게 초과시
				m[i][j] = m[i - 1][j];
		}
	}

	cout << m[n][k];
}

