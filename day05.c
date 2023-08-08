#include <stdio.h>

int main() {

	/*
		실습 1
		자신의 이름의 영문 이니셜 3개를 입력 받아 출력
		(이니셜 세 글자는 각각 다른 변수에 저장, 출력은 마지막에 한번에)
		  ex.  내 이니셜은 kkt 입니다
	*/

	//char i1, i2, i3;
	//printf("이니셜 입력 1 : ");	i1 = getchar();
	//while (getchar() != '\n');
	//printf("이니셜 입력 2 : "); i2 = getchar();
	//while (getchar() != '\n');
	//printf("이니셜 입력 3 : "); i3 = getchar();

	//printf("내 이니셜은 %c%c%c 입니다\n", i1, i2, i3);

	/*
		실습 2
		세 과목의 점수를 입력 받아 총점, 평균을 구하고 출력
		(평균은 소수점 아래 두번째 자리까지 출력)
	*/

	//int s1, s2, s3, Sum;
	//double avg;

	////printf("과목1 점수 : "); scanf_s("%d", &s1);
	////printf("과목2 점수 : "); scanf_s("%d", &s2);
	////printf("과목3 점수 : "); scanf_s("%d", &s3);

	//printf("점수 세 개 입력 : "); scanf_s("%d %d %d", &s1, &s2, &s3);

	//Sum = s1 + s2 + s3;
	//avg = (double)Sum / 3;		// avg = Sum / 3.0

	//puts("");
	//printf("총점 : %d점\n평균 : %.2f점\n", Sum, avg);

	/*
		제어문
		 코드의 흐름을 제어할 수 있는 함수

		 조건 제어문 : if, switch
		 반복 제어문 : for, while

		if문
		 조건문 - 조건식에 따라 코드의 실행 순서가 결정되는 제어문

		 if ( 조건식 ) {
			 조건식이 참이면 실행될 코드
		 }

		 조건식이 참이면 if 내부의 코드를 실행한 후 다음 코드 진행
		 조건식이 거짓이면 if문 전체를 건너뛰고 다음 코드를 진행

			* 모든 제어문은 기본적으로 중괄호를 이용하여 실행될 코드를 분류
			
			  실행될 코드가 한 줄이라면 중괄호를 사용하지 않아도
			  실행될 코드로 인식
	*/

	//int n1, n2;
	//printf("정수 두 개 입력 : "); scanf_s("%d %d", &n1, &n2);

	////if (n1 > n2) {
	////	printf("큰 수 : 첫번째 숫자 %d\n", n1);
	////}

	//if (n1 > n2)
	//	printf("큰 수 : 첫번째 숫자 %d\n", n1);

	//printf("다음 문장 진행\n");

	//int money;
	//printf("떡볶이 1인분 3천원\n");
	//printf("내가 갖고 있는 돈은? >>> "); scanf_s("%d", &money);

	//if (money >= 3000)
	//	printf("잘 먹었습니다\n");

	//printf("집에 가자\n");

	//int su1, su2;
	//printf("숫자 두 개 입력 : "); scanf_s("%d %d", &su1, &su2);

	//if (su1 > su2)
	//	printf("%d가 더 크다\n", su1);

	//if (su1 < su2)
	//	printf("%d가 더 크다\n", su2);
	int asdfasd;
	//int su;
	//printf("숫자 입력 : ");	scanf_s("%d", &su);

	//if (su % 2 == 0)
	//	printf("입력한 숫자 : %d -> 짝수\n", su);

	//if (su % 2 != 0)
	//	printf("입력한 숫자 : %d -> 홀수\n", su);

	/*
		논리 연산자
		 ||		: or 연산자 (shift + \)
				  조건들 중 하나라도 참이 있으면 결과로 참을 반환
				   > if 에서는 a 이거나 b 일때 참

		 &&		: and 연산자
				  조건들 전체가 참이면 결과로 참을 반환
				   > if 에서는 a 이면서 b 일때 참
	*/

	//int su;
	//printf("숫자 입력 : ");	scanf_s("%d", &su);

	//if (su > 0 && su % 2 == 0)
	//	printf("%d : 양수이면서 짝수\n", su);

	/*
		실습 3
		숫자를 입력 받아 5의 배수이면 출력하는 코드 작성
	*/

	//int su;
	//
	//printf("숫자 입력 : ");	scanf_s("%d", &su);

	//if (su % 5 == 0)
	//	printf("%d : 5의 배수\n", su);

	/*
		실습 4
		세 개의 숫자를 입력 받아 가장 큰 수를 출력하는 코드 작성
		 조건1. 세 개의 숫자는 1 이상의 값일 경우에만 크기 비교
		 조건2. 입력된 숫자는 각각 다른 변수에 저장
	*/

	//int s1, s2, s3;
	//printf("숫자 세 개 입력 : "); scanf_s("%d %d %d", &s1, &s2, &s3);

	//if (s1 >= 1 && s2 >= 1 && s3 >= 1 && s1 >= s2 && s1 >= s3)
	//	printf("%d : 가장 큰 숫자\n", s1);

	//if (s1 >= 1 && s2 >= 1 && s3 >= 1 && s2 > s1 && s2 >= s3)
	//	printf("%d : 가장 큰 숫자\n", s2);

	//if (s1 >= 1 && s2 >= 1 && s3 >= 1 && s3 > s1 && s3 > s2)
	//	printf("%d : 가장 큰 숫자\n", s3);

}