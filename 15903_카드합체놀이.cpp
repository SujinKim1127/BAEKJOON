#include <iostream>
#include <algorithm>
using namespace std;
long long int card[1000];


int main()
{  
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>card[i];
    //----------------------
    sort(card,card+n);  // 오름차순 정렬
    for(int i=0;i<m;i++)
    {
        long long int sum = card[0]+card[1];
        card[0]=sum;
        card[1]=sum;
        sort(card,card+n);  // 오름차순 정렬
    }
    long long int ans=0;
    for(int i=0;i<n;i++)
        ans+=card[i];
    
    cout<<ans<<endl;
    
}