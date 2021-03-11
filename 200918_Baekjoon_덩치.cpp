// 200918_Baekjoon_덩치.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int w[50];
    int h[50];
    int l[50];

    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> h[i];
        l[i] = 1;
    }

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (w[i]>w[j] && h[i]>h[j]) // 키, 몸무게 둘 다 큼
            {
                l[j]++;
            }
            else if (w[i] > w[j] && h[i] < h[j] || w[i] < w[j] && h[i] > h[j])
            {       // 둘 중 하나만 크거나 작은 경우
                continue;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<l[i]<<" ";
    }

    //벡터로도 풀어보기

}
