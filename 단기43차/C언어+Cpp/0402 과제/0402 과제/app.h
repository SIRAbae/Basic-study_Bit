#pragma once

void app_init();
void app_run();
void app_exit();


void logo();
void ending();
void menuprint();

/*[���°������α׷�]
1) ���� ����(start/std.h, app, control, account)
start.c : main
std.h : ��� ������� ����
app.h/c : ����(init, run, exit, menuprint, logo, ending)
control.h/c : ���, ��������
account.h : ���±���ü ����

2) ����
1. ���� ���� ����ü
���¹�ȣ, �̸�, �ܾ�

2. ���� ����� ����Ʈ ����ü
���¹�ȣ, �Աݾ�, ��ݾ�, �ܾ�

3. ���1 ���±��
���¹�ȣ, �̸�, �ܾ��� �Է¹޾� ����
���2 ��±��
�޴� ��ܿ� ������ ������ ���
���3 �Աݱ��
�Աݾ��� �Է¹޾� �ܾ��� ����
���4 ��ݱ��
��ݾ��� �Է¹޾� �ܾ��� ����

hint
1. ���Ϻ��� �� main
2. app����
�޴� �� ...
switch/case
3. ����ü ����
4. control ����Լ� ����
���±��
��±��
�Աݱ��
��ݱ��
*/
