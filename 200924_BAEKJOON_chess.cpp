// 200924_BAEKJOON_chess.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()

{
	int N, M;
	cin >> N >> M;

	char arr[50][50];


	for (int i = 0; i < N; i++)
	{
		cin>>arr[i];
	}


	int wrong[2500] = { -1, };		//바꿔야하는 개수
	for (int i = 0; i < 2500; i++)
	{
		wrong[i] = -1;
	}
	int cnt = 0;
	int cntB = 0;
	int cntW = 0;
	int min = 0;
	char chess[8][8];

	//체스판고르기
	for (int a = 0; a <= N-8; a++)
	{
		for (int b = 0; b <= M-8; b++)	//8*8
		{
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					chess[i][j] = arr[a + i][b + j];	//8*8 chess 판 만들기
				}
			}
			cntW = 0;
			cntB = 0;
			//B
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if ((i % 2 == 1 && j % 2 == 1) || (i % 2 == 0 && j % 2 == 0))	//=B
					{
						if (chess[i][j] != 'B')
						{
							cntB++;
						}
					}
					else if ((i % 2 == 0 && j % 2 == 1) || (i % 2 == 1 && j % 2 == 0))	//=W
					{
						if (chess[i][j] != 'W')
						{
							cntB++;
						}
					}
				}
			}

				//W
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if ((i % 2 == 1 && j % 2 == 1) || (i % 2 == 0 && j % 2 == 0))	//=W
					{
						if (chess[i][j] != 'W')
						{
							cntW++;
						}
					}
					else if ((i % 2 == 0 && j % 2 == 1 )|| (i % 2 == 1 && j % 2 == 0))	//=B
					{
						if (chess[i][j] != 'B')
						{
							cntW++;
						}
					}
				}
			}

			if (cntB < cntW)
			{
				wrong[cnt] = cntB;
				cnt++;
			}
			else
			{
				wrong[cnt] = cntW;
				cnt++;
			}
		}
	}

	min = 12345;
	for (int i = 0; i < 2500; i++)
	{
		if (wrong[i]<min&&wrong[i]!=-1)
		{
			min = wrong[i];
		}
	}
	
	cout<<min;
}