#include <stdio.h>
#include <string.h>
//NameCard 명함
//	이름, 회사명, 직급 - int, 연락처
struct NameCard {
	char name[20];//20
	char company[30];//32
	int position;//4
	char tel[11];//12
};
struct NameCard list[20];
int index = 0;
//데이터 등록 - NameCard 정보 등록 --> list 배열에 저장
void AddNameCard() {
	if (index == 20) {
		printf("더이상 데이터를 저장할 수 없습니다.");
		return;
	}
	//데이터 등록 처리
	printf("NameCard 등록을 시작합니다.\n");
	printf("이름 : ");
	scanf_s("%s", list[index].name, sizeof(list[index].name));
	printf("회사명 : ");
	scanf_s("%s", list[index].company, sizeof(list[index].company));
	printf("직급 : ");
	scanf_s("%d", &list[index].tel);
	printf("연락처 : ");
	scanf_s("%s", list[index].tel, sizeof(list[index].tel));
	index++;
	printf("데이터 등록이 완료 되었습니다.\n");
}
//데이터 검색 - 이름을 받아서 검색
struct NameCard* searchNameCard() {
	char name[20];
	int i;
	printf("검색을 시작합니다. 검색할 이름을 입력하세요\n");
	scanf_s("%s", name, 20);

	for (i = 0; i < index; i++) {
		if (strcmp(name, list[i].name) == 0)
			return &list[i];
	}
	printf("검색 결과가 없습니다.\n");
	return NULL;
}
//데이터 삭제 - 이름으로 검색해서 삭제
void deleteNameCard() {
	int i;
	printf("삭제를 시작하겠습니다.");
	struct NameCard* card = searchNameCard();
	printf("삭제할 데이터 : %s %s %d %s\n", card->name, card->company,
		card->position, card->tel);
		
	while (card != &list[index]) {
		*card = *(card + 1);
		//printf("%d\n", card);
		card++;
	}
	index--;
}
//데이터 수정 - 이름으로 검색 후 데이터 입력을 받아서 수정
void updateNameCard() {
	//수정할 NameCard 검색
	printf("NameCard 수정 작업을 시작합니다.");
	struct NameCard *card = searchNameCard();
	//수정할 데이터 전부를 입력 받아서 변경
	printf("수정할 이름 : ");
	scanf_s("%s", card->name, 20);
	printf("수정할 회사명 : ");
	scanf_s("%s", card->company, 30);
	printf("수정할 직급 : ");
	scanf_s("%d", &card->position);
	printf("수정할 연락처 : ");
	scanf_s("%s", card->tel, 12);
	printf("수정 작업 완료\n");
}


//전체 NameCard 목록 출력
void printAllNameCard() {
	int i;
	for (i = 0; i < index; i++) {
		printf("%s %s %d %s\n", list[i].name, 
			list[i].company, list[i].position, list[i].tel);
	}
}

//데이터 초기화
void init() {
	//데이터를 임의로 4건
	strcpy(list[index].name, "홍길동");
	strcpy(list[index].company, "ABC마트");
	list[index].position = 3;
	strcpy(list[index].tel, "01012345678");
	index++;
	strcpy(list[index].name, "김철수");
	strcpy(list[index].company, "N사");
	list[index].position = 2;
	strcpy(list[index].tel, "01011112222");
	index++;
	strcpy(list[index].name, "이영수");
	strcpy(list[index].company, "K사");
	list[index].position = 4;
	strcpy(list[index].tel, "01033334444");
	index++;
	strcpy(list[index].name, "박문수");
	strcpy(list[index].company, "C카페");
	list[index].position = 7;
	strcpy(list[index].tel, "01000006789");
	index++;
}
int main(void) {
	init();
	int no=0;
	do {
		printf("--NameCard 메뉴--\n");
		printf("1. NameCard 등록\n");
		printf("2. NameCard 검색\n");
		printf("3. NameCard 삭제\n");
		printf("4. NameCard 수정\n");
		printf("5. NameCard 전체 출력\n");
		printf("0. 프로그램 종료\n");
		printf("원하시는 메뉴 번호를 입력하세요 :");
		scanf_s("%d", &no);
		switch (no) {
		case 1:
			AddNameCard();
			break;
		case 2:
			searchNameCard();
			break;
		case 3:
			deleteNameCard();
			break;
		case 4:
			updateNameCard();
			break;
		case 5:
			printAllNameCard();
			break;
		}
	} while (no != 0);


	return 0;
}