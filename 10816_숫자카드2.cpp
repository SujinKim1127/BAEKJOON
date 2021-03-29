// 10816_숫자카드2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>
using namespace std;


int main()
{
	int n, m;
	scanf("%d", &n);
	vector<int> c(n);

	for (int i = 0; i < n; i++)
		scanf("%d", &c[i]);
	sort(c.begin(), c.end());

	scanf("%d", &m);
	int a = 0;
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &a);
		printf("%d ", upper_bound(c.begin(), c.end(), a) - lower_bound(c.begin(), c.end(), a));
	}

	cout << endl;
	return 0;
}


