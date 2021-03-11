// 200918_Baejon_blackjack.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{

    int N = 0;
    int M = 0;

    cin >> N >> M;

    int card[100];

    for (int i = 0; i < N; i++)
    {
        cin >> card[i];             //카드값 입력
    }

    // card[] 중 3개의 값을 골라서 M값보다 작거나 같도록 만들기
    // M/3 값과 가장 가까운 애들을 고르자
    // 합이 M을 넘어서는 안된다
    //500/3=166.6666 --> 
    // 5= 3 + 2 + 1
    //7= 5 + 4 + 3 2 1
    // 1 2 3 4 5 6 7


    //switch 문으로 card i 번째 값이 


    // 5= 3+2+1 2+1 1
    // 
    int min = 0;

    for (int i = 0; i < N-2; i++)  
    {
        for (int j = i+1; j < N-1; j++) // 중복 방지 i + 1
        {
            for (int k = j+1; k < N; k++)   // 중복 방지 j + 1
            {
                int sum = card[i] + card[j] + card[k];

                if (sum<=M)
                {
                    if (M-sum<M-min)
                    {
                        min = sum;
                    }
                }
            }
        }
    }

    cout << min;
}

