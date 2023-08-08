#include<stdio.h>

int main() {

   /*
   자료형 변환(형변환)
   1. 대입식을 이용한 형변환
     대입 연산자(=)을 이용한 자료형 변환
     대입 연산자 오른쪽의 데이터가 왼쪽의 자료형으로 자동 형변환되어 대입
     단, 데이터의 손실이 발생할 수 있다
   
   2. 연산자를 이용한 형변환
   서로 다른 자료형 간의 연산을 진행할 때 저장 공간(메모리)의 크기가 
   큰 데이터의 자료형으로 일괄적으로 변환
   (ex. int형과 double형 자료의 연산)

   3. 강제 형변환
    사용하려는 데이터의 왼쪽에 (자료형) 을 입력하여
    그 순산에만 () 내부에 작성한 자료형으로 형변환 되어 실행
   */
    // 대입식을 이용한 형변환
   /* int a;
    double b = 2.5;
    a = b;

    printf("a : %d\n", a);*/ // 오른쪽으로 2.5가 넘어가면서 소수점 자리가 탈락함 
    
    // 연산식을 이용한 형변환
    //printf("1. 5/2 = %d\n", 5 / 2);  // int / int = int
    //printf("2. 5/2.0 = %.1f\n", 5 / 2.0); //int / double = double (int=4byte double= 8byte)
    //printf("3. 5.0/2 = %.1f\n", 5.0 / 2);//double / int  = double
    
    //강제 형변환
    /*int a = 5, b = 2;*/
    //printf("1. 5/2 = %d\n", a / b);
    //printf("2. 5/(double)2 = %.1f\n", a / (double)b);
    //printf("3. (double)5 / 2 = %.1f\n", (double)a / b);

    /*
         서식 문자의 확장 형식
         1. 서식문자 사이(%기호와 문자 사이)에 정수 입력시 
            데이터 출력 시 정수 만큼의 칸을 만들어서 데이터 출력
            정수값이 양수라면 오른쪽 정렬, 음수라면 왼쪽 정렬
         2. 서식문자 사이(%기호와 문자 사이)에 실수 입력시
            정수 값은 기존과 동일하게 칸 수 지정
            실수값은 소주점 아래 몇 자리까지 출력할 것인지 지정
            (ex. %10.3f   >> 10칸 공간에서 데이터는 오른쪽 정렬
                             소수점 아래 셋째자리까지 출력)
    */
    //int a = 10;
    //double b = 1.111;
    //char c[10] = "test";

    //printf("a :%5d\nb :%10.3f\n", a, b);
    //printf("c :%-10s,%10s\n", c, c);

   /* double a = 1.123, b = 4.456, c = 7.789;
    printf("a :%10.3f\nb :%-5.2ftest\nc :%.1f\n", a, b, c);*/

   /* int a = 190000, b = 19000;
    printf("금  액\t%10d원\n부가세\t%10d원\n합  계\t%10d원\n", a, b, a + b);*/

    /*
     아스키(ASCII)코드
     여러 장치/ 윤영체제에서 동일한 문자를 동일한 2진수로 
     처리할 수 있도록 만들어놓은 기준값
     
     아스키 코드를 사용하여 단일 문자를 %d 서식문자로 출력가능
     + 단일 문자에 +,- 연산이 가능 소문자 a와 대문자a 10진수값이 32차이남
    */
      
   /* char ca = 'A';
    printf("ca : %c, %d\n", ca, ca);*/

    /*int va = 65;
    printf("va : %d, %c\n", va, va);

    char na = va + 32;
    printf("na : %c, %d\n", na, na);

    int sa = na + 1;
    printf("sa : %d, %c\n", sa, sa);*/

    /*char enter = '\n';
    printf("\\n : %c, %d\n", enter, enter)*/

    /*
       sizeof()
       메모리에 할당된 데이터 공간의 크기를 계산해주는 함수
       결과는 byte 단위로 반환
    */

    /*int a = 5;
    double b = 2.0;
    printf("5 / 2.0 = %.1f\n", a / b);
    printf("a : %d\nb : %d\na / b : %d\n", sizeof(a), sizeof(b), sizeof(a / b));*/

    /*
       변수의 주소 사용
       변수명 앞에 & 기호를 붙이면 해당 변수의 메모리 주소(위치)를 사용
       주소값을 출력할 때는 %p 서식 문자 사용
    */

    /*int a = 10;
    printf("a : %d\n", a);
    printf("a 주소 : %p\n", &a);*/

    /*
      대입 연산자
      =         -> 기호 오른쪽의 내용을 왼쪽에 대입
      
      산슬 연산자
       +: 덧셈     -> 왼쪽 값에서 오른쪽 값을 더한다
       -: 뺄셈     -> 왼쪽 값에서 오른쪽 값을 뺀다
       *: 곱셈     -> 왼쪽 값에 오른쪽 값으로 곱한다.
       /:나눗셈    -> 왼쪽 값을 오른쪽 값으로 나눈다
       %:나머지 값 -> 왼쪽을 오른쪽으로 나누어 나오는 나머지 값 
    
    */
    /*int a = 10, b = 3;*/
    
    /*printf("%d +%d = %d\n", a, b, a + b);
    printf("%d -%d = %d\n", a, b, a - b);
    printf("%d *%d = %d\n", a, b, a* b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);*/// %% : 기호 출력

    /*
       복합 대입 연산자
       산술 연산자 + 대입 연산자
       변수에 특정 데이터를 연산하여 결과를 다시 변수에 넣을 때 사용
       연산자 왼쪽에는 항상 변수가 있어야 함
    */
     
    int c, d;
    c = d = 5;      //여러 변수에 동일한 데이터를 입력할 때 사용

    //printf("c += 1 : %d\n", c += 1);  // c = c + 1
    //printf("c -= 1 : %d\n", c -= 1);  // c = c - 1
    //printf("c *= d : %d\n", c *= d);  // c = c * d
    //printf("c /= d : %d\n", c /= d);  // c = c / d
    //printf("c %%= d : %d\n", c%=d);  // c = c % d

    //1 += c;       //error code -복합 대입 연산자 왼쪽에는 상수값 사용 X


    /*
        관계(비교) 연산자
        데이터를 비교하는 연산자
        연산 결과가 맞으면 1, 틀리면 0으로 표현
        (0 거짓, 0 이외의 값 : 참)
    <      :왼쪽보다 오른쪽이 크다
    >      :왼쪽보다 오른쪽이 작다
    <=     :왼쪽보다 오른쪽이 크거나 같다
    >=     :왼쪽보다 오른쪽이 작거나 같다
    ==     :왼쪽과 오른쪽이 같다
    !=     :왼쪽과 오른쪽이 서로 다르다
        
    */
    
    /*double e = 3.0, f = 3.1;

    printf("e > f : %d\n", e > f);
    printf("e < f : %d\n", e < f);
    printf("e >= f : %d\n", e >= f);
    printf("e <= f : %d\n", e <= f);
    printf("e == f : %d\n", e == f);
    printf("e != f : %d\n", e != f);*/

    /*
       실습 1 
       a = 7, b = 5 변수 선언 후 연산 결과를 변수에 저장하여 출력
       (+,-,*,/)
    */
    //풀이1
    int a = 7; int b = 5;
    printf("%d +%d = %d\n", a, b, a + b);
    printf("%d -%d = %d\n", a, b, a - b);
    printf("%d *%d = %d\n", a, b, a* b);
    printf("%d / %d = %d\n", a, b, a / b);

   //풀이2
    int res1 = a + b, res2 = a - b, res3 = a * b, res4 = a / b;
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n", a, b, res1, a, b, res2, a, b, res3, a, b, res4);
    
    
}   


 