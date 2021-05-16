#include <iostream>
#include <array>
using namespace std;
int n;
array<int, 10000> que; 
int main()
{
    cin>>n;
    int cnt=0, pos=-1;  // pos는 que의 길이 여부
    string str;
    int x;
    while(cnt<=n-1)
    {
        cin>>str;
        if(str == "push")
        {
            cin>>x;
            pos++;
            que[pos]=x;
        }
        else if(str=="pop")
        {       // 큐 가장 앞에 있는 정수 빼고 그 수를 출력. 없으면 -1 출력
            if(pos == -1)   // 현재위치가 -1 즉 empty이면
                cout<<-1<<endl;
            else
            {                    
                cout<<que[0]<<endl;     
                for (int i = 0; i < pos; i++)
                {
                    int s = que[i+1];
                    que[i]=s;
                }
                pos--;                
            }
        }
        else if(str=="size")     // 큐에 들어있는 정수의 개수 출력
            cout<<pos+1<<endl;
        else if(str=="empty")
        {       // 비어있으면 1, 아니면 0
            if(pos == -1)   // 비어있으면
                cout<<1<<endl;
            else            // 안에 원소가 있으면
                cout<<0<<endl;
        }
        else if(str=="front")
        {       // 큐 가장 앞에 있는 정수 출력. 없으면 -1
            if(pos == -1)   // 비어있으면
                cout<<-1<<endl;
            else            // 안에 원소가 있으면
                cout<<que[0]<<endl;
        }
        else if(str=="back")
        {       // 큐 가장 뒤에 있는 정수 출력. 없으면 -1
            if(pos == -1)   // 비어있으면
                cout<<-1<<endl;
            else            // 안에 원소가 있으면
                cout<<que[pos]<<endl;
        }
        else
            break;
        cnt++;
    }
    
}
