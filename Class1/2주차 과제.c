int main() {

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
	printf("%s%s %d%s%s 맞았고%c %s%s %d%s%s 맞았고%c %s%s %d%s%s 맞았다%c\n", name1, prepoN, score1, string2, prepoL, comma, name2, prepoN, score2, string2, prepoL, comma, name3, prepoN, score3, string2, prepoL, dot);
	printf("%s의 목표%s %s이고%c %s의 목표%s %s이고%c %s의 목표%s %s이다%c\n", name1, prepoN, goal1, comma, name2, prepoN, goal2, comma, name3, prepoN, goal3, comma);
	printf("셋의 점수의 합%s %.0f이고%c\n", prepoE, sum, comma);
	printf("셋의 점수의 평균%s %.0f이다%c\n", prepoE, average, dot);

}