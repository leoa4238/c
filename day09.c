#include <stdio.h>

int main() {

	/*
		�ǽ� 1
		1 ~ 50������ ���� �� 3�� ����� 7�� ����� ����ϰ�
		3�� ������� �հ� 7�� ������� ���� ���� ���
		(��, 3�� 7�� ������� �� ���� ���)
	*/

	//int tSum = 0, sSum = 0;
	//for (int i = 1; i <= 50; i++) {
	//	if (i % 3 == 0 && i % 7 == 0) {
	//		printf("%d : 3�� 7�� �����\n", i);
	//		tSum += i;
	//		sSum += i;
	//	}
	//	else if (i % 3 == 0) {
	//		printf("%d : 3�� ���\n", i);
	//		tSum += i;
	//	}
	//	else if (i % 7 == 0) {
	//		printf("%d : 7�� ���\n", i);
	//		sSum += i;
	//	}
	//}
	//puts("");
	//printf("1 ~ 50 ������\n3����� �� : %d\n7����� �� : %d\n", tSum, sSum);

	/*
		�ǽ� 2
		for���� �̿��Ͽ� ���ĺ� �빮�� A ~ Z ������ ����ϴ� �ڵ� �ۼ�
		 - 1ȸ �ݺ��� ���ĺ� �ϳ� ���
		 - ASCII �ڵ� ���� �̿��Ͻø� �˴ϴ�(A = 65)
	*/

	//for (int i = 65; i <= 90; i++)
	//	printf("%c ", i);
	//puts("");

	/*
		�ǽ� 3
		���忡 ������ �ϴµ� ù ������ 1���� �Ա��ϰ�
		2�������� ���� ������� 2�踦 �Ա�
		(ex. 1���� - 1��, 2���� - 2��, 3���� - 4��, 4���� - 8�� ...)

		30�� ���� ������ �� �ݾ��� ���
	*/

	//int money = 0, save = 0;

	//for (int day = 1; day <= 30; day++) {
	//	if (day == 1)
	//		money = 1;
	//	else
	//		money *= 2;

	//	save += money;
	//	//printf("%d���� ����� : %d��, ���� : %d��\n", day, money, save);
	//	//�ʿ��ϴٸ� Ȯ�ο� �ڵ� ����Ͽ� �ݺ����� Ȯ��
	//}
	//
	//printf("30�� ���� ������ �� �ݾ��� %d�� �Դϴ�\n", save);

	/*
		��ø for��
		 for�� �ȿ� for�� �Է�(�ܺ� for���� ���� for������ �з�)
		 �ܺ� for���� �ڵ尡 �� �� ����Ǵ� ���� ���� for���� �ݺ��� ������
	*/

	//for (int i = 1; i <= 3; i++) {
	//	printf("�ܺ� for�� ���� i : %d\n", i);
	//	for (int j = 1; j <= 5; j++) {
	//		printf("���� for�� ���� j : %d\n", j);
	//	}
	//	puts("\n���� for�� �ݺ� �� -> �ܺ� for�� ���� ������ ����\n");
	//}

	//for (int a = 0; a <= 2; a++) {
	//	for (int b = 0; b <= 2; b++)
	//		printf("(a : %d\tb : %d)\n", a, b);
	//}

	/*
		�ǽ� 4
		��ø for���� �̿��Ͽ� �Ʒ��� ������ ��� ���
		(for�� �Ѱ��� ��� X)

		 - ��� ����
			1		2		3		4		5
			6		7		8		9		10
			11		12		13		14		15
			16		17		18		19		20
			21		22		23		24		25
	*/
	
	//for (int c = 0; c <= 4; c++) {
	//	for (int d = 1; d <= 5; d++)
	//		printf("%d\t", c * 5 + d);
	//	puts("");
	//}

	/*
		�ǽ� 5
		������ ��ü�� ���η� ����ϴ� �ڵ� �ۼ�
		1�� 2�� 3�� ... 9��
		
		ex)
			1 x 1 = 1	2 x 1 = 2	3 x 1 = 3	...  9 x 1 = 9
			1 x 2 = 2	2 x 2 = 4	3 x 2 = 6	...  9 x 2 = 18
			...
			1 x 9 = 9	2 x 9 = 18	3 x 9 = 27	...  9 x 9 = 81
	*/

	//for (int e = 1; e <= 9; e++) {
	//	for (int f = 1; f <= 9; f++) {
	//		printf("%d x %d = %-2d  ", f, e, f * e);
	//	}
	//	puts("");
	//}

	/*
		�ǽ� 6
		�������� 1�ܺ��� 9�ܱ��� 3�ܾ� ��� ���

		1��		2��		3��
		4��		5��		6��
		7��		8��		9��

		hint : for�� 3��ø �ʿ�
	*/

}