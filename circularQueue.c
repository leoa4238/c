#include <stdio.h>
#include <stdlib.h>

typedef int ELEMENT;

typedef struct CircularQueue {
	int front; // ���� ���� ���� ���� ������ ��ġ�� ����Ŵ
	int rear; // �����Ͱ� �߰��Ǿ�� �� ��ġ�� ����Ŵ
	int max; // �ִ� �뷮
	ELEMENT* que;//������ �������
}Que;

int init(Que* q, int size) {
	// ���������� ����� ����(size) + ��������(1)
	q->que = (ELEMENT*)malloc(sizeof(ELEMENT) * (size+1));
	if (q->que == NULL) {
		return 0;
	}

	q->front = 0;
	q->rear = 0;
	q->max = size;

	return 1;
}

// ť�� ����ִٸ� 1 �ƴ϶�� 0�� return
int isEmpty(Que* q) {
	return q->front == q->rear;
}

// ť�� ���� ���ִٸ� 1 �ƴ϶�� 0�� return
int isFull(Que* q) {
	return (q->rear + 1) % (q->max + 1) == q->front;
}

int enqueue(Que* q, ELEMENT e) {
	if (isFull(q)) {
		return 0;
	}
	
	q->que[q->rear] = e;
	q->rear++;

	//q->rear = q->rear % (q->max + 1);
	q->rear %= q->max + 1;

	//if (q->rear == q->max + 1) {
	//	q->rear = 0;
	//}


	return 1;
}

//dequeue() : ť�� ����ִ� ��� �� ���� ���� ���� ������ ����, �����ȿ�� �˷��ֱ�
//peek() : ť�� ����ִ� ��� �� ������ ��Ҹ� �˷��ִ� �Լ�
//clear() : ť�� ����ִ� ��Ҹ� ��� ���������ִ� �Լ�

void show(Que* q) {
	printf("---------------\n");
	int idx = q->front;
	int cnt = q->rear > q->front ? 
		q->rear - q->front : 
		q->max+1 - (q->front - q->rear);
	for (int i = 0; i < cnt; i++) {
		printf("%d | ", q->que[idx]);
		idx = (idx + 1) % (q->max + 1);

	}
	printf("\n---------------\n");
}


int main() {
	Que q;
	init(&q, 4);
	enqueue(&q, 10);
	enqueue(&q, 20);
	enqueue(&q, 30);
	enqueue(&q, 40);
	enqueue(&q, 40);
	show(&q);

	return 0;
}