#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

bool iswin = true;
int Balance = 150;
int otkyp = 5000;

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "ru_RU.UTF-8");

	while (iswin) {
		system("cls");
		int bablo;
		int user_input;

		int dadep = 1 + rand() % 10;
		short minimal = 1;

		if (Balance <= 0) {
			Beep(500, 200);
			fprintf(stdout, "Ты обанкротился...");

			return;
		}

		fprintf(stdout, "твой баланс киви кошелька йоу: \033[36m%d\033[0m\n\n", Balance);

		fprintf(stdout, "Васап, мабой у тебя отжали гуфи квартирку теперь тебе нужно отыграться и залутать 5000 НО С КАЖДЫМ ПРОИГРЫШОМ ОНО УВЕЛИЧИВАЕТСЯ НА 1000\n");

		fprintf(stdout, "скока ты поставишь своих кровных? : ");
		scanf_s("%d", &bablo);

	    if (bablo == 0) {
			printf("так незя братан");
			Sleep(5000);
			continue;
		}

		if (bablo > Balance) {
			fprintf(stdout, "на вашем киви кошельке не достачечно мани мани бро\n");
			continue;
		}

		fprintf(stdout, "ай ай числищко то выпало угадывай иначе твои мани мани пропадут число от 1 до 10 действуй\n");

		scanf_s("%d", &user_input);



		if (abs(user_input - dadep) <= minimal) {
			fprintf(stdout, "емае мой велосипед ты угадал да ну нафег");
			Sleep(5000);
			Balance += (bablo * 2);
		}
		else if (user_input == 0) {
			printf("так незя братан");
		}
		else {

			fprintf(stdout, "ХАХАХАХАХАХАХАХАХА ТЫ ПРОИГРАЛ");
			Sleep(5000);
			Balance /= (bablo / 2.0);
			otkyp += 1000;
		}

		if (Balance >= otkyp) {
			printf("о черт ты выиграл!");
			Beep(500, 200);

			Sleep(5000);
			iswin = false;
			break;
		}
	}

	return 0;
}
