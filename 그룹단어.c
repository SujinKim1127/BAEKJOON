

/*
#include<stdio.h>



int main() {

   int n, ng = 0;
   scanf("%d\n", &n);

   while (n--) {

	  char s[101] = { 0, };
	  int chk[27] = { 0, };
	  scanf("%s", s);

	  int prev = -1, curr, i;

	  for (i = 0; s[i] != '\0'; i++) {
		 curr = s[i] - 'a';

		 if (prev != curr && chk[curr] != 0)
			break;

		 chk[curr]++;
		 prev = curr;
	  }

	  if (s[i] == '\0')
		 ng++;
   }

   printf("%d", ng);

   return 0;



}
*/

/*
#include <stdio.h>

int main(){
	int n;
	int a, b;
	scanf("%d%*c", &n);
	int num = 0;
	int H = 1;
	for(a = 0; a < n; a++){
		H = 1;
		int alpha[27] = { 0, };
		char str[101] = { 0, };

		gets(str);
		for(b = 0; b <= strlen(str); b++){
			if(alpha[str[b]-'a'] == 1){
				H = 0;
				break;
			}
			if(str[b] != str[b+1]){
				alpha[str[b]-'a'] = 1;
			}
		}
		if(H == 1){
			num++;
		}
	}
	printf("%d", num);
}
*/

#include <stdio.h>

int main() {
	char str[101];
	char alp[26] = { 0 };
	int n,i,j,k=0, count=0;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s", str);
		for (j = 0; j < 26; j++) {
			alp[i] = 0;
		}
		if (strlen(str)==1)
			count++;
		else if (strlen(str) > 1) {
			alp[str[0]-97] = 1;
			for (k = 1; str[k] != '\0'; k++) {
				if (alp[str[k]-97] == 1 && str[k - 1] != str[k])
					break;
				else {
					alp[str[k] - 97] = 1;
				}	
			}
		}
		if (strlen(str) == k)
			count++;

	}
	printf("%d", count);
}