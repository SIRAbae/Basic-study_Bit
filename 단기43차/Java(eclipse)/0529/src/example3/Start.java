package example3;
/*
 * [�޴���]
 * Menu(������Ŭ��)
 * - String name, int price, int salcount
 * - Print(), toString()
 * - Sel(int count) : sal count���� count ��ŭ ����
 * 
 * [���]
 * insert, select(�޴��̸�),
 * update(�޴��̸����� �˻� �� ���ݺ���)
 * delete(�޴��̸����� �˻� �� ����), printall
 * 
 */
import java.util.ArrayList;
import java.util.Scanner;
/*
 * ���ʸ� �÷��� Ŭ����
 */
public class Start {
	private MenuControl con = new MenuControl();
	private OrderControl ocon = new OrderControl();
	private Scanner scan = new Scanner(System.in);
	
	public void Run() {
		while(true) {
			System.out.println("[1] �޴� ���� ���");
			System.out.println("[2] �ֹ� ���ñ��");
			System.out.println("[3] ���α׷� ����");
			switch(scan.nextLine()) {
			case "1" : con.Run(); break;
			case "2" : ocon.Run(); break;
			case "3" : return;
			}
			
		}

	}
	public static void main(String [] str) {
		Start s = new Start();
		s.Run();
	}
}
