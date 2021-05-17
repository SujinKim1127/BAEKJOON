#include <iostream>
using namespace std;

int main()
{
    // 500, 100, 50, 10, 5, 1
    // 거스름돈 개수가 가장 적게 잔돈 주기
    int m;  // 돈
    int cnt=0;
    cin>>m;
    int r = 1000-m;
    int money[6]={500,100,50,10,5,1};
    for (int i=0;i<6;i++)
    {
        cnt += r/money[i];
        r = r % money[i];
    }
    cout<<cnt;
}