package example3;
/*
 * [메뉴판]
 * Menu(데이터클라스)
 * - String name, int price, int salcount
 * - Print(), toString()
 * - Sel(int count) : sal count값을 count 만큼 증가
 * 
 * [기능]
 * insert, select(메뉴이름),
 * update(메뉴이름으로 검색 후 가격변경)
 * delete(메뉴이름으로 검색 후 삭제), printall
 * 
 */
import java.util.ArrayList;
import java.util.Scanner;
/*
 * 제너릭 컬렉션 클래스
 */
public class Start {
	private MenuControl con = new MenuControl();
	private OrderControl ocon = new OrderControl();
	private Scanner scan = new Scanner(System.in);
	
	public void Run() {
		while(true) {
			System.out.println("[1] 메뉴 관련 기능");
			System.out.println("[2] 주문 관련기능");
			System.out.println("[3] 프로그렘 종료");
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
