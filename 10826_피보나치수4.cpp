#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// 답 찾아보고 문자열로 어떻게 하는지
string fb[10001];
int n;

string fibo(string &s1, string &s2)
{
    string result;
    int ze1 = s1.size();
    int ze2 = s2.size();
    int a, b, cry_before;
    int cry_now = 0;

    if(ze1 < ze2)
    {
        for(int i = 0; i < ze2 - ze1; i++)
            s1.insert(s1.begin(), '0');     // s1 앞에 0 삽입
        
        ze1 = ze2;
    }
    else if(ze2 < ze1)
    {
        for(int i = 0; i < ze1 - ze2; i++)
            s2.insert(s2.begin(), '0');
    }

    for(int i = ze1 - 1; 0 <= i; i--)
    {
        a = s1[i] - '0';
        b = s2[i] - '0';

        cry_before = cry_now;

        if(a + b + cry_before < 10)
        {
            cry_now = 0;
            result += (a + b + cry_before) + '0';
        }
        else
        {
            cry_now = 1;
            result += (a + b + cry_before - 10) + '0';

            if( i == 0 && cry_now == 1) result += '1';
        }
    }
    reverse(result.begin(), result.end());

    return result;
}

int main()
{

    scanf("%d", &n);
    fb[0] = '0';
    fb[1] = '1';
    for(int i = 2; i <= n; i++)
        fb[i] = fibo(fb[i - 1], fb[i - 2]);
    
    cout<<fb[n];
    return 0;
}