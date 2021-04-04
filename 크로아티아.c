/*
#include <stdio.h>


int main(void) {
	char c[101];
	scanf("%s", c);
	int cnt = 0;
	int a;
	for (int j = 0; c[j] != '\0'; j += a) {
		if (c[j] == 'c'&& c[j + 1] == '=') {
			a = 2;
			cnt++;
		}
		else if (c[j] == 'c'&& c[j + 1] == '-') {
			a = 2;
			cnt++;
		}
		else if (c[j] == 'd'&& c[j + 1] == 'z' &&  c[j + 2] == '=') {
			a = 3;
			cnt++;
		}
		else if (c[j] == 'd'&& c[j + 1] == '-') {
			a = 2;
			cnt++;
		}
		else if (c[j] == 'l'&& c[j + 1] == 'j' ) {
			a = 2;
			cnt++;
		}
		else if (c[j] == 'n'&& c[j + 1] == 'j') {
			a = 2;
			cnt++;
		}
		else if (c[j] == 's'&& c[j + 1] == '=') {
			a = 2;
			cnt++;
		}
		else if (c[j] == 'z'&& c[j + 1] == '=') {
			a = 2;
			cnt++;
		}
		else {
			a = 1;
			cnt++;
		}
	}
	printf("%d",cnt);
}
*/