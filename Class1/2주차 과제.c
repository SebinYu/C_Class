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
	printf("%s%s %d%s%s �¾Ұ�%c %s%s %d%s%s �¾Ұ�%c %s%s %d%s%s �¾Ҵ�%c\n", name1, prepoN, score1, string2, prepoL, comma, name2, prepoN, score2, string2, prepoL, comma, name3, prepoN, score3, string2, prepoL, dot);
	printf("%s�� ��ǥ%s %s�̰�%c %s�� ��ǥ%s %s�̰�%c %s�� ��ǥ%s %s�̴�%c\n", name1, prepoN, goal1, comma, name2, prepoN, goal2, comma, name3, prepoN, goal3, comma);
	printf("���� ������ ��%s %.0f�̰�%c\n", prepoE, sum, comma);
	printf("���� ������ ���%s %.0f�̴�%c\n", prepoE, average, dot);

}