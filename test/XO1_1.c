#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#define SIZE 9
int main()
{
	int end = 1;
	while (end)
	{
		char P[SIZE] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
		int i, XO, T = 0, flag = 1;
		printf("%d|%d|%d\n", 1, 2, 3);
		printf("-----\n");
		printf("%d|%d|%d\n", 4, 5, 6);
		printf("-----\n");
		printf("%d|%d|%d\n", 7, 8, 9);
		for (i = 0; i < 9 && flag; i++)
		{
			do
			{

				printf("Pleas choose where to plas X: ");
				scanf("%d", &XO);
				switch (XO) {
				case 1:
					if (P[0] == ' ')
					{
						P[0] = 'X';
						T = 0;
					}
					else T = 1;
					break;
				case 2:
					if (P[1] == ' ')
					{
						P[1] = 'X';
						T = 0;
					}
					else T = 1;
					break;
				case 3:
					if (P[2] == ' ')
					{
						P[2] = 'X';
						T = 0;
					}
					else T = 1;
					break;
				case 4:
					if (P[3] == ' ')
					{
						P[3] = 'X';
						T = 0;
					}
					else T = 1;
					break;
				case 5:
					if (P[4] == ' ')
					{
						P[4] = 'X';
						T = 0;
					}
					else T = 1;
					break;
				case 6:
					if (P[5] == ' ')
					{
						P[5] = 'X';
						T = 0;
					}
					else T = 1;
					break;
				case 7:
					if (P[6] == ' ')
					{
						P[6] = 'X';
						T = 0;
					}
					else T = 1;
					break;
				case 8:
					if (P[7] == ' ')
					{
						P[7] = 'X';
						T = 0;
					}
					else T = 1;
					break;
				case 9:
					if (P[8] == ' ')
					{
						P[8] = 'X';
						T = 0;
					}
					else T = 1;
					break;
				default:
					printf("error!");
					break;
				}
			} while (T || XO < 1 && XO>9);
			printf("%1c|%1c|%1c\n", P[0], P[1], P[2]);
			printf("-----\n");
			printf("%1c|%1c|%1c\n", P[3], P[4], P[5]);
			printf("-----\n");
			printf("%1c|%1c|%1c\n", P[6], P[7], P[8]);
			if ((P[0] == 'X' && P[1] == 'X' && P[2] == 'X') ||
				(P[3] == 'X' && P[4] == 'X' && P[5] == 'X') ||
				(P[6] == 'X' && P[7] == 'X' && P[8] == 'X') ||
				(P[0] == 'X' && P[4] == 'X' && P[8] == 'X') ||
				(P[6] == 'X' && P[4] == 'X' && P[2] == 'X') ||
				(P[0] == 'X' && P[3] == 'X' && P[6] == 'X') ||
				(P[1] == 'X' && P[4] == 'X' && P[7] == 'X') ||
				(P[2] == 'X' && P[5] == 'X' && P[8] == 'X')||(i==4))
			{
				if (!((P[0] == 'X' && P[1] == 'X' && P[2] == 'X') ||
					(P[3] == 'X' && P[4] == 'X' && P[5] == 'X') ||
					(P[6] == 'X' && P[7] == 'X' && P[8] == 'X') ||
					(P[0] == 'X' && P[4] == 'X' && P[8] == 'X') ||
					(P[6] == 'X' && P[4] == 'X' && P[2] == 'X') ||
					(P[0] == 'X' && P[3] == 'X' && P[6] == 'X') ||
					(P[1] == 'X' && P[4] == 'X' && P[7] == 'X') ||
					(P[2] == 'X' && P[5] == 'X' && P[8] == 'X')))
					printf("no one won!\n");
				else printf("x won!\n");
				flag = 0;
			}
			else{
				do {
					printf("Pleas choose where to plas O: ");
					scanf("%d", &XO);
					switch (XO) {
					case 1:
						if (P[0] == ' ')
						{
							P[0] = 'O';
							T = 0;
						}
						else T = 1;
						break;
					case 2:
						if (P[1] == ' ')
						{
							P[1] = 'O';
							T = 0;
						}
						else T = 1;
						break;
					case 3:
						if (P[2] == ' ')
						{
							P[2] = 'O';
							T = 0;
						}
						else T = 1;
						break;
					case 4:
						if (P[3] == ' ')
						{
							P[3] = 'O';
							T = 0;
						}
						else T = 1;
						break;
					case 5:
						if (P[4] == ' ')
						{
							P[4] = 'O';
							T = 0;
						}
						else T = 1;
						break;
					case 6:
						if (P[5] == ' ')
						{
							P[5] = 'O';
							T = 0;
						}
						else T = 1;
						break;
					case 7:
						if (P[6] == ' ')
						{
							P[6] = 'O';
							T = 0;
						}
						else T = 1;
						break;
					case 8:
						if (P[7] == ' ')
						{
							P[7] = 'O';
							T = 0;
						}
						else T = 1;
						break;
					case 9:
						if (P[8] == ' ')
						{
							P[8] = 'O';
							T = 0;
						}
						else T = 1;
						break;
					default:
						printf("error!");
						break;
					}
				} while (T || XO < 1 && XO>9);
				printf("%1c|%1c|%1c\n", P[0], P[1], P[2]);
				printf("-----\n");
				printf("%1c|%1c|%1c\n", P[3], P[4], P[5]);
				printf("-----\n");
				printf("%1c|%1c|%1c\n", P[6], P[7], P[8]);
				if ((P[0] == 'O' && P[1] == 'O' && P[2] == 'O') ||
					(P[3] == 'O' && P[4] == 'O' && P[5] == 'O') ||
					(P[6] == 'O' && P[7] == 'O' && P[8] == 'O') ||
					(P[0] == 'O' && P[4] == 'O' && P[8] == 'O') ||
					(P[6] == 'O' && P[4] == 'O' && P[2] == 'O') ||
					(P[0] == 'O' && P[3] == 'O' && P[6] == 'O') ||
					(P[1] == 'O' && P[4] == 'O' && P[7] == 'O') ||
					(P[2] == 'O' && P[5] == 'O' && P[8] == 'O'))
				{
					printf("O won!\n");
					flag = 0;
				}
			}
	}
	printf("for new game press 1 to exit press 0: ");
	scanf("%d", &end);
	if (end != 0)
		end = 1;
    }
	return 0;
}