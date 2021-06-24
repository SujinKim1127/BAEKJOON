#include <iostream>
using namespace std;

// 백트렉킹

int N, S;
int arr[20];
int result=0;

void num(int idx, int sum)
{
    sum += arr[idx];
    if(idx >= N)
        return;
    if(sum == S)
        result++;
    
    num(idx + 1, sum - arr[idx]);

    num(idx + 1, sum);
}

int main(){
    cin >> N >> S;
    for(int i = 0; i < N; i++)
        cin >> arr[i];
    
    num(0,0);
    cout << result;
}

