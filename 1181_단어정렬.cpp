#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N;
vector<string> word;

bool comp(const string &s1, const string &s2)
{
    if(s1.size() == s2.size())  // 사이즈가 같으면
        return s1 < s2;         // 사전순으로
    
    else                        // 사이즈가 다르면 작은게 앞으로
        return s1.size() < s2.size();
}

int main(){
    cin>>N;
    string str;

    for(int i = 0; i < N; i++)
    {
        cin>>str;
        word.push_back(str);
    }
    
    vector<string>::iterator iter;
    vector<string>::iterator end_iter;

    sort(word.begin(), word.end(), comp);   // comp 함수로 정렬

    end_iter = unique(word.begin(), word.end());  // 중복 제거
    // 중복제거후 사이즈값 받기

    for(iter = word.begin(); iter != end_iter; iter++)
        cout<< *iter << endl;
}