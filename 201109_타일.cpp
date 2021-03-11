// 201109_타일.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#define MAX_SIZE 1000000
using namespace std;

int main()
{
    unsigned int n;
    cin >> n;

    unsigned int Tile[MAX_SIZE];

    Tile[1] = 1;
    Tile[2] = 2;

    for (int i = 3; i <= n; i++)
        Tile[i] = (Tile[i - 1] + Tile[i - 2])%15746;

    printf("%d", Tile[n]);
}

