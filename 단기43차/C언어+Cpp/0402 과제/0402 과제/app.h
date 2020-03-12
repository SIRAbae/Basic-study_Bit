#pragma once

void app_init();
void app_run();
void app_exit();


void logo();
void ending();
void menuprint();

/*[계좌관리프로그램]
1) 파일 분할(start/std.h, app, control, account)
start.c : main
std.h : 모든 헤더파일 모음
app.h/c : 실행(init, run, exit, menuprint, logo, ending)
control.h/c : 기능, 전역변수
account.h : 계좌구조체 정의

2) 정보
1. 계좌 정보 구조체
계좌번호, 이름, 잔액

2. 계좌 입출금 리스트 구조체
계좌번호, 입금액, 출금액, 잔액

3. 기능1 계좌기능
계좌번호, 이름, 잔액을 입력받아 저장
기능2 출력기능
메뉴 상단에 계좌의 정보를 출력
기능3 입금기능
입금액을 입력받아 잔액을 증가
기능4 출금기능
출금액을 입력받아 잔액을 감소

hint
1. 파일분할 및 main
2. app구성
메뉴 및 ...
switch/case
3. 구조체 정의
4. control 기능함수 구현
계좌기능
출력기능
입금기능
출금기능
*/
