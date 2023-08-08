#include <stdio.h>
int main() {

	/*
	   실습1
	   1~ 50까지의 숫자 중 3의 배수와 7의 배수를 출력하고
	   3의 배수들의 합과 7의 배수들의 합을 각각 출력
	   (단 3과 7의 공배수는 한번만 출력)
	*/
	

	//int tSum = 0, sSum = 0;
	//for (int i = 1; i <= 50; i++) {
	//	if (i % 3 == 0 && i % 7 == 0) {
	//		printf("%d : 3과  7의 공배수\n");
	//		tSum += i;
	//		sSum += i;
	//	}
	//	else if (i % 3 == 0) {
	//		printf("%d : 3의 배수\n", i);
	//		sSum += i;

	//	}
	//	else if (i % 7 == 0) {
	//		printf("%d : 7의 배수\n", i);
	//		sSum += i;

	//	}
	//}
	//puts("");
	//printf("1~ 50 범위의\n3배수의 합 : %d\n7의 배수의 합 : %d\n", tSum,sSum);

	/*
	실습2 
	for문을 이용하여 알파벳 대문자 A~Z까지를 출력하는 코드 작성
	-1회 반복에 알파벳 하나 출력
	-ASCII 코드 값을 이용하시면 됩니다.(A = 65)
	*/
	
	/*
	for (int i = 65; i <= 90; i++)
	printf(" %c ", i);
	puts("");
	*/
	
	/*
     실습 3 
	  통장에 저축을 하는데 첫 날에는 1원을 입금하고
	  2일차부터 전날 저축액의 2배를 입금
	  ex) 1일차 - 1원, 2일차는 - 2원, 3일차 - 4원, 4일차 - 8원...
	  30일 동안 저축한 총 금액을 출력
	*/
	//int money = 0, save = 0;

	//for (int day = 1; day <= 30; day++) {
	//	if (day == 1)
	//		money = 1;
	//	else
	//		money *= 2;

	//	save += money;
	//	printf("%d일차 저축액 : %d원, 누적 :%d원\n", day, money, save); //확인용 코드로 중간 점검할 것
	//}
	//printf(" 30일 동안 저축한 총 금액은 %d원 입니다\n", save);
	

	/*
	     중첩 for문
		 for문 안에 for문 입력(외부 for문과 내부 for문으로 분류)
		 외부 for문의 코드가 한번 실행되는 동안 내부 for문은 반복을 끝낸다
	*/

	/*for (int i = 1; i <= 3; i++) {
		printf("외부 for문 변수 i : %d\n", i);
		for (int j = 1; j <= 5; j++) {
			printf("내부 for문 변수 j : %d\n", j);
		}
		puts("\n내부 for문 반복 끝 -> 외부 for문 변수 증감식 적용\n");
	}*/

	/*for (int a = 0; a <= 2; a++) {
		for (int b = 0 ; b <=2; b++)
			printf("(a :%d\tb : %d)\n", a, b);
	}*/
    /*
	실습 4
	중첩 for문을 이용하여 아래와 동일한 결과 출력
	(for문 한개만 사용x)

	 - 출력 내용
	 1    2    3    4    5
	 6    7    8    9    10
     11	  12   13   14   15
	 16   17   18   19   20
	 21   22   23   24   25
	*/
	/*for (int c = 0; c <= 4; c++) {
	for (int d = 1; d <= 5; d++)
	printf("%d\t", c*5 + d);
	puts("");
	 }*/

	/*
	   실습 5  
	   구구단 전체를 가로로 출력하는 코드 작성
	   1단 2 단 3단 ... 9단
	   ex) 1 x 1 = 1 2 x 1 =2 3 x 1= 3
	*/
    /*int i, j;

   for (i = 1; i <= 9; i++) 
   {
	for (j = 1; j <= 9; j++) 
	{
		printf("%d x %d=%2d   ", j, i, (j * i));
	}
	printf("\n"); 
     }*/

//for (int e = 1; e <= 9; e++) {
//	for (int f = 1; f <= 9; f++) {
//		printf("%d x %d = %-2d ", f, e, f * e);
//	}
//	puts("");
//	}
    /*
	실습 6
	구구단을 1단부터 9단까지 3단씩 끊어서 출력
	1단    2단    3단
	4단    5단    6단
	7단    8단    9단

	hint : for 문 3중첩 필요

	*/
     int i, j, k;
	 for (i = 1; i <= 9; i++) {
		 for (int j = 1; j <= 9; j++) {
			 printf("%d x %d = %2d ", i, j, i * j);
		 }
		 puts("");
	 }

}