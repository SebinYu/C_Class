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


int main(void) {
	//�մ� �ο�, �� ����
	int customer = 10;
	int totalBudget = 100000;

	//���� ����Ʈ
	char food1[7] = "������";
	int price1 = 6470000;

	char food2[9] = "����Ƣ��";
	int price2 = 6988000;

	char food3[10] = "��� Ƣ��";
	int price3 = 666777;

	char food4[12] = "�踻�� Ƣ��";
	int price4 = 8900000;

	char food5[10] = "��� Ƣ��";
	int price5 = 70000;

	char food6[5] = "����";
	int price6 = 438000;

	char food7[5] = "�쵿";
	int price7 = 660000;

	char food8[5] = "����";
	int price8 = 1480000;

	char food9[7] = "���";
	int price9 = 728000;

	char food10[12] = "ġ�� ���";
	int price10 = 889000;

	char food11[12] = "��ġ ���";
	int price11 = 1498000;

	char food12[5] = "���";
	int price12 = 6470000;

	char food13[10] = "��ġ ���";
	int price13 = 1690000;

	char food14[10] = "��ġ ���";
	int price14 = 1275800;

	char food15[18] = "���̽� �Ƹ޸�ī��";
	int price15 = 968000;

	char food16[9] = "ī���";
	int price16 = 178000;

	char food17[15] = "ī��� �����ƶ�";
	int price17 = 9900;

	char food18[10] = "�ͽ� Ŀ��";
	int price18 = 999999;

	char food19[7] = "������";
	int price19 = 690000;

	char food20[12] = "��ġ ������";
	int price20 = 5800080;

	char food21[12] = "��� ������";
	int price21 = 4385000;

	char food22[7] = "�����";
	int price22 = 190000;

	char food23[5] = "����";
	int price23 = 150000;


	char prepo1[3] = "��";
	char prepo2[3] = "��";
	char prepo3[3] = "��";
	char prepo4[3] = "��";
	char prepo5[3] = "��";
	char prepo6[3] = "��";
	char prepo7[3] = "��";
	char prepo8[3] = "��";
	char prepo9[5] = "��ġ";

	char string1[7] = "��ġ��";
	char string2[7] = "���ڶ�";
	char string3[7] = "���߸�";

	char dot = '.';
	char dot1 = ',';

	int sum = price1 + price2 + price3 + price4 + price5 + price6 + price7 + price8 + price9 + price10 + price11 + price12 + price13 + price14 + price15 + price16 + price17 + price18 + price19 + price20 + price21 + price22 + price23;
	int needMoreMoney = sum - totalBudget;
	float needMoreMoney_perPerson = needMoreMoney / customer;

	printf("�� ������ ������ ��� ��ġ�� % d���̰�,\n���� %d���� ������ ���´�.\n", sum, needMoreMoney);
	printf("����, %d���� %.0f���� �� ���߸� �Ѵ�.", customer, needMoreMoney_perPerson);



}