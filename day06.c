#include <stdio.h>

int main() {

	/*
		실습 1
		숫자 두 개를 입력 받아 두 수의 합을 구하고
		합이 2의 배수면서 3의 배수인지 확인하는 코드 작성
		(if문 만 사용)
		  * 결과 : 2의 배수이면서 3의 배수이다
				   2의 배수가 아니거나 3의 배수가 아니다
	*/

	//int s1, s2, Sum;
	//
	//printf("숫자 두 개 입력 : ");	scanf_s("%d %d", &s1, &s2);

	//Sum = s1 + s2;

	//if (Sum % 2 == 0 && Sum % 3 == 0)
	//	puts("두 수의 합은 2의 배수이면서 3의 배수이다");

	//if (Sum % 2 != 0 || Sum % 3 != 0)
	//	puts("두 수의 합은 2의 배수가 아니거나 3의 배수가 아니다");

	/*
		실습 2
		성별(m/f)을 입력 받아 m 인 경우에 "남성"
		f 인 경우에 "여성" 출력하는 코드 작성
	*/

	//char mf;

	//printf("성별(m/f) 입력 : ");	mf = getchar();
	//
	//if (mf == 'm' || mf == 'M')
	//	puts("남성");
	//if (mf == 'f' || mf == 'F')
	//	puts("여성");

	/*
		if ~ else문
		 조건이 참일때 동작할 코드와 조건이 거짓일때 동작할 코드를 따로 작성

		 if (조건식) {
			 조건이 참일때 동작할 코드
		 }
		 else {
			 조건이 거짓일때 동작할 코드
		 }

			* else 뒤에는 추가 조건을 작성할 수 없다
	*/

	//int su;
	//printf("숫자 입력 : ");	scanf_s("%d", &su);

	//if (su % 2 == 0) {
	//	puts("짝수");
	//}
	//else {
	//	puts("홀수");
	//}

	//int age;
	//printf("나이 입력 : ");	scanf_s("%d", &age);

	//if (age > 19)
	//	puts("당신은 성인 입니다");
	//else
	//	puts("당신은 미성년자 입니다");

	/*
		실습 3
		세 과목의 점수를 입력 받아 합격/불합격을 알려주는 코드 작성
		 * 합격 조건 : 각 과목의 점수 40점 이상, 평균 점수 60점 이상
	*/

	//int sc1, sc2, sc3, Sum;
	//double avg;

	//printf("점수 세 개 입력 : ");	scanf_s("%d %d %d", &sc1, &sc2, &sc3);
	//
	//Sum = sc1 + sc2 + sc3;

	//avg = (double)Sum / 3;

	//if (sc1 >= 40 && sc2 >= 40 && sc3 >= 40 && avg >= 60)
	//	puts("합격");
	//else
	//	puts("불합격");
	
	/*
		중첩 if문
		 if문 내부 코드로 if문 작성
		  > 특정 결과에 대해 재분류(세분화) 할 때 사용

		 if (조건식1) {
			 조건식1 참이면 동작
			 if (조건식2) {
				 조건식1이 참이면서 조건식2도 참이면 동작
			 }
			 else {
				 조건식1이 참이면서 조건식2가 거짓이면 동작
			 }
		 }
	*/

	//int a;
	//printf("숫자 입력 : ");	scanf_s("%d", &a);

	//if (a > 0) {
	//	if (a % 2 == 0)
	//		puts("양수이면서 짝수");
	//	else
	//		puts("양수이면서 홀수");
	//}
	//else {
	//	if (a < 0)
	//		puts("음수");
	//	else
	//		puts("0 이다");
	//}

	/*
		실습 4
		물품의 크기와 무게를 입력받고 사용해야 하는 cart를 알려주는 코드 작성

		크기	무게		cart
		S		50kg 미만	cart-A
		S		50kg 이상	cart-B
		L		50kg 미만	cart-C
		L		50kg 이상	cart-D
	*/
	
	//char size;
	//int weight;
	//
	//printf("물건의 크기(S/L) : ");	size = getchar();
	//printf("물건의 무게(KG) : ");	scanf_s("%d", &weight);

	//if (size == 'S' || size == 's') {
	//	if (weight < 50)
	//		puts("cart-A");
	//	else
	//		puts("cart-B");
	//}
	//else {
	//	if (weight < 50)
	//		puts("cart-C");
	//	else
	//		puts("cart-D");
	//}

	/*
		if ~ else if문
		 하나의 조건이 참이 아닐때 다른 조건을 다시 확인
		  > 여러 조건 중 참이 되는 조건을 차례대로 확인한다

			if (조건식1) {
				조건식1 참일때 동작
			}
			else if (조건식2) {
				위의 조건이 거짓이고 조건식2 참일때 동작
			}
			else if (조건식3) {
				위의 조건이 거짓이고 조건식3 참일때 동작
			}
			...
			else {
				모든 조건이 거짓일때 동작(선택적으로 사용)
			}
	*/

	//int a;
	//
	//printf("숫자 입력 : ");	scanf_s("%d", &a);

	//if (a > 20) {
	//	puts("a는 20보다 큰 수");
	//}
	//else if (a > 10) {
	//	puts("a는 10보다 큰 수");
	//}
	//else if (a > 0) {
	//	puts("a는 0보다 큰 수");
	//}

	/* 별개의 if문을 여러개 사용하면 의도하지 않은 동작이 될 수 있다 */
	
	//int a;
	//printf("숫자 입력 : ");	scanf_s("%d", &a);

	//if (a > 20)
	//	puts("a는 20보다 큰 수");
	//if (a > 10)
	//	puts("a는 10보다 큰 수");
	//if (a > 0)
	//	puts("a는 0보다 큰 수");

	/*
		if ~ else if문 사용 시 조건의 순서를 잘 생각해야 한다
	*/

	//int num;
	//printf("숫자 입력 : ");	scanf_s("%d", &num);
	//printf("num = %d\n", num);

	//if (num % 3 == 0)
	//	puts("num은 3의 배수");
	//else if (num % 5 == 0)
	//	puts("num은 5의 배수");
	//else if (num % 3 == 0 && num % 5 == 0)	// 이 조건에 도달할 수 없다
	//	puts("num은 3의 배수이면서 5의 배수");
	//else
	//	puts("num은 3의 배수도 아니고 5의 배수도 아니다");

}