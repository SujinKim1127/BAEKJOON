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

