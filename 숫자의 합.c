/*
#include <stdio.h>


*/

#include <stdio.h>

int main() {
	char str[101] = {0};	//���ڿ��̴ϱ� char�� �ޱ�
	int n,i,sum=0;
	scanf("%d", &n);
	scanf("%s", str);
	for (i = 0; i < n; i++) {
		sum += str[i]-'0';	//�ƽ�Ű�ڵ尪 ���ֱ�
	}
	printf("%d", sum);
}