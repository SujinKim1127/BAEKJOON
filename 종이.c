/*
#include<stdio.h>

int map[2222][2222], count[3] = { 0, };

void numPapers(int size, int x, int y) {

   int temp, i, j;

   temp = map[x][y];

   for (i = x; i < x + size; i++)for (j = y; j < y + size; j++) {

	  if (temp != map[i][j]) {

		 for (i = 0; i < 3; i++)for (j = 0; j < 3; j++) {

			numPapers(size / 3, x + (size / 3)*i, y + (size / 3)*j);

		 }

		 return;

	  }

   }

   count[temp + 1]++;

}

int main() {

   int N, i, j;

   scanf("%d", &N);

   for (i = 0; i < N; i++)for (j = 0; j < N; j++) {

	  scanf("%d", &map[i][j]);

   }

   numPapers(N, 0, 0);

   for (i = 0; i < 3; i++)printf("%d\n", count[i]);

}
*/

/*
#include<stdio.h>

int main() {
   char arr[20];
   int a = 0;
   int i;
   scanf("%s", arr);

   for (i = 0; arr[i] != '\0'; i++) {
	  if (arr[i] >= 65 && arr[i] <= 67)
		 a += 3;
	  else if (arr[i] >= 68 && arr[i] <= 70)
		 a += 4;
	  else if (arr[i] >= 71 && arr[i] <= 73)
		 a += 5;
	  else if (arr[i] >= 74 && arr[i] <= 76)
		 a += 6;
	  else if (arr[i] >= 77 && arr[i] <= 79)
		 a += 7;
	  else if (arr[i] >= 80 && arr[i] <= 83)
		 a += 8;
	  else if (arr[i] >= 84 && arr[i] <= 86)
		 a += 9;
	  else if (arr[i] >= 87 && arr[i] <= 90)
		 a += 10;
   }

   printf("%d", a);

   return 0;
}
*/