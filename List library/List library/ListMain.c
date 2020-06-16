#include <stdio.h>
#include "ArrayList.h"

int main(void) {
	/*리스트 생성 및 초기화*/
	List list;
	int data, i;
	int sum = 0;
	ListInit(&list);

	/* 정수 1부터 9까지 저장*/
	for (i = 1; i < 10; i++)
		LInsert(&list, i);

	/*참조하여 합 계산 후 출력*/
	if (LFirst(&list, &data)) {
		sum += data;
		while (LNext(&list, &data))
			sum += data;
	}
	printf("Sum: %d\n", sum);

	/*2의 배수와 3의 배수 삭제*/
	if (LFirst(&list, &data)) {
		if (data % 2 == 0 || data % 3 == 0)
			LRemove(&list);
		while (LNext(&list, &data))
			if (data % 2 == 0 || data % 3 == 0)
				LRemove(&list);
	}
	/*리스트에 저장된 데이터 출력*/
	if (LFirst(&list, &data)) {
		printf("%d ", data);
		while (LNext(&list, &data))
			printf("%d ", data);
	}
	return 0;
}