/*
#include <stdio.h>


*/

#include <stdio.h>

int main() {
	char str[101] = {0};	//문자열이니까 char로 받기
	int n,i,sum=0;
	scanf("%d", &n);
	scanf("%s", str);
	for (i = 0; i < n; i++) {
		sum += str[i]-'0';	//아스키코드값 빼주기
	}
	printf("%d", sum);
}