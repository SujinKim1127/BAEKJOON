
/*
#include <stdio.h>

int main() {
	int a, b, sum;
	int n, cnt=0;

	scanf("%d", &n);
	int k = n;

	while (n != k || cnt == 0) {
		a = k / 10;
		b = k % 10;
		sum = (a + b) % 10;		// a+b �� ���� 10���� Ŭ �� ����

		a = b;
		b = sum;
		k = a * 10 + b;

		cnt++;
	}

	printf("%d", cnt);

	return 0;
}
*/