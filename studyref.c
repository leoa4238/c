#include <stdio.h>

int main() {

	/*
		논리 연산자
		 논리 연산 중 or 연산과 and 연산, not 연산을 의미하는 연산자

		 ||		: or 연산자 (shift + \)

			조건식1 || 조건식2

			조건식1 중 하나라도 참이 있으면 결과는 참
			조건식이 전부 거짓이면 결과는 거짓

		 &&		: and 연산자
			조건식1 && 조건식2

			조건식이 전부 참이면 결과는 참
			조건식 중 하나라도 거짓이 있으면 결과는 거짓

		 !		: not 연산자
			!(조건식)

			조건식이 참이면 결과는 거짓
			조건식이 거짓이면 결과는 참
	*/
	//int a = 10, b = 20;

	//printf("a != 10 || b < 20 : %d\n", a != 10 || b < 20);
	//printf("a != 10 || b <= 20 : %d\n", a != 10 || b <= 20);
	//printf("a == 10 || b < 20 : %d\n", a == 10 || b < 20);
	//printf("a == 10 || b <= 20 : %d\n", a == 10 || b <= 20);

	//printf("a != 10 && b < 20 : %d\n", a != 10 && b < 20);
	//printf("a != 10 && b <= 20 : %d\n", a != 10 && b <= 20);
	//printf("a == 10 && b < 20 : %d\n", a == 10 && b < 20);
	//printf("a == 10 && b <= 20 : %d\n", a == 10 && b <= 20);

	//printf("!(a != 10) : %d\n", !(a != 10));
	//printf("!(a == 10) : %d\n", !(a == 10));

	/*
		증감 연산자
		 데이터를 1 증가 시키거나 감소 시킬 때 사용

		 ++		: 1 증가
		 --		: 1 감소

		 증감 연산자는 전위 연산과 후위 연산으로 분류

		 ++n	: 1 증가 후 다른 연산
		 n++	: 다른 연산 후 1 증가
		 --n	: 1 감소 후 다른 연산
		 n--	: 다른 연산 후 1 감소
	*/

	//int c = 5, d = 0;
	//printf("c : %d\n\n", c);

	//d = ++c * 2;	// c 값에 1 을 더한 후 * 2 연산 진행
	//printf("++c * 2 >> c : %d, d : %d\n", c, d);
	//d = c++ * 2;	// c 값에 * 2 연산 진행 후 c 값에 1을 더한다
	//printf("c++ * 2 >> c : %d, d : %d\n", c, d);
	//d = --c * 2;	// c 값에서 1을 뺀 후 * 2 연산 진행
	//printf("--c * 2 >> c : %d, d : %d\n", c, d);
	//d = c-- * 2;	// c 값에 * 2 연산 진행 후 c 값에서 1을 뺀다
	//printf("c-- * 2 >> c : %d, d : %d\n", c, d);

	/*
		비트 연산자
		 bit : 2진수 한 자리
		 연산되는 숫자를 2진수로 변경하여 bit 단위로 연산

		 |		: bit or (shift + \)
		 &		: bit and
		 ^		: bit xor(xor : 두 논리값이 같으면 0, 다른면 1)
		 ~		: bit not(보수 개념까지 사용 + CPU에 따라 연산 차이 발생)
		 <<		: bit shift(left)
		 >>		: bit shift(right)
	*/

	//int e = 12;								// 1100
	//int f = 7;								// 0111

	//printf("%d | %d = %d\n", e, f, e | f);	// 1111 = 15
	//printf("%d & %d = %d\n", e, f, e & f);	// 0100 = 4
	//printf("%d ^ %d = %d\n", e, f, e ^ f);	// 1011 = 11

	//int g = 20;								// 10100

	//printf("~%d = %d\n", g, ~g);			// ??
	//printf("%d << 2 = %d\n", g, g << 2);	// 1010000 = 80
	//printf("%d >> 2 = %d\n", g, g >> 2);	// 101 = 5

	int tesasdfasd;
	/*
		scanf() : 입력 함수
		 프로그램이 동작하고 있는 중간에 데이터를 입력하여
		 프로그램에 입력한 데이터를 전달

		 scanf("서식문자", 변수주소);
		 scanf_s("서식문자", 변수주소, 허용크기);

			* 허용 크기는 문자열을 입력 받을 때 사용(byte 단위)
	*/

	/* 정수 입력 */

	//int su;
	//printf("숫자 입력 : ");
	//scanf_s("%d", &su);	// int형 변수는 4byte 고정이기 때문에 생략
	//printf("su : %d\n", su);

	
	/* 실수 입력 */

	//float f1;		// float : 4byte 실수, 7자리 까지
	//double f2;		// double : 8byte 실수, 15 ~ 16자리 까지

	//printf("실수 입력 : ");
	//scanf_s("%f", &f1);
	//printf("실수 입력 : ");
	//scanf_s("%lf", &f2);	// double형 변수에 자료를 입력받을 때 %lf 사용
	//printf("f1 : %f\n", f1);
	//printf("f2 : %f\n", f2);

	/* 1byte 문자 입력 */

	//char c1, c2;
	//printf("문자1 입력 : ");
	//scanf_s("%c", &c1);
	//printf("문자1 : %c\n", c1);

	//while (getchar() != '\n');	// \n 아닌것만 입력 -> 입력 후 enter 제거

	//printf("문자2 입력 : ");
	//c2 = getchar();		// getchar() 함수는 단일 문자 입력 함수
	//printf("문자2 : ");
	//putchar(c2);		// putchar() 함수는 단일 문자 출력 함수
	//puts("");		// printf("\n");

	/* 문자열 입력 */
	// 문자열 입력에서는 scanf_s 함수 사용할 때 변수명 앞에 & 기호 사용 X

	//char st1[10], st2[10];

	//printf("문자열1 입력 : ");
	//scanf_s("%s", st1, sizeof(st1));
	//printf("st1 : %s\n", st1);

	//while (getchar() != '\n');

	//printf("문자열2 입력 : ");
	//gets_s(st2, sizeof(st2));
	//puts(st2);

	/*
		gets_s	: 문자열 입력 시 사용
				  마지막 \n 자동 제거

		puts_s	: 문자열 출력 함수
				  마지막에 \n 자동 사용
	*/

	/* 공백만 입력 */

	//char sp[10];
	//printf("공백문자 입력\n");
	//printf("스페이스바 누르고 엔터 눌러주세요 : ");
	//scanf_s("%[^\n]", sp, sizeof(sp));
	//printf("sp : test%sword\n", sp);

	/*
		실습 1
		이름, 나이, 주소, 성별, 키를 입력 받아 개인 정보를 출력하는 코드
		 1) 주소에는 띄어쓰기가 포함되도록 입력
		 2) 성별은 m/f 중에 하나 입력
		 3) 키는 소수점까지 입력
		 4) 모든 정보를 다 입력 받은 후 한번에 출력
	*/

	//int age;
	//double hei;
	//char name[10], addr[100], mf;

	//printf("이름 입력 : ");	gets_s(name, sizeof(name));
	//printf("나이 입력 : ");	scanf_s("%d", &age);
	//while (getchar() != '\n');
	//printf("주소 입력 : "); gets_s(addr, sizeof(addr));
	//printf("성별 입력 : "); mf = getchar();
	//printf("키 입력 : "); scanf_s("%lf", &hei);

	//puts("\n * 회원 정보 *");
	//printf("이름\t: %s\n나이\t: #include <stdio.h>

	int main() {

		/*
			논리 연산자
			 논리 연산 중 or 연산과 and 연산, not 연산을 의미하는 연산자

			 ||		: or 연산자 (shift + \)

				조건식1 || 조건식2

				조건식1 중 하나라도 참이 있으면 결과는 참
				조건식이 전부 거짓이면 결과는 거짓

			 &&		: and 연산자
				조건식1 && 조건식2

				조건식이 전부 참이면 결과는 참
				조건식 중 하나라도 거짓이 있으면 결과는 거짓

			 !		: not 연산자
				!(조건식)

				조건식이 참이면 결과는 거짓
				조건식이 거짓이면 결과는 참
		*/
		//int a = 10, b = 20;

		//printf("a != 10 || b < 20 : %d\n", a != 10 || b < 20);
		//printf("a != 10 || b <= 20 : %d\n", a != 10 || b <= 20);
		//printf("a == 10 || b < 20 : %d\n", a == 10 || b < 20);
		//printf("a == 10 || b <= 20 : %d\n", a == 10 || b <= 20);

		//printf("a != 10 && b < 20 : %d\n", a != 10 && b < 20);
		//printf("a != 10 && b <= 20 : %d\n", a != 10 && b <= 20);
		//printf("a == 10 && b < 20 : %d\n", a == 10 && b < 20);
		//printf("a == 10 && b <= 20 : %d\n", a == 10 && b <= 20);

		//printf("!(a != 10) : %d\n", !(a != 10));
		//printf("!(a == 10) : %d\n", !(a == 10));

		/*
			증감 연산자
			 데이터를 1 증가 시키거나 감소 시킬 때 사용

			 ++		: 1 증가
			 --		: 1 감소

			 증감 연산자는 전위 연산과 후위 연산으로 분류

			 ++n	: 1 증가 후 다른 연산
			 n++	: 다른 연산 후 1 증가
			 --n	: 1 감소 후 다른 연산
			 n--	: 다른 연산 후 1 감소
		*/

		//int c = 5, d = 0;
		//printf("c : %d\n\n", c);

		//d = ++c * 2;	// c 값에 1 을 더한 후 * 2 연산 진행
		//printf("++c * 2 >> c : %d, d : %d\n", c, d);
		//d = c++ * 2;	// c 값에 * 2 연산 진행 후 c 값에 1을 더한다
		//printf("c++ * 2 >> c : %d, d : %d\n", c, d);
		//d = --c * 2;	// c 값에서 1을 뺀 후 * 2 연산 진행
		//printf("--c * 2 >> c : %d, d : %d\n", c, d);
		//d = c-- * 2;	// c 값에 * 2 연산 진행 후 c 값에서 1을 뺀다
		//printf("c-- * 2 >> c : %d, d : %d\n", c, d);

		/*
			비트 연산자
			 bit : 2진수 한 자리
			 연산되는 숫자를 2진수로 변경하여 bit 단위로 연산

			 |		: bit or (shift + \)
			 &		: bit and
			 ^		: bit xor(xor : 두 논리값이 같으면 0, 다른면 1)
			 ~		: bit not(보수 개념까지 사용 + CPU에 따라 연산 차이 발생)
			 <<		: bit shift(left)
			 >>		: bit shift(right)
		*/

		//int e = 12;								// 1100
		//int f = 7;								// 0111

		//printf("%d | %d = %d\n", e, f, e | f);	// 1111 = 15
		//printf("%d & %d = %d\n", e, f, e & f);	// 0100 = 4
		//printf("%d ^ %d = %d\n", e, f, e ^ f);	// 1011 = 11

		//int g = 20;								// 10100

		//printf("~%d = %d\n", g, ~g);			// ??
		//printf("%d << 2 = %d\n", g, g << 2);	// 1010000 = 80
		//printf("%d >> 2 = %d\n", g, g >> 2);	// 101 = 5

		int tesasdfasd;
		/*
			scanf() : 입력 함수
			 프로그램이 동작하고 있는 중간에 데이터를 입력하여
			 프로그램에 입력한 데이터를 전달

			 scanf("서식문자", 변수주소);
			 scanf_s("서식문자", 변수주소, 허용크기);

				* 허용 크기는 문자열을 입력 받을 때 사용(byte 단위)
		*/

		/* 정수 입력 */

		//int su;
		//printf("숫자 입력 : ");
		//scanf_s("%d", &su);	// int형 변수는 4byte 고정이기 때문에 생략
		//printf("su : %d\n", su);


		/* 실수 입력 */

		//float f1;		// float : 4byte 실수, 7자리 까지
		//double f2;		// double : 8byte 실수, 15 ~ 16자리 까지

		//printf("실수 입력 : ");
		//scanf_s("%f", &f1);
		//printf("실수 입력 : ");
		//scanf_s("%lf", &f2);	// double형 변수에 자료를 입력받을 때 %lf 사용
		//printf("f1 : %f\n", f1);
		//printf("f2 : %f\n", f2);

		/* 1byte 문자 입력 */

		//char c1, c2;
		//printf("문자1 입력 : ");
		//scanf_s("%c", &c1);
		//printf("문자1 : %c\n", c1);

		//while (getchar() != '\n');	// \n 아닌것만 입력 -> 입력 후 enter 제거

		//printf("문자2 입력 : ");
		//c2 = getchar();		// getchar() 함수는 단일 문자 입력 함수
		//printf("문자2 : ");
		//putchar(c2);		// putchar() 함수는 단일 문자 출력 함수
		//puts("");		// printf("\n");

		/* 문자열 입력 */
		// 문자열 입력에서는 scanf_s 함수 사용할 때 변수명 앞에 & 기호 사용 X

		//char st1[10], st2[10];

		//printf("문자열1 입력 : ");
		//scanf_s("%s", st1, sizeof(st1));
		//printf("st1 : %s\n", st1);

		//while (getchar() != '\n');

		//printf("문자열2 입력 : ");
		//gets_s(st2, sizeof(st2));
		//puts(st2);

		/*
			gets_s	: 문자열 입력 시 사용
					  마지막 \n 자동 제거

			puts_s	: 문자열 출력 함수
					  마지막에 \n 자동 사용
		*/

		/* 공백만 입력 */

		//char sp[10];
		//printf("공백문자 입력\n");
		//printf("스페이스바 누르고 엔터 눌러주세요 : ");
		//scanf_s("%[^\n]", sp, sizeof(sp));
		//printf("sp : test%sword\n", sp);

		/*
			실습 1
			이름, 나이, 주소, 성별, 키를 입력 받아 개인 정보를 출력하는 코드
			 1) 주소에는 띄어쓰기가 포함되도록 입력
			 2) 성별은 m/f 중에 하나 입력
			 3) 키는 소수점까지 입력
			 4) 모든 정보를 다 입력 받은 후 한번에 출력
		*/

		//int age;
		//double hei;
		//char name[10], addr[100], 
		//printf("이름 입력 : ");	gets_s(name, sizeof(name));
		//printf("나이 입력 : ");	scanf_s("%d", &age);
		//while (getchar() != '\n');
		//printf("주소 입력 : "); gets_s(addr, sizeof(addr));
		//printf("성별 입력 : "); mf = getchar();
		//printf("키 입력 : "); scanf_s("%lf", &hei);

		//puts("\n * 회원 정보 *");
		//printf("이름\t: %s\n나이\t: %d\n주소\t: %s\n성별\t: %c\n키\t: %.2fcm\n",
		// name, age, addr, mf, hei); %d\n주소\t: %s\n성별\t: %c\n키\t: %.2fcm\n",
	 // name, age, addr, mf, hei);
     
     
     
     } 

