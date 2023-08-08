#include <stdio.h>
#define MAX 100

typedef int ELEMENT;

typedef struct ArrayList {
	int length; // ����� ������ ������ ����
	ELEMENT ar[MAX]; // ���������� ��ҵ��� ����� �迭
}List;

void init(List* li) {
	li->length = 0;
}

void show(List* li) {
	for (int i = 0; i < li->length; i++) {
		printf("[%d]", li->ar[i]);
	}

	printf("\n");
}

// �߰�
// �� �������� �߰�
int append(List* li, ELEMENT e) {
	if (li->length == MAX) {
		return 0;
	}
	li->ar[li->length++] = e;
	return 1;
}

// �߰��� �߰�(����)
// insert(�����Ʈ, ���°�ε���, ����)
int insert(List* li, int idx, ELEMENT e) {
	if (li->length == MAX) {
		return 0;
	}
	if (idx > li->length || idx < 0) {// �ε��� ��ȣ ��ȿ�� �˻�
		return 0;
	}

	// ������ �����ϴ� ��ҵ��� ������ �� ĭ�� �̵�
	//for (int i = 0; i < li->length - idx; i++) {
	//	li->ar[li->length - i] = li->ar[li->length - i - 1];
	//}
	for (int i = li->length; i > idx; i--) {
		li->ar[i] = li->ar[i - 1];
	}

	li->ar[idx] = e;
	li->length++;

	return 1;
}


// ����
int update(List* li, int idx, ELEMENT e) {
	if (idx >= li->length || idx < 0) {
		return 0;
	}

	li->ar[idx] = e;

	return 1;
}


// �ε��� ��ȣ�� ����
int removeByIdx(List* li, int idx) {
	if (idx >= li->length || idx < 0) {
		return 0;
	}

	for (int i = idx; i < li->length-1; i++) {
		li->ar[i] = li->ar[i + 1];
	}
	li->length--;

	return 1;
}

// �˻�
int select(List* li, int idx, ELEMENT* res) {
	if (idx >= li->length || idx < 0) {
		return 0;
	}

	*res = li->ar[idx];

	return 1;
}


int main() {
	List li;
	init(&li);

	append(&li, 10);
	append(&li, 20);
	append(&li, 30);
	show(&li);
	insert(&li, 3, 100);
	show(&li);

	update(&li, 1, 50);
	show(&li);

	removeByIdx(&li, 3);
	show(&li);

	int num;
	select(&li, 2, &num);
	printf("ã�� ��� : %d\n", num);

}