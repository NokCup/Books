//switch goto 에 대해 배운다


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int choice;
	scanf("%d", &choice);

	// 첫번째 방법 (if문)
	/*
	if (choice == 1) printf("새게임");
	if (choice == 2) printf("불러오기");
	if (choice == 3) printf("설정");
	if (choice == 4) printf("크레딧"); */

	//두번째 방법 (switch 문)

	switch (choice) {			
	case 1:
		printf("새게임");
		break;				// break를 쓰면 스위치를 벗어난다. 쓰지 않으면 내가 입력하지 않았음에도 다음 케이스로 넘어간다.
	case 2:
		printf("불러오기");
		break;
	case 3:
		printf("설정");
		break;
	case 4:
		printf("크레딧");
		break;

	default:
		printf("잘못입력하셨습니다.");
		break;
	}



}