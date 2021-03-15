
// 9012_괄호.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

bool test(string str)
{
    int len = str.size();
    stack<char> stack;

    for (int i = 0; i < len; i++)
    {
        char a = str[i];

        if (a == '(') 
            stack.push(str[i]);
        else if (!stack.empty())    // ')'이면
            stack.pop();
        else    // 비어있으면
            return false;
    }

    return stack.empty();   // 길이 검사다했는데 안에 남아있으면 false
}

int main()
{
    int line;
    cin >> line;

    for (int i = 0; i < line; i++)
    {
        string str;
        cin >> str;
        if (test(str)) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

}

