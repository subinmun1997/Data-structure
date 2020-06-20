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
		printf("자연수 입력: ");
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

	printf("입력 받은 데이터 출력");
	if (head == NULL) {
		printf("저장된 데이터가 존재하지 않습니다.");
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