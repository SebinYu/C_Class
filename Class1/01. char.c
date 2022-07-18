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
	//¼Õ´Ô ÀÎ¿ø, ÃÑ ¿¹»ê
	int customer = 10;
	int totalBudget = 100000;

	//À½½Ä ¸®½ºÆ®
	char food1[7] = "¶±ººÀÌ";
	int price1 = 6470000;

	//Æ¢±è
	char food2[9] = "°¨ÀÚÆ¢±è";
	int price2 = 6988000;

	char food3[10] = "¸ðµë Æ¢±è";
	int price3 = 666777;

	char food4[12] = "±è¸»ÀÌ Æ¢±è";
	int price4 = 8900000;

	char food5[10] = "°è¶õ Æ¢±è";
	int price5 = 70000;

	//±âÅ¸
	char food6[5] = "¼ø´ë";
	int price6 = 438000;

	char food7[5] = "¿ìµ¿";
	int price7 = 660000;

	char food8[5] = "¿Àµ­";
	int price8 = 1480000;
	
	//µ·±î½º
	char food9[7] = "µ·±î½º";
	int price9 = 728000;

	char food10[12] = "Ä¡Áî µ·±î½º";
	int price10 = 889000;

	char food11[12] = "±èÄ¡ µ·±î½º";
	int price11 = 1498000;

	//±è¹ä
	char food12[5] = "±è¹ä";
	int price12 = 6470000;

	char food13[10] = "ÂüÄ¡ ±è¹ä";
	int price13 = 1690000;

	char food14[10] = "±èÄ¡ ±è¹ä";
	int price14 = 1275800;

	//Ä¿ÇÇ
	char food15[18] = "¾ÆÀÌ½º ¾Æ¸Þ¸®Ä«³ë";
	int price15 = 968000;

	char food16[9] = "Ä«Æä¶ó¶¼";
	int price16 = 178000;

	char food17[16] = "Ä«¶ó¸á ¸¶³¢¾Æ¶Ç";
	int price17 = 9900;

	char food18[10] = "¹Í½º Ä¿ÇÇ";
	int price18 = 999999;

	//ººÀ½¹ä
	char food19[7] = "ººÀ½¹ä";
	int price19 = 690000;

	char food20[12] = "±èÄ¡ ººÀ½¹ä";
	int price20 = 5800080;

	char food21[12] = "°è¶õ ººÀ½¹ä";
	int price21 = 4385000;

	//±âÅ¸
	char food22[7] = "À½·á¼ö";
	int price22 = 190000;

	char food23[5] = "°úÀÚ";
	int price23 = 150000;


	char prepoE[3] = "Àº";
	char prepoN[3] = "´Â";
	char prepoL[3] = "À»";
	char prepoR[3] = "¸¦";
	char prepoI[3] = "ÀÇ";
	char prepoD[3] = "µî";
	char prepoG[3] = "°ú";
	char prepoW[3] = "¿ø";
	char prepoC[5] = "¾îÄ¡";

	char string1[7] = "ÇÕÄ¡¸é";
	char string2[7] = "¸ðÀÚ¶õ";
	char string3[7] = "³»¾ß¸¸";

	char dot = '.';
	char colon = ',';


	printf("ÃÑ %d¸íÀÇ »ç¶÷ÀÌ ´Ù ÇÔ²² À½½ÄÁ¡¿¡ µµÂøÇÏ¿´´Ù%c\n", customer, dot);
	printf("ÃÑ %d¸íÀÌ ¸ðÀº ±Ý¾×Àº %d¿øÀÌ´Ù%c\n\n", customer, totalBudget, dot);

	printf("%s%s %d%s %s%c\n",food1,prepoN, price1,prepoW, prepoC, colon);
	//Æ¢±è
	printf("%s%s %d%s %s%c\n", food2, prepoE, price2, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food3, prepoE, price3, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food4, prepoE, price4, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food5, prepoE, price5, prepoW, prepoC, colon);
	//±âÅ¸
	printf("%s%s %d%s %s%c\n", food6, prepoN, price6, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food7, prepoE, price7, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food8, prepoE, price8, prepoW, prepoC, colon);
	//µ·±î½º
	printf("%s%s %d%s %s%c\n", food9, prepoN, price9, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food10, prepoN, price10, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food11, prepoN, price11, prepoW, prepoC, colon);
	//±è¹ä
	printf("%s%s %d%s %s%c\n", food12, prepoE, price12, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food13, prepoE, price13, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food14, prepoE, price14, prepoW, prepoC, colon);
	//Ä¿ÇÇ
	printf("%s%s %d%s %s%c\n", food15, prepoN, price15, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food16, prepoN, price16, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food17, prepoN, price17, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food18, prepoN, price18, prepoW, prepoC, colon);
	//ººÀ½¹ä
	printf("%s%s %d%s %s%c\n", food19, prepoE, price19, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food20, prepoE, price20, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food21, prepoE, price21, prepoW, prepoC, colon);
	//±âÅ¸
	printf("%s%s %d%s %s%c\n", food22, prepoN, price22, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%s »ç¸Ô°Ô µÇ¾ú´Ù%c\n\n", food23, prepoN, price23, prepoW, prepoC,prepoR, dot);



	int sum = price1 + price2 + price3 + price4 + price5 + price6 + price7 + price8 + price9 + price10 + price11 + price12 + price13 + price14 + price15 + price16 + price17 + price18 + price19 + price20 + price21 + price22 + price23;
	int needMoreMoney = sum - totalBudget;
	float needMoreMoney_perPerson = needMoreMoney / customer;

	printf("À§ À½½ÄÀÇ °¡°ÝÀ» ¸ðµÎ %s %d¿øÀÌ°í%c\nÇöÀç %d¿øÀÌ %s »óÅÂ´Ù%c\n", string1, sum, colon, needMoreMoney,string2, dot);
	printf("µû¶ó¼­%c %d¸íÀº %.0f¿øÀ» ´õ %s ÇÑ´Ù%c\n", colon, customer, needMoreMoney_perPerson, string3, dot);



}