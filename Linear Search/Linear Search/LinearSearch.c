#include <stdio.h>

int LSearch(int ar[], int len, int target) {
	int i;
	for (i = 0; i < len; i++) {
		if (ar[i] == target)
			return i;

	}
	return -1;
}
int main(void) {
	int arr[5] = { 2,5,9,4,7 };
	int idx;
	idx = LSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1)
		printf("Å½»ö ½ÇÆĞ");
	else
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d\n", idx);

	idx = LSearch(arr, sizeof(arr) / sizeof(int), 0);
	if (idx == -1)
		printf("Å½»ö ½ÇÆĞ");
	else
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º :%d\n", idx);

	return 0;
}