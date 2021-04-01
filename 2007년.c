/*
#include <stdio.h>

int main() {
	int numDaysOfMonth[12] = { 31, 28, 31, 30,31,30, 31, 31, 30, 31, 30, 31 };
	char name[7][4] = { "SUN", "MON","TUE","WED","THU","FRI","SAT" };
	int x, y, sum;
	sum = 0;
	scanf("%d %d", &x, &y);
	for (int i = 0; i < x-1; i++) {
		sum += numDaysOfMonth[i];
	}
	sum += y;
	printf("%s", name[sum%7]);
}
*/
