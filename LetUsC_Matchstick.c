#include <stdio.h>

main() {

	int sticks = 21, pulIgr, pulComp;
	printf("Ovo je igra Matchsticks. Pravila:\nThere are 21 matchsticks\nThe computer asks the player to pick 1, 2, 3, or 4 matchsticks.\nAfter the person picks, the computer does its picking.\nWhoever is forced to pick up the last matchstick loses the game.\nSrecno!\n\n");
	while (sticks > 1) {
		printf("Izvuci 1-4 sibice:\n", sticks);
		scanf_s("%d", &pulIgr, 4);
		sticks = sticks - pulIgr;
		printf("Posle tvog izvlacenja, na stoju je %d sibica (sibice)\n", sticks);
		if ((sticks >= 15) || (sticks==10) || (sticks == 5))
			pulComp = 4;
		else if ((sticks==14)||(sticks == 9) || (sticks == 4))
			pulComp = 3;
		else if ((sticks == 13) || (sticks == 8) || (sticks == 3))
			pulComp = 2;
		else if ((sticks == 12) ||(sticks==11)|| (sticks == 7) || (sticks == 2))
			pulComp = 1;
		else if (sticks == 6) {
			printf("Odlicno si odigrao - predajem partiju...\n");
			break;
		}
		printf("Ja (kompjuter) sam izvukao %d sibice\n\n", pulComp);
		sticks = sticks - pulComp;
		printf("Na stolu je ostalo %d sibica (sibice)\n", sticks);
	}

		if (sticks == 1)
			printf("Sada nemas izbora, poslednja sibica je tvoja - vise srece sledeci put!!\n\n");

}