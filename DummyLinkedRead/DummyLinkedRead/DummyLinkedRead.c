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

	head = (Node*)malloc(sizeof(Node));
	tail = head;

	while (1) {
		printf("자연수 입력: ");
		scanf_s("%d", &readData);
		if (readData < 1)
			break;
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;

		tail->next = newNode;
		tail = newNode;

		printf("입력 받은 데이터의 전체 출력: ");
		if (head == tail) {
			printf("저장된 자연수가 존재하지 않습니다.");
		}
		else {
			cur = head;
			while (cur->next != NULL) {
				cur = cur->next;
				printf("%d ", cur->data);
			}
		}
	}
	printf("\n\n");

	if (head == tail) {
		return 0;
	}
	else {
		Node* delNode = head;
		Node* delNodeNext = head->next;

		while (delNodeNext != NULL) {
			delNode = delNodeNext;
			delNodeNext = delNodeNext->next;
			printf("%d을 삭제합니다. \n", delNode->data);
			free(delNode);
		}
	}
	return 0;
}