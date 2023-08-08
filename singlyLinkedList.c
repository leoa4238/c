#include <stdio.h>
#include <stdlib.h>

typedef int ELEMENT;

typedef struct Node {
	ELEMENT data;
	struct Node * next;
}Node;

typedef struct SinglyLinkedList {
	Node* head; // ù ��° ���(���)�� ����� ��ġ�� ������ �����ͺ���
}List;

void init(List* li) {
	li->head = NULL;
}

// �߰�
// ù��°�� �߰�
void insertFirst(List* li, ELEMENT e) {
	// ��� �����
	Node* newNode = (Node*)malloc(sizeof(Node));// ��� ����
	newNode->data = e;// ���Ӱ� ���� ��忡 ��� �߰�
	newNode->next = li->head;// ���Ӱ� ���� ����� ���� ���� ���� ù��° ���
	li->head = newNode;// ù��° ���� ���Ӱ� ���� ���
}

// ����
void insert(List* li, int idx, ELEMENT e) {
	// ���� ���� �ϰ��� �ϴ� ��ġ�� ���� ��� ã��
	Node* curr = li->head;// curr���� ù��° ��尡 ����ִ�
	for (int i = 0; i < idx-1; i++) {
		curr = curr->next;
	}
	// �ݺ��� ������ ���� curr���� �����ϰ��� �ϴ� ��ġ ���� ��尡 ����ִ�
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = e;
	newNode->next = curr->next;
	curr->next = newNode;
}



// ����
// ����
// �˻�

//����Ʈ�� �ִ� ��ҵ��� ������ִ� �Լ�
void show(List* li) {
	Node* curr = li->head;
	while (curr->next != NULL) {
		printf("%d-> ", curr->data);
		curr = curr->next;
	}
}

int main() {
	List li;
	init(&li);

	insertFirst(&li, 10);
	insertFirst(&li, 20);



	return 0;
}