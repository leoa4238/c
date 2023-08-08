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

	/*for (int i = 65; i <= 90; i++)
		printf(" %c ", i);
	puts("");*/

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
		  //for (int x = 0; x <= 2; x++) {
		  //	for (int y = 1; y <= 9; y++) {
		  //
		  //		for (int z = x * 3 + 1; z <= (x + 1) * 3; z++) {
		  //			printf("%d x %d = %d\t", z, y, z * y);
		  //		}
		  //		puts("");

		  //	}
		  //	puts("");
		  //}
		  /*
		   실습 1
		   별 찍기 - for문을 중첩하여 아래와 같은 결과를 출력

		   *
		   * *
		   * * *
		   * * * *
		   * * * * *
		   */
		   //풀이 1 
		   /* int i = 0, j = 0;

			for (i = 0; i < 5; i++)
			{
				for (j = 0; j <= i; j++)
					printf(" * ");
				printf("\n");
			}*/

			// 풀이 2
			/*for (int a = 0; a < 5; a++) {
				for (int b = 0; b <= a; b++) {
					printf("* ");
				}
				puts("");
		   }*/

		   /*
			while문
			 조건식을 적어서 조건이 참인동안 특정 코드 반복

			 while(조건식){
				 실행코드
			 }

			 do ~ while문
			 반복될 코드를 먼저 실행하고 조건식을 확인

			 do{
				 실행코드
			 } while (조건식);

		   */

		   /*int a = 1;

		   while (a < 6) {
			   printf("%d\n", a);
			   ++a;
		   }*/


		   /*int b = 5;

		   while (b) {
			   printf("%d\n", b);
			   --b;
		   }*/
		   /*int c = 1, d = 1;

		   while (d) {
			   printf("%d\n", c);
			   c++;
			   if (c > 9) {
				   d = 0;
			   }
		   }*/

		   /* int val = 0;
			while (val <= 0) {
				printf("양수 입력 : "); scanf_s("%d", &val);
			}

			printf("value : %d\n", val);*/

			/* int tf = 1, val;

			 while (tf) {
				 printf("양수 입력 : "); scanf_s("%d", &val);
				 if (val > 0)
					 tf = 0;
			 }
			 printf("value : %d\n", val);*/

			 /*
				실습 2
				10~ 20 범위의 숫자만 입력 받아 1부터 입력한 숫자까지의 합 출력
				(범위 밖의 숫자가 입력되면 숫자를 다시 입력 받도록 코드 작성)
			 */
			 //   int tf = 1, su, Sum = 0, a= 1;
				//while (tf) {
				   // printf("숫자 입력: ");  scanf_s("%d", &su);
				   // if (su >= 10 && su <= 20)
				   //	 tf = 0;
				//}

				//while (a <= su) {            // for (a; a<= su; a++)for문으로 바꿀시  
				   // Sum += a;               // Sum += a;
				   // a++;
			   // }

				//printf("1 ~ %d 숫자들의 합 : %d\n", su, Sum);

				/* do~ while문예시  */
				/*int data = 0, Sum = 0;

				do {
					printf("숫자 입력 (종료 : 0) >>"); scanf_s("%d", &data);
					Sum += data;
				} while (data != 0);

				printf(" 입력된 값들의 합 : %d\n", Sum);*/

				/*
				  중첩 while문
				  외부 while문이 한 번 동작하는 동안 내부 while문의 반복이 완료
				*/

	/*int line = 1;

	while (line <= 3) {
		printf("%d 라인 :", line);
		
		int no = 1;
		while(no <= 5){
		printf("%d ", no);
		no++;
	}
	puts(" ");
	line++;
    }*/
    
    /*
	  실습 3 
	  자판기 만들어보기
	  - 판매 품목 : 콜라(1000원), 커피(300원)
	  - 동작 순서
	    1. 금액 투입
	    2. 제품 선택 -> 금액이 충분한가 확인
		   2-1 금액이 충분하면 해당 금액 차감 제품 제공
		   2-2 금액이 충분하지 않으면 잔액 부족 메세지 출력
	       * 제품 선택시 콜라와 커피 외의 다른 선택지 입력 받으면
		   '없는  제품입니다' 출력

       3. 현재 잔액 출력 후 추가 구매 할 것인지 확인
	      3-1 추가 구매 한다면 2번으로 이동
		  3-2 추가 구매 하지 않으면 종료

		  *종료 시 반환 금액 출력
	*/
      
int line = 1; scanf_S("%d", &line);
int coke = 1000;
int coffee = 300;
printf("금액을 투입하세요\t", line);
while (line <= 300 && line <= 1000 ) {
	printf("%d 제품을 골라주세요 :", line);

	int no = 1;
	while (no <= 5) {
		printf("%d ", no);
		no++;
	}
	puts(" ");
	line++;



}