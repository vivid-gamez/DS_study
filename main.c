#include <stdio.h>
#include <stdlib.h>

typedef struct listNode {
	int data;
	struct listNode* link;
}listNode;

listNode* head = NULL;

void insert_First(int x) {
	struct listNode* newNode = (listNode*)malloc(sizeof(listNode));
	newNode->data = x;
	newNode->link = head;
	head = newNode;
}

void printLL() {
	listNode *p = head;
	printf("Linkedlist(");
	while (p != NULL)
	{
		printf(" %d ", p->data);
		p = p->link;
	}
	printf(")\n");
}

int main() {
	insert_First(3);
	insert_First(2);
	insert_First(1);
	printLL();

	return 0;
}
