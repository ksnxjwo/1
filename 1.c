#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(void) {
	srand(time(NULL));

	char catname[100];
	printf("****야옹이와수프****\n\n");
	printf("@@@@@@\n\n");
	printf("야옹이의 이름을 지어주세요: "); 
	scanf_s("%s", catname, sizeof(catname));
	printf("야옹이의 이름은 %s입니다.\n", catname);
	
	Sleep(2500);
	system("cls");
	
	int lev = 2; int soup = 0;
	printf("==================== 현재상태===================\n");
	printf("현재까지만든수프: %d개\n", soup);
	printf("집사와의관계(0~4): %d\n", lev);
	if (lev == 0) {
		printf(" 곁에 오는 것 조차 싫어합니다.");
	}
	else if (lev == 1) {
		printf(" 간식자판기취급입니다.");
	}
	else if (lev == 2) {
		printf(" 그럭저럭쓸만한집사입니다.");
	}
	else if (lev == 3) {
		printf(" 훌륭한집사로인정받고있습니다.");
	}
	else {
		printf(" 집사껌딱지입니다.");
	}
	printf("\n==================================================\n");



	int interaction;
	printf("어떤 상호작용을 하시겠습니까?\n");
	printf("0. 아무 것도 하지 않음    1. 긁어 주기\n");
	printf(">>");
	while (1) {
		if (scanf("%d", &interaction) == 1) {
			if (interaction == 0 || interaction == 1) {
				break;
			}
		}
		while (getchar() != '\n');
		printf(">>");
		scanf_s("%d", &interaction);
	}


	if (interaction == 0) {
		printf("아무 것도 하지 않습니다.\n");
		printf("4/6확률로 친밀도가 떨어집니다.\n");
		printf("주사위를 굴립니다. 또르륵...\n");
		
		int dice = (rand() % 6) + 1;

		printf("%d(이)가 나왔습니다!\n", dice);
		if (dice > 4) {
			printf("다행이 친밀도가 떨어지지 않았습니다.");
		}
		else {
			lev --;
			printf("친밀도가 떨어집니다.");
		}
	}
	else{
		printf("%s의 턱을 긁어주었습니다.\n", catname);
		printf("2/6확률로 친밀도가 높아집니다.\n");
		printf("주사위를 굴립니다. 또르륵...\n");
		
		int dice = (rand() % 6) + 1;

		printf("%d(이)가 나왔습니다!\n", dice);
		if (dice > 4) {
			printf("친밀도가 높아집니다.");
			lev ++;
		}
		else {
			printf("친밀도는 그대로입니다.");
		}
	}
	printf("현재 친밀도: %d", lev);










	return 0;
}