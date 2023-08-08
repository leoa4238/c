#include <stdio.h>
#include <stdlib.h>

typedef int ELEMENT;

typedef struct Node {
	ELEMENT data;
	struct Node * next;
}Node;

typedef struct SinglyLinkedList {
	Node* head; // 첫 번째 노드(요소)가 저장된 위치를 저장할 포인터변수
}List;

void init(List* li) {
	li->head = NULL;
}

// 추가
// 첫번째에 추가
void insertFirst(List* li, ELEMENT e) {
	// 노드 만들기
	Node* newNode = (Node*)malloc(sizeof(Node));// 노드 생성
	newNode->data = e;// 새롭게 만든 노드에 요소 추가
	newNode->next = li->head;// 새롭게 만든 노드의 다음 노드는 원래 첫번째 노드
	li->head = newNode;// 첫번째 노드는 새롭게 만든 노드
}

// 삽입
void insert(List* li, int idx, ELEMENT e) {
	// 내가 삽입 하고자 하는 위치의 이전 노드 찾기
	Node* curr = li->head;// curr에는 첫번째 노드가 들어있다
	for (int i = 0; i < idx-1; i++) {
		curr = curr->next;
	}
	// 반복이 끝나고 나면 curr에는 삽입하고자 하는 위치 이전 노드가 들어있다
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = e;
	newNode->next = curr->next;
	curr->next = newNode;
}



// 수정
// 삭제
// 검색

//리스트에 있는 요소들을 출력해주는 함수
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