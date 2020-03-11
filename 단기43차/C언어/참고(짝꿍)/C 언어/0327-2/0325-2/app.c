/*프로그램 흐름
초기화의 개념(최초 한번만) - app_init
반복흐름의 개념(엔진, 필요시 무한반복) - app_run
종료처리(종료시 한번만) - app_exit
*/

#include "std.h"

void app_init()
{
	logo();
}

void app_run()
{
	char idx;
	while (1)
	{
		system("cls");
		control_selectall();
		menuprint();
		idx = _getch(); //엔터가 필요없음, getchar() 엔터가 필요함
		switch (idx)
		{
		case '1': control_insert(); break;
		case '2': control_select(); break;
		case '3': control_update(); break;
		case '4': control_delete(); break;
		case '5': return; //함수를 종료시키는 키워드

		}
		system("pause");
	}
}

void app_exit()
{
	ending();
}

void logo()
{
	system("cls"); //콘솔화면을 지우는

	printf("*********************************************\n");
	printf(" 2019학년도 1학기 우송비트 단기과정\n");
	printf(" C언어 - 배열을 이용한 관리프로그램\n");
	printf(" 2019.03.27\n");
	printf(" Choi Chang Min\n");
	printf("*********************************************\n");

	system("pause"); //잠시 멈춤
}

void ending()
{
	system("cls"); //콘솔화면을 지우는

	printf("******************************************\n");
	printf(" C언어 프로그램을 종료합니다.\n");
	printf("******************************************\n");

	//system("pause"); //잠시 멈춤

}

void menuprint()
{
	printf("******************************************\n");
	printf(" [1] 저장(insert)\n");
	printf(" [2] 검색(select)\n");
	printf(" [3] 수정(update)\n");
	printf(" [4] 삭제(delete)\n");
	printf(" [5] 프로그램종료(exit)\n");
	printf("******************************************\n");

}