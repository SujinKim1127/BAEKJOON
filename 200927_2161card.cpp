// 200927_2161card.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <list>
using namespace std;

int main()
{
	int n;
	cin >> n;
	list<int> l;
	for (int i = 1; i <= n; i++)	//list에 값 넣기 
	{
		l.push_front(i);			//1이 제일 위에 있도록
	}						// n n-1 .... 3 2 1

	while (l.size()!=0)		//리스트가 차있을때까지
	{
		cout << l.back() << " ";	//맨 위에 있는 숫자 반환
		l.pop_back();				// 맨 위의 숫자 삭제
		if (l.size()!=0)			//예외 발생해서 조건문 삽입
		{
			l.push_front(l.back());		// 맨위 맨 아래로;
			l.pop_back();				// 아래로 보낸숫자 위에 남아있는것 삭제
		}
	}
}
