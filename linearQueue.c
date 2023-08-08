#include <stdio.h>
#include <stdlib.h>

typedef int ELEMENT;

typedef struct LinearQueue {
	int rear; // 데이터가 들어갈 위치 인덱스, 요소의 갯수
	int max; // 큐의 최대 용량을 저장할 공간
	ELEMENT* que; // 실질적에 데이터가 저장될 배열
}Que;

// init(Que* q, int size) : 큐를 생성해주는 함수
int init(Que* q, int size) {
	q->que = (ELEMENT*)malloc(sizeof(ELEMENT) * size);
	if (q->que == NULL) {
		return 0;
	} 
	q->rear = 0;
	q->max = size;
	return 1;
}

// enqueue() : 큐에 요소를 추가해주는 함수
int enqueue(Que* q, ELEMENT e) {
	if (q->rear == q->max) {// 가득 차 있다면
		return 0;//실패
	}
	q->que[q->rear++] = e;
	return 1;

}
// dequeue() : 큐에서 요소를 삭제해주는 함수
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
// clear() : 큐의 모든 요소를 비워주는 함수

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
	printf("삭제된 요소 : %d\n", num);
	dequeue(&q, &num);
	printf("삭제된 요소 : %d\n", num);
	show(&q);
	enqueue(&q, 100);
	show(&q);

	return 0;
}