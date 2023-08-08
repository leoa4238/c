#include <stdio.h>
#include <stdlib.h>

typedef int ELEMENT;

typedef struct LinearQueue {
	int rear; // �����Ͱ� �� ��ġ �ε���, ����� ����
	int max; // ť�� �ִ� �뷮�� ������ ����
	ELEMENT* que; // �������� �����Ͱ� ����� �迭
}Que;

// init(Que* q, int size) : ť�� �������ִ� �Լ�
int init(Que* q, int size) {
	q->que = (ELEMENT*)malloc(sizeof(ELEMENT) * size);
	if (q->que == NULL) {
		return 0;
	} 
	q->rear = 0;
	q->max = size;
	return 1;
}

// enqueue() : ť�� ��Ҹ� �߰����ִ� �Լ�
int enqueue(Que* q, ELEMENT e) {
	if (q->rear == q->max) {// ���� �� �ִٸ�
		return 0;//����
	}
	q->que[q->rear++] = e;
	return 1;

}
// dequeue() : ť���� ��Ҹ� �������ִ� �Լ�
int dequeue(Que* q, ELEMENT* res) {
	if (q->rear == 0) {
		return 0;
	}

	*res = q->que[0];
	for (int i = 0; i < q->rear - 1 ; i++) {
		q->que[i] = q->que[i + 1];
	}
	q->rear--;

	return 1;
}
// clear() : ť�� ��� ��Ҹ� ����ִ� �Լ�

void show(Que* q) {
	printf("-----------\n");
	for (int i = 0; i < q->rear; i++) {
		printf(" %d |", q->que[i]);
	}
	printf("\n-----------\n");

}

int main() {
	Que q;
	init(&q, 4);

	enqueue(&q, 10);
	enqueue(&q, 20);
	enqueue(&q, 30);
	enqueue(&q, 40);
	enqueue(&q, 50);
	show(&q);
	ELEMENT num;
	dequeue(&q, &num);
	printf("������ ��� : %d\n", num);
	dequeue(&q, &num);
	printf("������ ��� : %d\n", num);
	show(&q);
	enqueue(&q, 100);
	show(&q);

	return 0;
}