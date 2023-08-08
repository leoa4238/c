//#include <stdio.h>

//int main() {

	// day10 - 실습 3

	//int money = 0, sel = 0, coke = 1000, coffee = 300, tf = 1;

	//printf("------------------------------\n");
	//printf("1. 콜라 : %d , 2. 커피 : %d\n", coke, coffee);
	//printf("------------------------------\n");
	//printf("금액을 투입하세요 >> "); scanf_s("%d", &money);
	//puts("");

	//while (tf) {
	//	printf("현재 잔액 : %d원\n", money);
	//	printf("1. 콜라(%d원) , 2. 커피(%d원)\n선택 > ", coke, coffee);
	//	scanf_s("%d", &sel);
	//	switch (sel) {
	//	case 1:
	//		if (money >= coke) {
	//			puts("콜라가 나옵니다");
	//			money -= coke;
	//		}
	//		else
	//			puts("잔액이 부족합니다");
	//		break;
	//	case 2:
	//		if (money >= coffee) {
	//			puts("커피가 나옵니다");
	//			money -= coffee;
	//		}
	//		else
	//			puts("잔액이 부족합니다");
	//		break;
	//	default:
	//		puts("없는 제품입니다");
	//	}
	//	puts("");

	//	int retry = 0;

	//	do {
	//		printf("추가 구매 ( 1 : yes , 2 : no)\n선택 > ");
	//		scanf_s("%d", &retry);
	//	} while (retry < 1 || retry > 2);

	//	if (retry == 2){
	//		tf = 0;
	//		printf("잔액 %d원이 반환됩니다\n", money);
	//	}
	//}

	/*
		continue
		 진행 중인 반복문에서 다음 반복으로 넘어가는 코드
		 (남은 코드를 동작시키지 않고 다음 반복을 진행)

		break
		 switch, for, while에서 사용(if에는 적용 X)
		 break문에 가장 가까운 제어문 종료
	*/

	//int val = 0;
	//
	//while (val < 10) {
	//	val++;
	//	if (val % 7 == 0) {
	//		puts("jump!!");
	//		continue;
	//	}
	//	printf("%d\n", val);
	//}

	//for (int out = 1; out <= 3; out++) {
	//	printf("%d 회전 : ", out);
	//	for (int in = 1; in <= 10; in++) {
	//		printf("%d ", in);
	//		if (in == 5)
	//			break;
	//	}
	//	puts("");
	//}

	//int val = 0;
	//while (1) {
	//	puts("");
	//	puts("3 x 1 = ? 에 맞는 답은?");
	//	printf("1. 3\t2. 13\t3. 23\n4. 33\t5. 43\n선택 > ");
	//	scanf_s("%d", &val);
	//	puts("");
	//	if (val == 1) {
	//		puts("정답입니다");
	//		break;
	//	}
	//	puts("틀렸습니다");
	//}
	
	/*
		삼항 연산자
		 if ~ else문에서 간단한 연산식만 동작될 때
		 if ~ else를 대체하여 사용 가능한 연산자

			변수 = (조건식) ? 코드1 : 코드2;
		
			조건이 참이면 ? 뒤의 코드1 진행
			조건이 거짓이면 : 뒤의 코드2 진행
	*/

	//int data, abs = 0;
	//
	//printf("숫자 입력 : "); scanf_s("%d", &data);

	////if (data > 0)
	////	abs = data;
	////else
	////	abs = data * -1;

	//abs = (data > 0) ? data : data * -1;

	//printf("절대값 : %d\n", abs);

//}

/*
	_sleep(숫자)
	Sleep(숫자)
	 Windows.h 헤더에 포함된 함수
	 코드 진행에 딜레이 삽입이 가능
	 숫자는 1이 0.001초(1/1000초)를 의미
	 (ex.  _sleep(1000) -> 딜레이 1초)

	 _sleep(숫자)가 안되는 경우 Sleep(숫자) 사용
*/

#include <stdio.h>
#include <Windows.h>

int main() {

	//int i = 1;
	//while (1) {
	//	printf("%2d\r", i);
	//	_sleep(1000);
	//	if (i == 10) {
	//		puts("");
	//		break;
	//	}
	//	i++;
	//}

	//for (int star = 0; star < 10; star++) {
	//	putchar('*');
	//	Sleep(1000);
	//}
	//puts("");

	/*
		실습 1
		예제 파일 동작을 보고 동일한 동작을 하는 코드 작성
	*/

	//while (1) {
	//	for (int a = 0; a < 10; a++)
	//		putchar('*');
	//	printf("\r");
	//	_sleep(1000);
	//	for (int b = 0; b < 10; b++)
	//		putchar(' ');
	//	printf("\r");
	//	_sleep(1000);
	//}

	/*
		실습 2
		예제 파일 동작을 보고 동일한 동작을 하는 코드 작성
	*/

	//while (1) {
	//	for (int c = 0; c < 10; c++) {
	//		putchar('*');
	//		_sleep(100);
	//	}
	//	printf("\r");
	//	_sleep(1000);
	//	for (int d = 0; d < 10; d++)
	//		putchar(' ');
	//	printf("\r");
	//	_sleep(1000);
	//}

	/*
		실습 3
		예제 파일 동작을 보고 동일한 동작을 하는 코드 작성
	*/

	//while (1) {
	//	for (int e = 0; e < 10; e++) {
	//		putchar('*');
	//		_sleep(100);
	//	}
	//	_sleep(100);
	//	printf("\r");
	//	for (int f = 0; f < 10; f++) {
	//		putchar(' ');
	//		_sleep(100);
	//	}
	//	_sleep(100);
	//	printf("\r");
	//}

}