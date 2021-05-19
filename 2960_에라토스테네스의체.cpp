#include <iostream>
#include <list>

#include <algorithm>
using namespace std;

list <int> lst;


int main()
{
    int n, k;
    int cnt=0;
    scanf("%d %d", &n, &k);


    list <int> ::iterator iter;
    for (int i = 2; i <= n; i++)
    {
        lst.push_back(i);
    }
    for (int j = 2; j <= n && cnt <= k; j++) // P
    {   
        if(j=*lst.begin())
        {
            for(int i = j; i <= n; i+=j)
            {
                iter = ::find(lst.begin(),lst.end(), i);
                if(iter != lst.end())
                {
                    lst.remove(i);  cnt++;
                    if(cnt==k)
                        printf("%d", i);
                }
            
            }
        }
    }
        

}
