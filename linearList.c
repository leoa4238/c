#include <stdio.h>
#define MAX 100

typedef int ELEMENT;

typedef struct ArrayList {
	int length; // 요소의 갯수를 저장할 변수
	ELEMENT ar[MAX]; // 실질적으로 요소들이 저장될 배열
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

// 추가
// 맨 마지막에 추가
int append(List* li, ELEMENT e) {
	if (li->length == MAX) {
		return 0;
	}
	li->ar[li->length++] = e;
	return 1;
}

// 중간에 추가(삽입)
// insert(어떤리스트, 몇번째인덱스, 어떤요소)
int insert(List* li, int idx, ELEMENT e) {
	if (li->length == MAX) {
		return 0;
	}
	if (idx > li->length || idx < 0) {// 인덱스 번호 유효성 검사
		return 0;
	}

	// 기존에 존재하는 요소들을 옆으로 한 칸씩 이동
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


// 수정
int update(List* li, int idx, ELEMENT e) {
	if (idx >= li->length || idx < 0) {
		return 0;
	}

	li->ar[idx] = e;

	return 1;
}


// 인덱스 번호로 삭제
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

// 검색
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
	printf("찾은 결과 : %d\n", num);

}