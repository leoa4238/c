#include <stdio.h>

int main() {

	/*
		���� ������
		 ���� ���� �� or ����� and ����, not ������ �ǹ��ϴ� ������

		 ||		: or ������ (shift + \)

			���ǽ�1 || ���ǽ�2

			���ǽ�1 �� �ϳ��� ���� ������ ����� ��
			���ǽ��� ���� �����̸� ����� ����

		 &&		: and ������
			���ǽ�1 && ���ǽ�2

			���ǽ��� ���� ���̸� ����� ��
			���ǽ� �� �ϳ��� ������ ������ ����� ����

		 !		: not ������
			!(���ǽ�)

			���ǽ��� ���̸� ����� ����
			���ǽ��� �����̸� ����� ��
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
		���� ������
		 �����͸� 1 ���� ��Ű�ų� ���� ��ų �� ���

		 ++		: 1 ����
		 --		: 1 ����

		 ���� �����ڴ� ���� ����� ���� �������� �з�

		 ++n	: 1 ���� �� �ٸ� ����
		 n++	: �ٸ� ���� �� 1 ����
		 --n	: 1 ���� �� �ٸ� ����
		 n--	: �ٸ� ���� �� 1 ����
	*/

	//int c = 5, d = 0;
	//printf("c : %d\n\n", c);

	//d = ++c * 2;	// c ���� 1 �� ���� �� * 2 ���� ����
	//printf("++c * 2 >> c : %d, d : %d\n", c, d);
	//d = c++ * 2;	// c ���� * 2 ���� ���� �� c ���� 1�� ���Ѵ�
	//printf("c++ * 2 >> c : %d, d : %d\n", c, d);
	//d = --c * 2;	// c ������ 1�� �� �� * 2 ���� ����
	//printf("--c * 2 >> c : %d, d : %d\n", c, d);
	//d = c-- * 2;	// c ���� * 2 ���� ���� �� c ������ 1�� ����
	//printf("c-- * 2 >> c : %d, d : %d\n", c, d);

	/*
		��Ʈ ������
		 bit : 2���� �� �ڸ�
		 ����Ǵ� ���ڸ� 2������ �����Ͽ� bit ������ ����

		 |		: bit or (shift + \)
		 &		: bit and
		 ^		: bit xor(xor : �� �������� ������ 0, �ٸ��� 1)
		 ~		: bit not(���� ������� ��� + CPU�� ���� ���� ���� �߻�)
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
		scanf() : �Է� �Լ�
		 ���α׷��� �����ϰ� �ִ� �߰��� �����͸� �Է��Ͽ�
		 ���α׷��� �Է��� �����͸� ����

		 scanf("���Ĺ���", �����ּ�);
		 scanf_s("���Ĺ���", �����ּ�, ���ũ��);

			* ��� ũ��� ���ڿ��� �Է� ���� �� ���(byte ����)
	*/

	/* ���� �Է� */

	//int su;
	//printf("���� �Է� : ");
	//scanf_s("%d", &su);	// int�� ������ 4byte �����̱� ������ ����
	//printf("su : %d\n", su);

	
	/* �Ǽ� �Է� */

	//float f1;		// float : 4byte �Ǽ�, 7�ڸ� ����
	//double f2;		// double : 8byte �Ǽ�, 15 ~ 16�ڸ� ����

	//printf("�Ǽ� �Է� : ");
	//scanf_s("%f", &f1);
	//printf("�Ǽ� �Է� : ");
	//scanf_s("%lf", &f2);	// double�� ������ �ڷḦ �Է¹��� �� %lf ���
	//printf("f1 : %f\n", f1);
	//printf("f2 : %f\n", f2);

	/* 1byte ���� �Է� */

	//char c1, c2;
	//printf("����1 �Է� : ");
	//scanf_s("%c", &c1);
	//printf("����1 : %c\n", c1);

	//while (getchar() != '\n');	// \n �ƴѰ͸� �Է� -> �Է� �� enter ����

	//printf("����2 �Է� : ");
	//c2 = getchar();		// getchar() �Լ��� ���� ���� �Է� �Լ�
	//printf("����2 : ");
	//putchar(c2);		// putchar() �Լ��� ���� ���� ��� �Լ�
	//puts("");		// printf("\n");

	/* ���ڿ� �Է� */
	// ���ڿ� �Է¿����� scanf_s �Լ� ����� �� ������ �տ� & ��ȣ ��� X

	//char st1[10], st2[10];

	//printf("���ڿ�1 �Է� : ");
	//scanf_s("%s", st1, sizeof(st1));
	//printf("st1 : %s\n", st1);

	//while (getchar() != '\n');

	//printf("���ڿ�2 �Է� : ");
	//gets_s(st2, sizeof(st2));
	//puts(st2);

	/*
		gets_s	: ���ڿ� �Է� �� ���
				  ������ \n �ڵ� ����

		puts_s	: ���ڿ� ��� �Լ�
				  �������� \n �ڵ� ���
	*/

	/* ���鸸 �Է� */

	//char sp[10];
	//printf("���鹮�� �Է�\n");
	//printf("�����̽��� ������ ���� �����ּ��� : ");
	//scanf_s("%[^\n]", sp, sizeof(sp));
	//printf("sp : test%sword\n", sp);

	/*
		�ǽ� 1
		�̸�, ����, �ּ�, ����, Ű�� �Է� �޾� ���� ������ ����ϴ� �ڵ�
		 1) �ּҿ��� ���Ⱑ ���Եǵ��� �Է�
		 2) ������ m/f �߿� �ϳ� �Է�
		 3) Ű�� �Ҽ������� �Է�
		 4) ��� ������ �� �Է� ���� �� �ѹ��� ���
	*/

	//int age;
	//double hei;
	//char name[10], addr[100], mf;

	//printf("�̸� �Է� : ");	gets_s(name, sizeof(name));
	//printf("���� �Է� : ");	scanf_s("%d", &age);
	//while (getchar() != '\n');
	//printf("�ּ� �Է� : "); gets_s(addr, sizeof(addr));
	//printf("���� �Է� : "); mf = getchar();
	//printf("Ű �Է� : "); scanf_s("%lf", &hei);

	//puts("\n * ȸ�� ���� *");
	//printf("�̸�\t: %s\n����\t: #include <stdio.h>

	int main() {

		/*
			���� ������
			 ���� ���� �� or ����� and ����, not ������ �ǹ��ϴ� ������

			 ||		: or ������ (shift + \)

				���ǽ�1 || ���ǽ�2

				���ǽ�1 �� �ϳ��� ���� ������ ����� ��
				���ǽ��� ���� �����̸� ����� ����

			 &&		: and ������
				���ǽ�1 && ���ǽ�2

				���ǽ��� ���� ���̸� ����� ��
				���ǽ� �� �ϳ��� ������ ������ ����� ����

			 !		: not ������
				!(���ǽ�)

				���ǽ��� ���̸� ����� ����
				���ǽ��� �����̸� ����� ��
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
			���� ������
			 �����͸� 1 ���� ��Ű�ų� ���� ��ų �� ���

			 ++		: 1 ����
			 --		: 1 ����

			 ���� �����ڴ� ���� ����� ���� �������� �з�

			 ++n	: 1 ���� �� �ٸ� ����
			 n++	: �ٸ� ���� �� 1 ����
			 --n	: 1 ���� �� �ٸ� ����
			 n--	: �ٸ� ���� �� 1 ����
		*/

		//int c = 5, d = 0;
		//printf("c : %d\n\n", c);

		//d = ++c * 2;	// c ���� 1 �� ���� �� * 2 ���� ����
		//printf("++c * 2 >> c : %d, d : %d\n", c, d);
		//d = c++ * 2;	// c ���� * 2 ���� ���� �� c ���� 1�� ���Ѵ�
		//printf("c++ * 2 >> c : %d, d : %d\n", c, d);
		//d = --c * 2;	// c ������ 1�� �� �� * 2 ���� ����
		//printf("--c * 2 >> c : %d, d : %d\n", c, d);
		//d = c-- * 2;	// c ���� * 2 ���� ���� �� c ������ 1�� ����
		//printf("c-- * 2 >> c : %d, d : %d\n", c, d);

		/*
			��Ʈ ������
			 bit : 2���� �� �ڸ�
			 ����Ǵ� ���ڸ� 2������ �����Ͽ� bit ������ ����

			 |		: bit or (shift + \)
			 &		: bit and
			 ^		: bit xor(xor : �� �������� ������ 0, �ٸ��� 1)
			 ~		: bit not(���� ������� ��� + CPU�� ���� ���� ���� �߻�)
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
			scanf() : �Է� �Լ�
			 ���α׷��� �����ϰ� �ִ� �߰��� �����͸� �Է��Ͽ�
			 ���α׷��� �Է��� �����͸� ����

			 scanf("���Ĺ���", �����ּ�);
			 scanf_s("���Ĺ���", �����ּ�, ���ũ��);

				* ��� ũ��� ���ڿ��� �Է� ���� �� ���(byte ����)
		*/

		/* ���� �Է� */

		//int su;
		//printf("���� �Է� : ");
		//scanf_s("%d", &su);	// int�� ������ 4byte �����̱� ������ ����
		//printf("su : %d\n", su);


		/* �Ǽ� �Է� */

		//float f1;		// float : 4byte �Ǽ�, 7�ڸ� ����
		//double f2;		// double : 8byte �Ǽ�, 15 ~ 16�ڸ� ����

		//printf("�Ǽ� �Է� : ");
		//scanf_s("%f", &f1);
		//printf("�Ǽ� �Է� : ");
		//scanf_s("%lf", &f2);	// double�� ������ �ڷḦ �Է¹��� �� %lf ���
		//printf("f1 : %f\n", f1);
		//printf("f2 : %f\n", f2);

		/* 1byte ���� �Է� */

		//char c1, c2;
		//printf("����1 �Է� : ");
		//scanf_s("%c", &c1);
		//printf("����1 : %c\n", c1);

		//while (getchar() != '\n');	// \n �ƴѰ͸� �Է� -> �Է� �� enter ����

		//printf("����2 �Է� : ");
		//c2 = getchar();		// getchar() �Լ��� ���� ���� �Է� �Լ�
		//printf("����2 : ");
		//putchar(c2);		// putchar() �Լ��� ���� ���� ��� �Լ�
		//puts("");		// printf("\n");

		/* ���ڿ� �Է� */
		// ���ڿ� �Է¿����� scanf_s �Լ� ����� �� ������ �տ� & ��ȣ ��� X

		//char st1[10], st2[10];

		//printf("���ڿ�1 �Է� : ");
		//scanf_s("%s", st1, sizeof(st1));
		//printf("st1 : %s\n", st1);

		//while (getchar() != '\n');

		//printf("���ڿ�2 �Է� : ");
		//gets_s(st2, sizeof(st2));
		//puts(st2);

		/*
			gets_s	: ���ڿ� �Է� �� ���
					  ������ \n �ڵ� ����

			puts_s	: ���ڿ� ��� �Լ�
					  �������� \n �ڵ� ���
		*/

		/* ���鸸 �Է� */

		//char sp[10];
		//printf("���鹮�� �Է�\n");
		//printf("�����̽��� ������ ���� �����ּ��� : ");
		//scanf_s("%[^\n]", sp, sizeof(sp));
		//printf("sp : test%sword\n", sp);

		/*
			�ǽ� 1
			�̸�, ����, �ּ�, ����, Ű�� �Է� �޾� ���� ������ ����ϴ� �ڵ�
			 1) �ּҿ��� ���Ⱑ ���Եǵ��� �Է�
			 2) ������ m/f �߿� �ϳ� �Է�
			 3) Ű�� �Ҽ������� �Է�
			 4) ��� ������ �� �Է� ���� �� �ѹ��� ���
		*/

		//int age;
		//double hei;
		//char name[10], addr[100], 
		//printf("�̸� �Է� : ");	gets_s(name, sizeof(name));
		//printf("���� �Է� : ");	scanf_s("%d", &age);
		//while (getchar() != '\n');
		//printf("�ּ� �Է� : "); gets_s(addr, sizeof(addr));
		//printf("���� �Է� : "); mf = getchar();
		//printf("Ű �Է� : "); scanf_s("%lf", &hei);

		//puts("\n * ȸ�� ���� *");
		//printf("�̸�\t: %s\n����\t: %d\n�ּ�\t: %s\n����\t: %c\nŰ\t: %.2fcm\n",
		// name, age, addr, mf, hei); %d\n�ּ�\t: %s\n����\t: %c\nŰ\t: %.2fcm\n",
	 // name, age, addr, mf, hei);
     
     
     
     } 
