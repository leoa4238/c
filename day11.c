//#include <stdio.h>

//int main() {

	// day10 - �ǽ� 3

	//int money = 0, sel = 0, coke = 1000, coffee = 300, tf = 1;

	//printf("------------------------------\n");
	//printf("1. �ݶ� : %d , 2. Ŀ�� : %d\n", coke, coffee);
	//printf("------------------------------\n");
	//printf("�ݾ��� �����ϼ��� >> "); scanf_s("%d", &money);
	//puts("");

	//while (tf) {
	//	printf("���� �ܾ� : %d��\n", money);
	//	printf("1. �ݶ�(%d��) , 2. Ŀ��(%d��)\n���� > ", coke, coffee);
	//	scanf_s("%d", &sel);
	//	switch (sel) {
	//	case 1:
	//		if (money >= coke) {
	//			puts("�ݶ� ���ɴϴ�");
	//			money -= coke;
	//		}
	//		else
	//			puts("�ܾ��� �����մϴ�");
	//		break;
	//	case 2:
	//		if (money >= coffee) {
	//			puts("Ŀ�ǰ� ���ɴϴ�");
	//			money -= coffee;
	//		}
	//		else
	//			puts("�ܾ��� �����մϴ�");
	//		break;
	//	default:
	//		puts("���� ��ǰ�Դϴ�");
	//	}
	//	puts("");

	//	int retry = 0;

	//	do {
	//		printf("�߰� ���� ( 1 : yes , 2 : no)\n���� > ");
	//		scanf_s("%d", &retry);
	//	} while (retry < 1 || retry > 2);

	//	if (retry == 2){
	//		tf = 0;
	//		printf("�ܾ� %d���� ��ȯ�˴ϴ�\n", money);
	//	}
	//}

	/*
		continue
		 ���� ���� �ݺ������� ���� �ݺ����� �Ѿ�� �ڵ�
		 (���� �ڵ带 ���۽�Ű�� �ʰ� ���� �ݺ��� ����)

		break
		 switch, for, while���� ���(if���� ���� X)
		 break���� ���� ����� ��� ����
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
	//	printf("%d ȸ�� : ", out);
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
	//	puts("3 x 1 = ? �� �´� ����?");
	//	printf("1. 3\t2. 13\t3. 23\n4. 33\t5. 43\n���� > ");
	//	scanf_s("%d", &val);
	//	puts("");
	//	if (val == 1) {
	//		puts("�����Դϴ�");
	//		break;
	//	}
	//	puts("Ʋ�Ƚ��ϴ�");
	//}
	
	/*
		���� ������
		 if ~ else������ ������ ����ĸ� ���۵� ��
		 if ~ else�� ��ü�Ͽ� ��� ������ ������

			���� = (���ǽ�) ? �ڵ�1 : �ڵ�2;
		
			������ ���̸� ? ���� �ڵ�1 ����
			������ �����̸� : ���� �ڵ�2 ����
	*/

	//int data, abs = 0;
	//
	//printf("���� �Է� : "); scanf_s("%d", &data);

	////if (data > 0)
	////	abs = data;
	////else
	////	abs = data * -1;

	//abs = (data > 0) ? data : data * -1;

	//printf("���밪 : %d\n", abs);

//}

/*
	_sleep(����)
	Sleep(����)
	 Windows.h ����� ���Ե� �Լ�
	 �ڵ� ���࿡ ������ ������ ����
	 ���ڴ� 1�� 0.001��(1/1000��)�� �ǹ�
	 (ex.  _sleep(1000) -> ������ 1��)

	 _sleep(����)�� �ȵǴ� ��� Sleep(����) ���
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
		�ǽ� 1
		���� ���� ������ ���� ������ ������ �ϴ� �ڵ� �ۼ�
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
		�ǽ� 2
		���� ���� ������ ���� ������ ������ �ϴ� �ڵ� �ۼ�
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
		�ǽ� 3
		���� ���� ������ ���� ������ ������ �ϴ� �ڵ� �ۼ�
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