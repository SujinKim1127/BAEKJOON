// 1920_수찾기.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm> 
using namespace std;
int N, M;
int A[1000000] = { 0, };
int B[1000000] = { 0, };
int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	int m = A[0];
	for (int i = 0; i < N; i++)
		m = max(m, A[i]);	// A 최대값 찾기

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> B[i];
		if (B[i] <= m)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}

}

