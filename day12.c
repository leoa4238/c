#include <stdio.h>
#include <Windows.h>

int main() {

	/*
		실습 1
		예제 파일 동작을 보고 동일한 동작을 하는 코드 작성
	*/

	// 실습 1 - 풀이 1
	//while (1) {
	//	printf("* * * * * * * * * * ");
	//	_sleep(1000);
	//	printf("\r");
	//	printf(" * * * * * * * * * *");
	//	_sleep(1000);
	//	printf("\r");
	//}
	 
	// 실습 1 - 풀이 2
	//while (1) {
	//	for (int c = 0; c < 20; c++) {
	//		if (c % 2 == 0)
	//			putchar('*');
	//		else
	//			putchar(' ');
	//	}
	//	_sleep(1000);
	//	printf("\r");
	//	for (int d = 0; d < 20; d++) {
	//		if (d % 2 == 0)
	//			putchar(' ');
	//		else
	//			putchar('*');
	//	}
	//	_sleep(1000);
	//	printf("\r");
	//}

	/*
		배열(array)

		 한 번의 선언으로 같은 자료형의 데이터 공간을 메모리에 연속적으로 생성
		 변수와 같은 데이터를 담는 공간을 여러개 묶어놓은 형태

		배열 선언(생성)

			자료형 배열이름[크기(= 공간 개수)]

			 ex>  char i[10];	// char형 데이터가 들어갈 공간 10칸 묶음 생성

		배열의 요소(= 배열 내부 데이터) 사용

		 index 번호를 이용하여 내부의 특정 데이터를 찾아간다

			배열이름[index]

		   * index : 배열 내부의 데이터를 찾아갈 수 있게 해주는 참조 숫자
					 모든 배열의 index는 0번 부터 시작

			ex>
				int ar[3];

				ar							<- 배열 이름
					|  ?  |  ?  |  ?  |
					 [0]   [1]   [2]		<- index 번호

		배열의 크기

		 배열의 크기는 자료형의 byte  *  데이터 공간의 개수(칸 수)

			ex>
				int ar[3];		-> int : 4byte * [3] = 12byte
	*/

	//int ar1[3];

	//ar1[0] = 10;
	//ar1[1] = 20;
	//ar1[2] = 30;
	////ar1[3] = 40;		// error code : 3칸짜리 배열 -> 0 ~ 2번 index 사용

	//printf("ar1[0] : %d\nar1[1] : %d\nar1[2] : %d\n", ar1[0], ar1[1], ar1[2]);

	/*
		ar1
			|  10  |  20  |  30  |
			 [0]	[1]	   [2]
	*/

	//int ar2[3] = { 1,2,3 };		// 배열 선언과 동시에 초기화

	////ar2 = { 4,5,6 };		// error code : 이미 선언된 배열에 여러 데이터
	//						//				일괄적으로 입력 불가능

	//printf("ar2[0] : %d\nar2[1] : %d\nar2[2] : %d\n", ar2[0], ar2[1], ar2[2]);
	
	/*
		배열 선언 시 칸 개수를 비우면 데이터의 개수만큼 칸 생성
	*/

	//int ar3[] = { 1,2,3,4 };

	//printf("ar3 size : %d byte\n", sizeof(ar3));
	//printf("ar3 공간 개수 : %d 개\n", sizeof(ar3) / sizeof(int));

	//printf("ar3[0] : %d\nar3[1] : %d\n", ar3[0], ar3[1]);
	//printf("ar3[2] : %d\nar3[2] : %d\n", ar3[2], ar3[3]);

	/*
		배열 선언과 동시에 초기화를 할 때
		공간의 개수보다 적은 개수의 데이터를 넣으면
		앞쪽 공간부터 데이터를 채우고 남은 공간은 0을 채운다
	*/

	int ar4[3] = { 1 };

	puts("");
	printf("ar4 size : %d byte\n", sizeof(ar4));
	puts("");
	printf("ar4[0] : %d\nar4[1] : %d\nar4[2] : %d\n", ar4[0], ar4[1], ar4[2]);

	int ar5[3] = { 0 };		// 모든 칸을 0으로 초기화

	printf("ar5[0] : %d\nar5[1] : %d\nar5[2] : %d\n", ar5[0], ar5[1], ar5[2]);

	/*
		배열의 칸 수는 무조건 상수값으로만 입력
		(아래의 ar6은 error code)
	*/

	//int size = 3;
	//int ar6[size] = { 0 };

	//int ar7[3] = { 0 };

	//ar7[0] = 11;
	//ar7[1] = 22;

	//int idx = 2;
	//ar7[idx] = 33;		// 배열 선언 후 index 번호는 변수로 대체 가능

	//printf("ar7[%d] : %d\n", 0, ar7[0]);
	//printf("ar7[%d] : %d\n", 1, ar7[1]);
	//printf("ar7[%d] : %d\n", idx, ar7[idx]);
	//puts("");
	//printf("idx 주소 : %p\n", &idx);	// 변수는 주소 표현을 위해 & 기호 사용
	//printf("ar7 시작 주소 : %p\n", ar7);// 배열은 & 기호 없이 주소 표현 가능

	/*
		반복문을 이용한 배열의 전체 요소 접근
	*/

	//int ar8[3] = { 10,20,30 };
	//int ar8cnt = sizeof(ar8) / sizeof(int);

	//for (int i = 0; i < ar8cnt; i++)
	//	printf("ar8[%d] : %d\n", i, ar8[i]);
	
	/*
		실습 2
		배열 요소의 합 구하기
		 1. ar 이라는 이름의 5칸 짜리 배열을 2, 7, 5, 1, 8 순으로
		    데이터를 넣어서 선언과 동시에 초기화

		 2. 5개 요소의 합을 구하여 출력하는 코드 작성
	*/

	//int ar[] = { 2,7,5,1,8 }, Sum = 0;
	//int arCnt = sizeof(ar) / sizeof(int);

	//printf("ar : ");
	//for (int e = 0; e < arCnt; e++) {
	//	Sum += ar[e];
	//	printf("%d ", ar[e]);
	//}
	//puts("");

	//printf("ar 배열 내부 데이터들의 합 : %d\n", Sum);

	/*
		실습 3
		ar 배열에서 3 ~ 8 범위의 데이터 출력 + 데이터의 개수 출력
	*/

	//int ar[] = { 8,9,5,1,7,4,2 };
	//int arCnt = sizeof(ar) / sizeof(int), dataCnt = 0;

	//for (int f = 0; f < arCnt; f++) {
	//	if (ar[f] >= 3 && ar[f] <= 8) {
	//		printf("ar[%d] : %d\n", f, ar[f]);
	//		dataCnt++;
	//	}
	//}

	//printf("\n3 ~ 8 범위의 숫자 개수 : %d개\n", dataCnt);

	/*
		실습 4
		ar 배열에서 가장 큰 수를 찾아서 출력
	*/

	int ar[] = { 3,7,2,11,9,5,10 };
}