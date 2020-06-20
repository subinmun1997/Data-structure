#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
	int data;
	struct _node* next;
}Node;

int main(void) {
	Node* head = NULL;
	Node* tail = NULL;
	Node* cur = NULL;
	Node* newNode = NULL;
	int readData;

	while (1) {
		printf("�ڿ��� �Է�: ");
		scanf_s("%d", &readData);
		if (readData < 1)
			break;
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;

		if (head == NULL) {
			head = newNode;
			head = newNode;
		}	
		else {
			newNode->next = head;
			head = newNode;
		}
	}
	printf("\n");

	printf("�Է� ���� ������ ���");
	if (head == NULL) {
		printf("����� �����Ͱ� �������� �ʽ��ϴ�.");
	}
	else {
		cur = head;
		printf("%d", cur->data);
		while (cur->next != NULL) {
			cur = cur->next;
			printf("%d", cur->data);
		}
	}
	printf("\n");

	return 0;
}