#include <stdio.h>

/*

  int a = 100;
  int b = 200;
  int sum = a + b;
  sum = sum + 10;
  printf("%d\n", sum);
  sum = sum + 10;
  printf("%d\n", sum);
  sum = sum + 10;
  printf("%d\n", sum);
  sum = sum + 10;
  printf("%d\n", sum);
  sum = sum + 10;
  printf("%d\n", sum);


*/
/*  int a = 10;
  int b = 11;
  int c = 12;
  int d = 13;
  int e = 14;
  int f = 15;
  int g = 16;
  int h = 17;
  int i = 18;
  int j = 19;
  float k = 20.1;
  int l = 21;
  int m = 22;
  float n = 23.1;
  int o = 24;
  int p = 25;
  int q = 26;
  float r = 27.1;


  int a2 = 28;
  int b2 = 29;
  int c2 = 30;
  float d2 = 31.1;
  int e2 = 32;
  int f2 = 33;
  float g2 = 34.1;
  int h2 = 35;
  int i2 = 36;
  int j2 = 37;
  float k2 = 38.1;
  float l2 = 39.1;
  int m2 = 40;
  int n2 = 41;
  int o2 = 42;
  int p2 = 43;
  int q2 = 44;
  int r2 = 45;

  int a3 = 46;
  float b3 = 47.1;
  float c3 = 48.1;
  int d3 = 49;
  float e3 = 50.1;
  int f3 = 51;
  int g3 = 52;
  int h3 = 53;
  int i3 = 54;
  int j3 = 55;

  float sum = a + b + c + d + e + f + g + h + i + j + k + l + m + n + o + p + q + r + a2 + b2 + c2 + d2 + e2 + f2 + g2 + h2 + i2 + j2 + k2 + l2 + m2 + n2 + o2 + p2 + q2 + r2 + a3 + b3 + c3 + d3 + e3 + f3 + g3 + h3 + i3 + j3;

  printf("%d + %d + %d + %d + %d + %d + %d + %d + %d + %d + %.1f +  %d + %d + %.1f + %d + %d + %d + %.1f + %d + %d + %d + %.1f +  %d + %d + %.1f + %d + %d + %d + %.1f +%.1f + %d +  %d + %d + %d + %d + %d + %d + %.1f + %.1f +  %d + %.1f +  %d + %d + %d + %d + %d = %.1f", a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,a2,b2,c2,d2,e2,f2,g2,h2,i2,j2,k2,l2,m2,n2,o2,p2,q2,r2,a3,b3,c3,d3,e3,f3,g3,h3,i3,j3,sum);
*/

/*
//�մ� �ο�, �� ����
	int customer = 10;
	int totalBudget = 100000;

	//���� ����Ʈ
	char food1[7] = "������";
	int price1 = 6470000;

	//Ƣ��
	char food2[9] = "����Ƣ��";
	int price2 = 6988000;

	char food3[10] = "��� Ƣ��";
	int price3 = 666777;

	char food4[12] = "�踻�� Ƣ��";
	int price4 = 8900000;

	char food5[10] = "��� Ƣ��";
	int price5 = 70000;

	//��Ÿ
	char food6[5] = "����";
	int price6 = 438000;

	char food7[5] = "�쵿";
	int price7 = 660000;

	char food8[5] = "����";
	int price8 = 1480000;

	//���
	char food9[7] = "���";
	int price9 = 728000;

	char food10[12] = "ġ�� ���";
	int price10 = 889000;

	char food11[12] = "��ġ ���";
	int price11 = 1498000;

	//���
	char food12[5] = "���";
	int price12 = 6470000;

	char food13[10] = "��ġ ���";
	int price13 = 1690000;

	char food14[10] = "��ġ ���";
	int price14 = 1275800;

	//Ŀ��
	char food15[18] = "���̽� �Ƹ޸�ī��";
	int price15 = 968000;

	char food16[9] = "ī���";
	int price16 = 178000;

	char food17[16] = "ī��� �����ƶ�";
	int price17 = 9900;

	char food18[10] = "�ͽ� Ŀ��";
	int price18 = 999999;

	//������
	char food19[7] = "������";
	int price19 = 690000;

	char food20[12] = "��ġ ������";
	int price20 = 5800080;

	char food21[12] = "��� ������";
	int price21 = 4385000;

	//��Ÿ
	char food22[7] = "�����";
	int price22 = 190000;

	char food23[5] = "����";
	int price23 = 150000;


	char prepoE[3] = "��";
	char prepoN[3] = "��";
	char prepoL[3] = "��";
	char prepoR[3] = "��";
	char prepoI[3] = "��";
	char prepoD[3] = "��";
	char prepoG[3] = "��";
	char prepoW[3] = "��";
	char prepoC[5] = "��ġ";

	char string1[7] = "��ġ��";
	char string2[7] = "���ڶ�";
	char string3[7] = "���߸�";

	char dot = '.';
	char colon = ',';


	printf("�� %d���� ����� �� �Բ� �������� �����Ͽ���%c\n", customer, dot);
	printf("�� %d���� ���� �ݾ��� %d���̴�%c\n\n", customer, totalBudget, dot);

	printf("%s%s %d%s %s%c\n",food1,prepoN, price1,prepoW, prepoC, colon);
	//Ƣ��
	printf("%s%s %d%s %s%c\n", food2, prepoE, price2, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food3, prepoE, price3, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food4, prepoE, price4, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food5, prepoE, price5, prepoW, prepoC, colon);
	//��Ÿ
	printf("%s%s %d%s %s%c\n", food6, prepoN, price6, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food7, prepoE, price7, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food8, prepoE, price8, prepoW, prepoC, colon);
	//���
	printf("%s%s %d%s %s%c\n", food9, prepoN, price9, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food10, prepoN, price10, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food11, prepoN, price11, prepoW, prepoC, colon);
	//���
	printf("%s%s %d%s %s%c\n", food12, prepoE, price12, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food13, prepoE, price13, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food14, prepoE, price14, prepoW, prepoC, colon);
	//Ŀ��
	printf("%s%s %d%s %s%c\n", food15, prepoN, price15, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food16, prepoN, price16, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food17, prepoN, price17, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food18, prepoN, price18, prepoW, prepoC, colon);
	//������
	printf("%s%s %d%s %s%c\n", food19, prepoE, price19, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food20, prepoE, price20, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food21, prepoE, price21, prepoW, prepoC, colon);
	//��Ÿ
	printf("%s%s %d%s %s%c\n", food22, prepoN, price22, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%s ��԰� �Ǿ���%c\n\n", food23, prepoN, price23, prepoW, prepoC,prepoR, dot);



	int sum = price1 + price2 + price3 + price4 + price5 + price6 + price7 + price8 + price9 + price10 + price11 + price12 + price13 + price14 + price15 + price16 + price17 + price18 + price19 + price20 + price21 + price22 + price23;
	float needMoreMoney = sum - totalBudget;
	float needMoreMoney_perPerson = needMoreMoney / customer;

	printf("�� ������ ������ ��� %s %d���̰�%c\n���� %.0f���� %s ���´�%c\n", string1, sum, colon, needMoreMoney,string2, dot);
	printf("����%c %d���� %.0f���� �� %s �Ѵ�%c\n", colon, customer, needMoreMoney_perPerson, string3, dot);
















	�Ʒ� �������� ?�� ��� ���� �Է��� �޾��� ��,
	�Ʒ� ������ �� ���� ��Ÿ�� �� �ְ� ������ּ���.

	������ ��¥�� ?�� ?���Դϴ�.
	�� �̸��� ?�̰�,
	�� ���̴� ?���̰�,
	�� ��ǥ�� ?�Դϴ�.



	int month;
	int date;
	char name[100];
	int age;
	char goal[100];

	printf("�̹����� �Է��Ͻÿ�: ");
	scanf("%d", &month);
	printf("�������ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &date);


	printf("������ �̸��� �Է��Ͻÿ�: ");
	scanf("%s", &name);

	printf("������ ���̸� �Է��Ͻÿ�: ");
	scanf("%d", &age);

	printf("������ ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%s", &goal);

	printf("������ ��¥�� %d�� %d�� �Դϴ�.\n", month, date);
	printf("�� �̸��� %s�̰�,\n", name);
	printf("�� ���̴� %d�̰�,\n", age);
	printf("�� ��ǥ�� %s�̰�,\n", goal);









































*/

/*int main() {
	
	char name1[5];
	char name2[5];
	char foodName1[7];
	char foodName2[5];
	char foodName3[5];
	char foodName4[3];
	char foodName5[5];
	char foodName6[5];
	int foodPrice1;
	int foodPrice2;
	int foodPrice3;
	int foodPrice4;
	int foodPrice5;
	int foodPrice6;

	//�̸�
	printf("ù��° �̸��� �Է����ּ���: ");
	scanf("%s", &name1);
	printf("�ι�° �̸��� �Է����ּ���: ");
	scanf("%s", &name2);


	//�����̸�, ���İ���
	printf("ù��° �����̸��� �Է����ּ���: ");
	scanf("%s", &foodName1);

	printf("ù��° ������ ������ �Է����ּ���: ");
	scanf("%d", &foodPrice1);

	printf("�ι�° �����̸��� �Է����ּ���: ");
	scanf("%s", &foodName2);
	printf("�ι�° ������ ������ �Է����ּ���: ");
	scanf("%d", &foodPrice2);

	printf("����° �����̸��� �Է����ּ���: ");
	scanf("%s", &foodName3);
	printf("����° ������ ������ �Է����ּ���: ");
	scanf("%d", &foodPrice3);

	printf("�׹�° �����̸��� �Է����ּ���: ");
	scanf("%s", &foodName4);
	printf("�׹�° ������ ������ �Է����ּ���: ");
	scanf("%d", &foodPrice4);

	printf("�ټ���° �����̸��� �Է����ּ���: ");
	scanf("%s", &foodName5);
	printf("�ټ���° ������ ������ �Է����ּ���: ");
	scanf("%d", &foodPrice5);

	printf("������° �����̸��� �Է����ּ���: ");
	scanf("%s", &foodName6);
	printf("������° ������ ������ �Է����ּ���: ");
	scanf("%d", &foodPrice6);


	char prepoE[3] = "��";
	char prepoN[3] = "��";
	char prepoL[3] = "��";
	char prepoR[3] = "��";
	char prepoI[3] = "��";
	char prepoD[3] = "��";
	char prepoG[3] = "��";
	char prepoW[3] = "��";
	char prepoC[5] = "��ġ";

	char string[5] = "����";

	char dot = '.';
	char comma = ',';

	int sum = foodPrice1 + foodPrice2 + foodPrice3 + foodPrice4 + foodPrice5 + foodPrice6;
	int name1TotalPrice = foodPrice1 + foodPrice2 + foodPrice3;
	int name2TotalPrice = foodPrice4 + foodPrice5 + foodPrice6;
	int margin = name2TotalPrice - name1TotalPrice;

	printf("%s�� %s%s �Բ� ����%s �غ��߽��ϴ�%c\n", name1, name2, prepoN, prepoL,dot);
	printf("%s%s %s%c%s%c%s%s ����ϴ�%c\n", name1,prepoN, foodName1, comma, foodName2, comma, foodName3, prepoR,dot);
	printf("%s%s %s%c%s%c%s%s ����ϴ�%c\n", name2, prepoN, foodName4, comma, foodName5, comma, foodName6, prepoR, dot);
	printf("%s%s %d%s%c %s%s %d%s%c %s%s %d%s%�Դϴ�%c\n", foodName1, prepoN, foodPrice1, prepoW,comma, foodName2, prepoN, foodPrice2, prepoW, comma, foodName3, prepoN, foodPrice3, prepoW, dot);
	printf("%s%s %d%s%c %s%s %d%s%c %s%s %d%s%�Դϴ�%c\n", foodName4, prepoN, foodPrice4, prepoW, comma, foodName5, prepoN, foodPrice5, prepoW, comma, foodName6, prepoN, foodPrice6, prepoW, dot);	printf("�� ���� %d���� ���Խ��ϴ�.\n", sum);
	printf("%s%s %d%s%s %s�ϰ�\n", name1, prepoN, name1TotalPrice, prepoW,prepoL, string);
	printf("%s%s %d%s%s %s�ϰ�\n", name2, prepoN, name2TotalPrice, prepoW, prepoL, string);
	printf("%s%s %s���� %d%s%s �� %s�߽��ϴ�%c\n", name2, prepoN, name1, margin, prepoW, prepoL, string, dot);
}*/

/*

	char name[100];
	char address[100];
	int age;
	int gender[100];



	printf("�̸��� �Է����ּ���: ");
	scanf("%s", &name);
	printf("�ּҸ� �Է����ּ���: ");
	getchar();
	gets(address);

	printf("���̸� �Է����ּ���: ");
	scanf("%d", &age);
	printf("������ �Է����ּ���: ");
	scanf("%s", &gender);

	printf("�̸�: %s\n", name);
	printf("�ּ�: %s\n", address);
	printf("����: %d\n", age);
	printf("����: %s\n", gender);
*/
/*int main() {

	char name1[100];
	int score1;
	char goal1[100];

	char name2[100];
	int score2;
	char goal2[100];

	char name3[100];
	int score3;
	char goal3[100];

	printf("ù��° �̸��� �Է����ּ���: ");
	scanf("%s", &name1);
	printf("������ �Է����ּ���: ");
	scanf("%d", &score1);
	printf("��ǥ�� �Է����ּ���: ");
	getchar();
	gets(goal1);

	printf("�ι�° �̸��� �Է����ּ���: ");
	gets(name2);
	printf("������ �Է����ּ���: ");
	scanf("%d", &score2);
	printf("��ǥ�� �Է����ּ���: ");
	getchar();
	gets(goal2);

	printf("����° �̸��� �Է����ּ���: ");
	gets(name3);
	printf("������ �Է����ּ���: ");
	scanf("%d", &score3);
	printf("��ǥ�� �Է����ּ���: ");
	getchar();
	gets(goal3);

	char prepoE[3] = "��";
	char prepoN[3] = "��";
	char prepoL[3] = "��";
	char prepoD[3] = "��";

	char string1[5] = "����";
	char string2[3] = "��";

	char dot = '.';
	char comma = ',';
	
	float sum = score1 + score2 + score3;
	float average = sum / 3;

	printf("%s�� %s�� %s%s �б��� ����%c \n", name1, name2, name3, prepoN, dot);
	printf("%s�� %s%s A�̰�%c %s�� %s%s B�̰�%c %s�� %s%s C�̴�%c\n", name1, string1, prepoE, comma, name2, string1, prepoE, comma, name3, string1, prepoE, dot);
	printf("%s%s %d%s%s �¾Ұ�%c %s%s %d%s%s �¾Ұ�%c %s%s %d%s%s �¾Ҵ�%c\n", name1, prepoN,    score1, string2, prepoL,    comma,     name2, prepoN, score2, string2, prepoL, comma,  name3, prepoN, score3, string2, prepoL, dot);
	printf("%s�� ��ǥ%s %s�̰�%c %s�� ��ǥ%s %s�̰�%c %s�� ��ǥ%s %s�̴�%c\n", name1, prepoN, goal1, comma, name2, prepoN, goal2, comma, name3, prepoN, goal3, comma);
	printf("���� ������ ��%s %.0f�̰�%c\n", prepoE, sum, comma);
	printf("���� ������ ���%s %.0f�̴�%c\n", prepoE, average, dot);

}*/

/*int main() {
	int a;

	printf("a�� �Է����ּ���:");
	scanf("%d", &a);

	if (a >= 1000) {
		printf("a�� �� ���ڰ� 1000 �̻��� �����Դϴ�.");
	}
	else {
		printf("a�� �� ���ڰ� 1000 �̻��� ���ڰ� �ƴմϴ�.");
	}
}*/

/*

	char name1[5];
	char name2[5];
	char name3[5];

	printf("ù��° ����̸��� �Է����ּ���:");
	scanf("%s", &name1);

	printf("�ι�° ����̸��� �Է����ּ���:");
	scanf("%s", &name2);

	printf("����° ����̸��� �Է����ּ���:");
	scanf("%s", &name3);

	//km��
	int km;
	printf("���� ���� ���� �� km ������ �ִ��� �Է����ּ���:");
	scanf("%d", &km);

	printf("%s�� %s�� %s�� �ִ�.\n���� ���� ���� 10km���� ������ �ִ� �Ÿ��� �����Ѵ�.\n�� ���� ���� ���ʴ�� �湮�Ϸ��� �� km�� �ɾ�� �ϴ°�.\n", &name1, &name2, &name3);

	//��:
	int true_answer = km * 3;
	int user_answer;

	printf("���� �Է����ּ���:");
	scanf("%d", &user_answer);

	if (user_answer == true_answer) {
		printf("�����Դϴ�.");
	}
	if (user_answer != true_answer) {

		printf("�����Դϴ�.\n���� %d�Դϴ�.", &true_answer);
	}
	//����̸�




*/
int main() {

	//ù��° ����
	//���� 2���Է�
	int a;
	int b;
	printf("ù��° ���ڸ� �Է����ּ���:");
	scanf("%d", &a);

	printf("�ι�° ���ڸ� �Է����ּ���:");
	scanf("%d", &b);


	//+��, scanf ����� ����
	int user_answer;
	printf("%d + %d =", a, b);
	scanf("%d", &user_answer);

	int real_answer = a + b;
	int chance = 10;
	int fail_count = 0;

	//����, 10������ ������ ���
	//	- �����̶�� ����� �Բ�
	//	- �ٽ� 10���� ��ȸ�� �ִµ�,
	//	�ش� 10���� ��ȸ�� 3�� �� ���� �� �ִ�.-> �� 30��
	if (real_answer != user_answer) {
		if (chance >= 0) {
			fail_count = 1;
			chance = chance - 1;

			printf("chance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;


			//���⿡�Ʒ� ���� 8�� �ݺ�- if�� �ٱ����� �̹� Ʋ������ 1�� �޾����Ƿ�, ù 10�� ����Ŭ�� if������ 9���� scanf�ޱ�
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n�����̸�, ��� ��ȸ�� �� ���̽��ϴ�. �߰� ��ȸ 10�� �߰�\n");
			chance = 10;
			//-----------------------------------------------

			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n�����̸�, ��� ��ȸ�� �� ���̽��ϴ�. �߰� ��ȸ 10�� �߰�\n");
			chance = 10;

			//-----------------------------------------------


			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("�����Դϴ�.\n");
			printf("������ �ٽ� �Է����ּ���:");
			scanf("%d", &user_answer);
			fail_count = fail_count + 1;
			chance = chance - 1;

			printf("\n�� 30�� ��ȸ�� ��� ����ϼ̽��ϴ�.");
			printf("chance: %d, fail_count: %d\n", chance, fail_count);

		}
			
				
		}
		

	



	//	������ ������ �˷��ִ� ���α׷��� �����ϰ�,
	//	������ ���,
	//	-�����Դϴ� ��� ����� �Բ�
	//	- ���� ������ ��Ÿ������,
	//	������ ��쿡��
	//	- ������ ���� ������ ���� �������� ���ٸ�
	//	- 10���� ��ȸ�� �޴´�.

	//���� ����-���α׷� ���� if��
	int right_count = 0;
	if (real_answer == user_answer) {
		printf("�����Դϴ�.");
		right_count = right_count + 1;
		if (right_count < fail_count) {
			chance = chance + 10;
		}
	}



	////------------------------------------------------
	////�ι�° ����
	////���� 2�� �Է�
	//float fa;
	//float fb;
	//float user_answer2;

	//printf("\nù��° ���ڸ� �Է����ּ���:");
	//scanf("%f", &fa);

	//printf("�ι�° ���ڸ� �Է����ּ���:");
	//scanf("%f", &fb);


	//printf("1�� %.0f�� 2�� %.0f �߿� � ���ڰ� �� ū�� ����ּ���:", fa, fb);
	//scanf("%f", &user_answer2);

	////��Ұ��� 
	////fa>fb -> true -> if fa==user_answer2
	////fa<fb -> true -> if fb==user_answer2
	//if (fa > fb) {
	//	if (1 == user_answer2) {
	//		printf("�����Դϴ�.");
	//		exit();
	//	}
	//	if (1 != user_answer2) {
	//		printf("�����Դϴ�.\n ������ 1���Դϴ�.");
	//	}
	//}

	//if (fa < fb) {
	//	if (2 == user_answer2) {
	//		printf("�����Դϴ�.");
	//		exit();
	//	}
	//	if (2 != user_answer2) {
	//		printf("�����Դϴ�.\n ������ 2���Դϴ�.");
	//	}
	//}
}