// 10816_숫자카드2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main()
{
	int n, m;
	cin >> n;
	vector<int> c(n);

	for (int i = 0; i < n; i++)
		cin >> c[i];
	sort(c.begin(), c.end());

	cin >> m;
	int a = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> a;
		cout << upper_bound(c.begin(), c.end(), a) - lower_bound(c.begin(), c.end(), a) << " ";
	}

	cout << endl;
	return 0;
}

