#include <stdio.h>
#include <stdlib.h>

typedef int ELEMENT;

typedef struct CircularQueue {
	int front; // 현재 가장 먼저 들어온 데이터 위치를 가리킴
	int rear; // 데이터가 추가되어야 할 위치를 가리킴
	int max; // 최대 용량
	ELEMENT* que;//실질적 저장공간
}Que;

int init(Que* q, int size) {
	// 실질적으로 사용할 공간(size) + 여유공간(1)
	q->que = (ELEMENT*)malloc(sizeof(ELEMENT) * (size+1));
	if (q->que == NULL) {
		return 0;
	}

	q->front = 0;
	q->rear = 0;
	q->max = size;

	return 1;
}

// 큐가 비어있다면 1 아니라면 0이 return
int isEmpty(Que* q) {
	return q->front == q->rear;
}

// 큐가 가득 차있다면 1 아니라면 0이 return
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

//dequeue() : 큐에 들어있는 요소 중 가장 빨리 들어온 데이터 삭제, 삭제된요소 알려주기
//peek() : 큐에 들어있는 요소 중 삭제될 요소를 알려주는 함수
//clear() : 큐에 들어있는 요소를 모두 삭제시켜주는 함수

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