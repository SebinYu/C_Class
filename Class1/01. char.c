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
//손님 인원, 총 예산
	int customer = 10;
	int totalBudget = 100000;

	//음식 리스트
	char food1[7] = "떡볶이";
	int price1 = 6470000;

	//튀김
	char food2[9] = "감자튀김";
	int price2 = 6988000;

	char food3[10] = "모듬 튀김";
	int price3 = 666777;

	char food4[12] = "김말이 튀김";
	int price4 = 8900000;

	char food5[10] = "계란 튀김";
	int price5 = 70000;

	//기타
	char food6[5] = "순대";
	int price6 = 438000;

	char food7[5] = "우동";
	int price7 = 660000;

	char food8[5] = "오뎅";
	int price8 = 1480000;

	//돈까스
	char food9[7] = "돈까스";
	int price9 = 728000;

	char food10[12] = "치즈 돈까스";
	int price10 = 889000;

	char food11[12] = "김치 돈까스";
	int price11 = 1498000;

	//김밥
	char food12[5] = "김밥";
	int price12 = 6470000;

	char food13[10] = "참치 김밥";
	int price13 = 1690000;

	char food14[10] = "김치 김밥";
	int price14 = 1275800;

	//커피
	char food15[18] = "아이스 아메리카노";
	int price15 = 968000;

	char food16[9] = "카페라떼";
	int price16 = 178000;

	char food17[16] = "카라멜 마끼아또";
	int price17 = 9900;

	char food18[10] = "믹스 커피";
	int price18 = 999999;

	//볶음밥
	char food19[7] = "볶음밥";
	int price19 = 690000;

	char food20[12] = "김치 볶음밥";
	int price20 = 5800080;

	char food21[12] = "계란 볶음밥";
	int price21 = 4385000;

	//기타
	char food22[7] = "음료수";
	int price22 = 190000;

	char food23[5] = "과자";
	int price23 = 150000;


	char prepoE[3] = "은";
	char prepoN[3] = "는";
	char prepoL[3] = "을";
	char prepoR[3] = "를";
	char prepoI[3] = "의";
	char prepoD[3] = "등";
	char prepoG[3] = "과";
	char prepoW[3] = "원";
	char prepoC[5] = "어치";

	char string1[7] = "합치면";
	char string2[7] = "모자란";
	char string3[7] = "내야만";

	char dot = '.';
	char colon = ',';


	printf("총 %d명의 사람이 다 함께 음식점에 도착하였다%c\n", customer, dot);
	printf("총 %d명이 모은 금액은 %d원이다%c\n\n", customer, totalBudget, dot);

	printf("%s%s %d%s %s%c\n",food1,prepoN, price1,prepoW, prepoC, colon);
	//튀김
	printf("%s%s %d%s %s%c\n", food2, prepoE, price2, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food3, prepoE, price3, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food4, prepoE, price4, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food5, prepoE, price5, prepoW, prepoC, colon);
	//기타
	printf("%s%s %d%s %s%c\n", food6, prepoN, price6, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food7, prepoE, price7, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food8, prepoE, price8, prepoW, prepoC, colon);
	//돈까스
	printf("%s%s %d%s %s%c\n", food9, prepoN, price9, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food10, prepoN, price10, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food11, prepoN, price11, prepoW, prepoC, colon);
	//김밥
	printf("%s%s %d%s %s%c\n", food12, prepoE, price12, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food13, prepoE, price13, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food14, prepoE, price14, prepoW, prepoC, colon);
	//커피
	printf("%s%s %d%s %s%c\n", food15, prepoN, price15, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food16, prepoN, price16, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food17, prepoN, price17, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food18, prepoN, price18, prepoW, prepoC, colon);
	//볶음밥
	printf("%s%s %d%s %s%c\n", food19, prepoE, price19, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food20, prepoE, price20, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%c\n", food21, prepoE, price21, prepoW, prepoC, colon);
	//기타
	printf("%s%s %d%s %s%c\n", food22, prepoN, price22, prepoW, prepoC, colon);
	printf("%s%s %d%s %s%s 사먹게 되었다%c\n\n", food23, prepoN, price23, prepoW, prepoC,prepoR, dot);



	int sum = price1 + price2 + price3 + price4 + price5 + price6 + price7 + price8 + price9 + price10 + price11 + price12 + price13 + price14 + price15 + price16 + price17 + price18 + price19 + price20 + price21 + price22 + price23;
	float needMoreMoney = sum - totalBudget;
	float needMoreMoney_perPerson = needMoreMoney / customer;

	printf("위 음식의 가격을 모두 %s %d원이고%c\n현재 %.0f원이 %s 상태다%c\n", string1, sum, colon, needMoreMoney,string2, dot);
	printf("따라서%c %d명은 %.0f원을 더 %s 한다%c\n", colon, customer, needMoreMoney_perPerson, string3, dot);
















	아래 문구에서 ?는 모두 먼저 입력을 받아준 후,
	아래 문장이 한 번에 나타날 수 있게 만들어주세요.

	오늘의 날짜는 ?월 ?일입니다.
	제 이름은 ?이고,
	제 나이는 ?세이고,
	제 목표는 ?입니다.



	int month;
	int date;
	char name[100];
	int age;
	char goal[100];

	printf("이번달을 입력하시오: ");
	scanf("%d", &month);
	printf("오늘일자를 입력하시오: ");
	scanf("%d", &date);


	printf("본인의 이름을 입력하시오: ");
	scanf("%s", &name);

	printf("본인의 나이를 입력하시오: ");
	scanf("%d", &age);

	printf("본인의 목표를 입력하시오: ");
	scanf("%s", &goal);

	printf("오늘의 날짜는 %d월 %d일 입니다.\n", month, date);
	printf("제 이름은 %s이고,\n", name);
	printf("제 나이는 %d이고,\n", age);
	printf("제 목표은 %s이고,\n", goal);









































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

	//이름
	printf("첫번째 이름을 입력해주세요: ");
	scanf("%s", &name1);
	printf("두번째 이름을 입력해주세요: ");
	scanf("%s", &name2);


	//음식이름, 음식가격
	printf("첫번째 음식이름을 입력해주세요: ");
	scanf("%s", &foodName1);

	printf("첫번째 음식이 가격을 입력해주세요: ");
	scanf("%d", &foodPrice1);

	printf("두번째 음식이름을 입력해주세요: ");
	scanf("%s", &foodName2);
	printf("두번째 음식이 가격을 입력해주세요: ");
	scanf("%d", &foodPrice2);

	printf("세번째 음식이름을 입력해주세요: ");
	scanf("%s", &foodName3);
	printf("세번째 음식이 가격을 입력해주세요: ");
	scanf("%d", &foodPrice3);

	printf("네번째 음식이름을 입력해주세요: ");
	scanf("%s", &foodName4);
	printf("네번째 음식이 가격을 입력해주세요: ");
	scanf("%d", &foodPrice4);

	printf("다섯번째 음식이름을 입력해주세요: ");
	scanf("%s", &foodName5);
	printf("다섯번째 음식이 가격을 입력해주세요: ");
	scanf("%d", &foodPrice5);

	printf("여섯번째 음식이름을 입력해주세요: ");
	scanf("%s", &foodName6);
	printf("여섯번째 음식이 가격을 입력해주세요: ");
	scanf("%d", &foodPrice6);


	char prepoE[3] = "은";
	char prepoN[3] = "는";
	char prepoL[3] = "을";
	char prepoR[3] = "를";
	char prepoI[3] = "의";
	char prepoD[3] = "등";
	char prepoG[3] = "과";
	char prepoW[3] = "원";
	char prepoC[5] = "어치";

	char string[5] = "지불";

	char dot = '.';
	char comma = ',';

	int sum = foodPrice1 + foodPrice2 + foodPrice3 + foodPrice4 + foodPrice5 + foodPrice6;
	int name1TotalPrice = foodPrice1 + foodPrice2 + foodPrice3;
	int name2TotalPrice = foodPrice4 + foodPrice5 + foodPrice6;
	int margin = name2TotalPrice - name1TotalPrice;

	printf("%s와 %s%s 함께 음식%s 준비했습니다%c\n", name1, name2, prepoN, prepoL,dot);
	printf("%s%s %s%c%s%c%s%s 샀습니다%c\n", name1,prepoN, foodName1, comma, foodName2, comma, foodName3, prepoR,dot);
	printf("%s%s %s%c%s%c%s%s 샀습니다%c\n", name2, prepoN, foodName4, comma, foodName5, comma, foodName6, prepoR, dot);
	printf("%s%s %d%s%c %s%s %d%s%c %s%s %d%s%입니다%c\n", foodName1, prepoN, foodPrice1, prepoW,comma, foodName2, prepoN, foodPrice2, prepoW, comma, foodName3, prepoN, foodPrice3, prepoW, dot);
	printf("%s%s %d%s%c %s%s %d%s%c %s%s %d%s%입니다%c\n", foodName4, prepoN, foodPrice4, prepoW, comma, foodName5, prepoN, foodPrice5, prepoW, comma, foodName6, prepoN, foodPrice6, prepoW, dot);	printf("총 합은 %d원이 나왔습니다.\n", sum);
	printf("%s%s %d%s%s %s하고\n", name1, prepoN, name1TotalPrice, prepoW,prepoL, string);
	printf("%s%s %d%s%s %s하고\n", name2, prepoN, name2TotalPrice, prepoW, prepoL, string);
	printf("%s%s %s보다 %d%s%s 더 %s했습니다%c\n", name2, prepoN, name1, margin, prepoW, prepoL, string, dot);
}*/

/*

	char name[100];
	char address[100];
	int age;
	int gender[100];



	printf("이름을 입력해주세요: ");
	scanf("%s", &name);
	printf("주소를 입력해주세요: ");
	getchar();
	gets(address);

	printf("나이를 입력해주세요: ");
	scanf("%d", &age);
	printf("성별을 입력해주세요: ");
	scanf("%s", &gender);

	printf("이름: %s\n", name);
	printf("주소: %s\n", address);
	printf("나이: %d\n", age);
	printf("성별: %s\n", gender);
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

	printf("첫번째 이름을 입력해주세요: ");
	scanf("%s", &name1);
	printf("점수를 입력해주세요: ");
	scanf("%d", &score1);
	printf("목표를 입력해주세요: ");
	getchar();
	gets(goal1);

	printf("두번째 이름을 입력해주세요: ");
	gets(name2);
	printf("점수를 입력해주세요: ");
	scanf("%d", &score2);
	printf("목표를 입력해주세요: ");
	getchar();
	gets(goal2);

	printf("세번째 이름을 입력해주세요: ");
	gets(name3);
	printf("점수를 입력해주세요: ");
	scanf("%d", &score3);
	printf("목표를 입력해주세요: ");
	getchar();
	gets(goal3);

	char prepoE[3] = "은";
	char prepoN[3] = "는";
	char prepoL[3] = "을";
	char prepoD[3] = "등";

	char string1[5] = "학점";
	char string2[3] = "점";

	char dot = '.';
	char comma = ',';
	
	float sum = score1 + score2 + score3;
	float average = sum / 3;

	printf("%s와 %s와 %s%s 학교에 갔다%c \n", name1, name2, name3, prepoN, dot);
	printf("%s의 %s%s A이고%c %s의 %s%s B이고%c %s의 %s%s C이다%c\n", name1, string1, prepoE, comma, name2, string1, prepoE, comma, name3, string1, prepoE, dot);
	printf("%s%s %d%s%s 맞았고%c %s%s %d%s%s 맞았고%c %s%s %d%s%s 맞았다%c\n", name1, prepoN,    score1, string2, prepoL,    comma,     name2, prepoN, score2, string2, prepoL, comma,  name3, prepoN, score3, string2, prepoL, dot);
	printf("%s의 목표%s %s이고%c %s의 목표%s %s이고%c %s의 목표%s %s이다%c\n", name1, prepoN, goal1, comma, name2, prepoN, goal2, comma, name3, prepoN, goal3, comma);
	printf("셋의 점수의 합%s %.0f이고%c\n", prepoE, sum, comma);
	printf("셋의 점수의 평균%s %.0f이다%c\n", prepoE, average, dot);

}*/

/*int main() {
	int a;

	printf("a를 입력해주세요:");
	scanf("%d", &a);

	if (a >= 1000) {
		printf("a에 든 숫자가 1000 이상의 숫자입니다.");
	}
	else {
		printf("a에 든 숫자가 1000 이상의 숫자가 아닙니다.");
	}
}*/

/*

	char name1[5];
	char name2[5];
	char name3[5];

	printf("첫번째 사람이름을 입력해주세요:");
	scanf("%s", &name1);

	printf("두번째 사람이름을 입력해주세요:");
	scanf("%s", &name2);

	printf("세번째 사람이름을 입력해주세요:");
	scanf("%s", &name3);

	//km수
	int km;
	printf("셋의 집은 각각 몇 km 떨어져 있는지 입력해주세요:");
	scanf("%d", &km);

	printf("%s과 %s와 %s이 있다.\n셋의 집은 각각 10km마다 떨어져 있는 거리에 존재한다.\n세 명의 집을 차례대로 방문하려면 몇 km를 걸어가야 하는가.\n", &name1, &name2, &name3);

	//답:
	int true_answer = km * 3;
	int user_answer;

	printf("답을 입력해주세요:");
	scanf("%d", &user_answer);

	if (user_answer == true_answer) {
		printf("정답입니다.");
	}
	if (user_answer != true_answer) {

		printf("오답입니다.\n답은 %d입니다.", &true_answer);
	}
	//사람이름




*/
/*int main() {

	//첫번째 문제
	//숫자 2개입력
	int a;
	int b;
	printf("첫번째 숫자를 입력해주세요:");
	scanf("%d", &a);

	printf("두번째 숫자를 입력해주세요:");
	scanf("%d", &b);




	//+식, scanf 사용자 정답
	int user_answer;
	printf("%d + %d =", a, b);
	scanf("%d", &user_answer);

	int real_answer = a + b;
	int chance = 10;
	int fail_count = 0;

	//따라서, 10번동안 오답일 경우
	//	- 오답이라는 문장과 함께
	//	- 다시 10번의 기회를 주는데,
	//	해당 10번의 기회를 3번 더 받을 수 있다.-> 총 30번

	//1

	//첫 10번 기회 사이클 경우-scanf 9번 반복- if문 바깥에서 이미 틀린값을 1번 받았기 때문
	//한동작을 구현하더라도, 구체적으로 각 if문별 변경사항을 분류 해서 만들기 - 각 작동 단계별 할 일 분류하기
	//if (real_answer != user_answer) -> 변수값 변경
	//if (chance > 0) -> 기회 더 주기
	if (real_answer != user_answer ) {
		fail_count = 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("chance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}

	//2
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}

	//3
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}

	//4
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}


	//5
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}


	//6
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}

	//7
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}


	//8
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}

	//9
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}

	//10
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;
		printf("chance: %d, fail_count: %d\n", chance, fail_count);

		if (chance == 0) {
			printf("\n오답이며, 모든 기회를 다 쓰셨습니다. 추가 기회 10번 추가\n");
			chance = 10;
			printf("chance: %d, fail_count: %d\n", chance, fail_count);
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);

		}
	}

	//-----------------------------------------------

	//1
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}


	//2
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}

	//3
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}

	//4
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}


	//5
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}


	//6
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}

	//7
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}


	//8
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}

	//9
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}

	//10
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance == 0) {
			printf("\n오답이며, 모든 기회를 다 쓰셨습니다. 추가 기회 10번 추가\n");
			chance = 10;
			printf("chance: %d, fail_count: %d\n", chance, fail_count);
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);

		}
	}

	//-----------------------------------------------


	//1
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}


	//2
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}

	//3
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}

	//4
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}


	//5
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}


	//6
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}

	//7
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}


	//8
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}

	//9
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;

		if (chance > 0) {
			printf("\n\nchance: %d, fail_count: %d\n", chance, fail_count);
			printf("오답입니다.\n");
			printf("정답을 다시 입력해주세요:");
			scanf("%d", &user_answer);
		}
	}


	//10
	if (real_answer != user_answer) {
		fail_count = fail_count + 1;
		chance = chance - 1;
		if (chance == 0) {
			printf("총 30번 기회를 모두 사용하셨습니다.\n");
			printf("chance: %d, fail_count: %d\n\n", chance, fail_count);
		}
	}



	// 배운점: if문에 한번들어가면 처음에만 판별식을 확인
		//-> 내부 코드작동중간에 판별식을 만족하지 못해도 모든 내부코드가 끝날때까지 작동한다.
		//그러므로 if 문으로만 여러번 동작을 시키고 싶다면, 매번 if문+판별식을 새로 작성해주기






	//정답이 몇인지 알려주는 프로그램을 개발하고,
	//정답일 경우,
	//[o]-정답입니다 라는 문장과 함께
	//[o]- 다음 문제가 나타나지만,
	//정답인 경우에도
	//[o]- 이전에 오답 개수가 정답 개수보다 많다면
	//[o]- 10번의 기회를 받는다.
	int success_count = 0;
	if (real_answer == user_answer) {
		printf("\n정답입니다.\n");
		success_count = success_count + 1;

		if (success_count < fail_count) {
			printf("이전에 오답 개수가 정답 개수보다 많기 때문에, 기회 추가 10번\n");
			chance = chance + 10;
			printf("chance: %d, fail_count: %d, success_count:%d\n\n ", chance, fail_count, success_count);
		}
	}



	//-------------------------------------------------------------------------------------------------------
	////두번째 문제-1
	int fa_1 = 10;
	int fb_1 = 20;
	int user_answer_1;
	int real_answer_1;

	int fail_count2 = 0;



	printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
	scanf("%d", &user_answer_1);


	if (fa_1 > fb_1) {
		real_answer_1 = 1;
	}

	if (fa_1 < fb_1) {
		real_answer_1 = 2;
	}

	if (fa_1 > fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}
		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 1번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 > fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 1번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\nfail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 > fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;
			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 1번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}


		}
	}


	//----------------------------------------------------
	if (fa_1 < fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}
		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 2번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 < fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 2번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 < fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;
			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 2번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}


		}
	}

	//-------------------------------------------------------------------------------------------------------
	////두번째 문제-2
	fa_1 = 20;
	fb_1 = 10;

	printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
	scanf("%d", &user_answer_1);


	if (fa_1 > fb_1) {
		real_answer_1 = 1;
	}

	if (fa_1 < fb_1) {
		real_answer_1 = 2;
	}

	if (fa_1 > fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}
		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 1번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 > fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 1번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\nfail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 > fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;
			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 1번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}


		}
	}


	//----------------------------------------------------
	if (fa_1 < fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}
		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 2번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 < fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 2번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 < fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;
			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 2번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}


		}
	}


	//-------------------------------------------------------------------------------------------------------
	////두번째 문제-3
	fa_1 = 20;
	fb_1 = 30;

	printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
	scanf("%d", &user_answer_1);


	if (fa_1 > fb_1) {
		real_answer_1 = 1;
	}

	if (fa_1 < fb_1) {
		real_answer_1 = 2;
	}

	if (fa_1 > fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}
		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 1번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 > fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 1번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\nfail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 > fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;
			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 1번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}


		}
	}


	//----------------------------------------------------
	if (fa_1 < fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}
		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 2번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 < fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 2번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 < fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;
			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 2번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}


		}
	}

	//-------------------------------------------------------------------------------------------------------
	////두번째 문제-4
	fa_1 = 30;
	fb_1 = 40;

	printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
	scanf("%d", &user_answer_1);


	if (fa_1 > fb_1) {
		real_answer_1 = 1;
	}

	if (fa_1 < fb_1) {
		real_answer_1 = 2;
	}

	if (fa_1 > fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}
		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 1번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 > fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 1번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\nfail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 > fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;
			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 1번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}


		}
	}


	//----------------------------------------------------
	if (fa_1 < fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}
		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 2번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 < fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 2번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 < fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;
			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 2번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}


		}
	}


	//-------------------------------------------------------------------------------------------------------
	////두번째 문제-5
	fa_1 = 40;
	fb_1 = 30;

	printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
	scanf("%d", &user_answer_1);


	if (fa_1 > fb_1) {
		real_answer_1 = 1;
	}

	if (fa_1 < fb_1) {
		real_answer_1 = 2;
	}

	if (fa_1 > fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}
		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 1번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 > fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 1번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\nfail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 > fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;
			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 1번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}


		}
	}


	//----------------------------------------------------
	if (fa_1 < fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}
		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 2번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 < fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;

			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 2번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}
		}

	}

	if (fa_1 < fb_1) {
		if (user_answer_1 == real_answer_1) {
			printf("정답입니다.");
			exit(1);
		}

		if (user_answer_1 != real_answer_1) {
			fail_count2 = fail_count2 + 1;
			if (fail_count2 >= 3) {
				printf("\n\n오답입니다. 정답은 2번입니다.\n3번 기회 모두소진 - 문제를 처음부터 다시 풀어주세요.\n");
				exit(1);
			}

			if (fail_count2 < 3) {
				printf("\n\n오답입니다.\n fail_count: %d\n", fail_count2);
				printf("1번 %d와 2번 %d 중에 더 큰 숫자의 번호를 골라주세요:", fa_1, fb_1);
				scanf("%d", &user_answer_1);
			}


		}
	}
}*/

/*int main() {
	int food_num = 0;
	int food_price;
	int user_price_num;
	int user_food_num;
	int total_price = 0;
	printf("다음 세 가지 중 고르시오.\n1. 감자. 2.옥수수 3. 수박\n");
	scanf("%d", &food_num);

	if (food_num == 1) {
		printf("1번 감자를 선택하셨습니다.\n");
		printf("1천원어치, 2천원어치 3천원어치\n");
		scanf("%d", &user_price_num);

		if (user_price_num == 1) {
			printf("감자 1천원어치를 선택하셨습니다.\n");
			food_price = 1000;
		}

		if (user_price_num == 2) {
			printf("감자 2천원어치를 선택하셨습니다.\n");
			food_price = 2000;
		}

		if (user_price_num == 3) {
			printf("감자 3천원어치를 선택하셨습니다.\n");
			food_price = 3000;
		}
	}



	if (food_num == 2) {
		printf("1번 옥수수를 선택하셨습니다.\n");
		printf("4천원어치, 5천원어치 6천원어치\n");
		scanf("%d", &user_price_num);

		if (user_price_num == 1) {
			printf("옥수수 4천원어치를 선택하셨습니다.\n");
			food_price = 4000;
		}

		if (user_price_num == 2) {
			printf("옥수수 5천원어치를 선택하셨습니다.\n");
			food_price = 5000;
		}

		if (user_price_num == 3) {
			printf("옥수수 6천원어치를 선택하셨습니다.\n");
			food_price = 6000;
		}

	}



	if (food_num == 3) {
		printf("1번 수박을 선택하셨습니다.\n");
		printf("10천원어치, 20천원어치, 30천원어치\n");
		scanf("%d", &user_price_num);

		if (user_price_num == 1) {
			printf("수박 10000원어치를 선택하셨습니다.\n");
			food_price = 10000;
		}

		if (user_price_num == 2) {
			printf("수박 20000원어치를 선택하셨습니다.\n");
			food_price = 20000;
		}

		if (user_price_num == 3) {
			printf("수박 30000원어치를 선택하셨습니다.\n");
			food_price = 30000;
		}
	}

	printf("몇개를 주문하시겠습니까?\n");
	scanf("%d", &user_food_num);
	total_price = food_price * user_food_num;
	printf("%d원어치 * %d개\n", food_price, user_food_num);
	printf("총 금액은 %d입니다.\n", total_price);
}*/

/*int main() {
	int score;
	char user_grade;

	char real_grade;

	printf("점수를 입력해주세요:");
	scanf("%d", &score);
	printf("학점을 입력해주세요:");
	getchar();
	scanf("%c", &user_grade);


	if (score >= 100) {
		real_grade = 'A';
	}

	if (score >= 90 && score < 100) {
		real_grade = 'B';
	}

	if (80 <= score && score < 90) {
		real_grade = 'C';
	}

	if (70 <= score && score < 80) {
		real_grade = 'D';
	}

	if (60 <= score && score < 70) {
		real_grade = 'E';
	}

	if (50 <= score && score < 60) {
		real_grade = 'F';
	}

	printf("real_grade: %c,user_grade: %c\n", real_grade, user_grade);
	if (real_grade == user_grade) {
		printf("올바른 학점입니다.");
	}

	if (real_grade != user_grade) {
		printf("올바르지 않은 학점입니다.");
	}
}*/

int main() {
	int extra_money;
	int first_budget = 10000;

	int food1_price;
	int food2_price;
	int food3_price;
	
	int food1_count;
	int food2_count;
	int food3_count;

	int food1_total_price;
	int food2_total_price;
	int food3_total_price;


	printf("추가 용돈을 입력해주세요: ");
	scanf("%d", &extra_money);

	int remaining_budget = first_budget + extra_money;
	printf("현재 남은 돈: %d", remaining_budget);


	printf("떡볶이 금액: ");
	scanf("%d", food1_price);

	printf("우동 금액: ");
	scanf("%d", food2_price);

	printf("과자 금액: ");
	scanf("%d", food3_price);

	printf("떡볶이를 몇 개 주문하시겠습니까?");
	scanf("%d", food1_count);

	food1_total_price = food1_price * food1_count;
	

	if (remaining_budget >= food1_total_price) {
		printf("떡볶이 총 가격: %d", food1_total_price);
		remaining_budget = remaining_budget - food1_total_price;
		printf("현재 잔금은 %d 입니다.", remaining_budget);
	}
	
	if (remaining_budget < food1_total_price) {
		int lacking_amount = food1_total_price - remaining_budget;

	}
}