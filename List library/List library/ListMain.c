#include <stdio.h>
#include "ArrayList.h"

int main(void) {
	/*����Ʈ ���� �� �ʱ�ȭ*/
	List list;
	int data, i;
	int sum = 0;
	ListInit(&list);

	/* ���� 1���� 9���� ����*/
	for (i = 1; i < 10; i++)
		LInsert(&list, i);

	/*�����Ͽ� �� ��� �� ���*/
	if (LFirst(&list, &data)) {
		sum += data;
		while (LNext(&list, &data))
			sum += data;
	}
	printf("Sum: %d\n", sum);

	/*2�� ����� 3�� ��� ����*/
	if (LFirst(&list, &data)) {
		if (data % 2 == 0 || data % 3 == 0)
			LRemove(&list);
		while (LNext(&list, &data))
			if (data % 2 == 0 || data % 3 == 0)
				LRemove(&list);
	}
	/*����Ʈ�� ����� ������ ���*/
	if (LFirst(&list, &data)) {
		printf("%d ", data);
		while (LNext(&list, &data))
			printf("%d ", data);
	}
	return 0;
}