#include<stdio.h>   
#include<stdlib.h>   
#include<string.h>   
#include<time.h>   
#include<conio.h>   

void main() {

	char c = 0;
	char input[32];
	char show[32];
	char word[7][12] = { "kwangwoon", "unversity", "hospital","iphone","police","facebook","consentrate" };

	int select, len, unmatch;
	int a, b;

	srand((unsigned)time(NULL));

	printf(" ☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★\n");
	printf(" ★                                                                                                                    ☆\n");
	printf(" ☆                                             THIS IS HANGMAN GAME                                                   ★\n");
	printf(" ★                                                                                                                    ☆\n");
	printf(" ☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★\n");
	printf("       ⊂＼                                     ⊂＼                                     ⊂＼\n");
	printf("　      ＼＼ Λ＿Λ                              ＼＼ Λ＿Λ                              ＼＼ Λ＿Λ\n");
	printf("　　      ＼( 'ㅅ' )                               ＼( 'ㅅ' )                               ＼( 'ㅅ' )\n");
	printf("　　　      >　⌒ |                                  >　⌒ |                                  >　⌒ |\n");
	printf("　　　     / 　 へ＼                                / 　 へ＼                                / 　 へ＼\n");
	printf("　　      /　　/　＼＼                             /　　/　＼＼                             /　　/　＼＼ \n");
	printf("　　      |　ノ　　 ＼_つ                          |　ノ　　 ＼_つ                          |　ノ　　 ＼_つ\n");
	printf("　　     /　/                                     /　/                                     /　/\n");
	printf("　      /　/|                                    /　/|                                    /　/|\n");
	printf("　     (　(＼                                   (　(＼                                   (　(＼\n");
	printf("　     |　|、＼                                 |　|、＼                                 |　|、＼\n");
	printf("     　| / ＼ ⌒)                               | / ＼ ⌒)                               | / ＼ ⌒)\n");
	printf("     　| |　　) /                               | |　　) /                               | |　　) / \n");
	printf("      ノ )　　L/                               ノ )　　L/                               ノ )　　L/ \n\n\n"); 
	printf("      기회는 12번 입니다. \n      모두 맞출시 게임이 종료됩니다.\n");
	printf("      시작하시려면 y 키를 눌러주세요\n\t(y/n) : ");
	



	scanf_s(" %c", &c, 1);
	fflush(stdin);

	if (c == 'y') {

		select = rand() % 7;

		len = strlen(word[select]);

		for (a = 0; a < len; a++)

		{

			show[a] = '_';
			printf("_");

		}

		show[a] = 0;

		printf("\n\n");

		for (b = 0; b < 12; b++) {

			printf("소문자를 입력하세요.\n☞");

			scanf_s(" %c", &input[b], 1);

			for (a = 0; a<len; a++) {

				if (input[b] == word[select][a]) {

					show[a] = input[b];

					printf("%c가 단어안에 있습니다♪\n\n", input[b]);

				}

			}

			unmatch = 0;

			for (a = 0; a<len; a++) {

				if (show[a] == '_') {

					unmatch += 1;

				}

			}

			if (unmatch == 0) {

				printf("모두 맞추었습니다. %s\n", show);

				break;

			}

			printf("%s\n", show);

		}

	}

}