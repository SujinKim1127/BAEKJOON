// 17298_오큰수.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int arr[1000000] = { 0, };
int count = 0;
int nge[1000000] = { 0, };


int main()
{
	int N;
	cin >> N;
	int* arr = new int[N];
	stack<int> sta;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = N - 1; i >= 0; i--)
	{
		sta.push(arr[i]);	// 거꾸로 stack에 값 저장
	}

	int max = *max_element(arr, arr + N);

	for (int i = 0; i < N; i++)
	{
		int top = sta.top();
		sta.pop();
		while (!sta.empty())
		{
			if (top < sta.top())	// 지금의 top이 바로 다음값보다 작으면
			{
				nge[i] = sta.top();

				if (nge[i - 1] == 0 || nge[i - 1] == max)	// 그 전께 빠져나가서 못구했다면
				{
					if(sta.top()<max)
						nge[i - 1] = sta.top();
				}
				break;		// while문 빠져나가기
			}
			else					// 지금의 top이 바로 다음값보다 크면
				break;

		}
		if (nge[i] == 0 && top < max)
		{
			nge[i] = max;
		}
		else if(nge[i]==0)
			nge[i] = -1;
	}

	for (int i = 0; i < N-1; i++)
	{
		cout << nge[i] << " ";
	}
	cout << -1;

}

