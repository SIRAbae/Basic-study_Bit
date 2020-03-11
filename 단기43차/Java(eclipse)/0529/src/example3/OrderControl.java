package example3;

import java.util.ArrayList;
import java.util.Scanner;

public class OrderControl {
	private ArrayList<OrderList> orders = new ArrayList<OrderList>();
	private Scanner scan = new Scanner(System.in);

	
	public void Run() {
		
		while(true) {
			MenuPrint();
			switch(scan.nextLine()) {
			case "1" : Insert();  break; 
			case "2" : PrintAll();  break;
//			case "3" : Select();  break;
			//case "4" : Delete();  break;
			case "5" : break;
			default : System.out.println("잘못 입력");
			}
		}
	}
	
	//주문정보출력.
	private void Insert() {
		
		try {
		OrderList olist = new OrderList();
		System.out.println(">> 몇가지 종류의 메누를 선택 :");
		int type = Integer.parseInt(scan.nextLine());
		for(int i = 0; i < type; i++) {
			System.out.print(">> 메뉴 : ");
			String name = scan.nextLine();
			System.out.print(">> 수량 : ");
			int count = Integer.parseInt(scan.nextLine());
			
			Order order = new Order(name, count);
			olist.Add(order);
			
		}
		
		
		orders.add(olist);
		
		System.out.println(">> 저장되었습니다.");

		}
		catch(Exception ex) {
			System.out.println("저장 실패 : " + ex.getMessage());
		}
	}
	
	
	//주문번호를 가지고 검색
	private void Select() {
	try {	
	System.out.println(">> 주문번호 :");
		int idx = Integer.parseInt(scan.nextLine());
		
		OrderList olist = IdxToOrlist(idx);
		
		olist.Print();
}
	catch (Exception ex) {
		System.out.println("저장실패 : " + ex.getMessage());
	}
}
	
	private OrderList IdxToOrlist (int idx) throws Exception {
		for (OrderList olist : orders) {
			if(olist.getIdx() == idx) {
				return olist;
				}
			}
		throw new Exception("없다.");
	}
	
	//주문번호로 검색 후 삭제
	public void Delete() {
		//이름을 가지고 검색 후 학년 삭제
		try {
				System.out.println(">> 주문번호 :");
				int idx = Integer.parseInt(scan.nextLine());
				
				OrderList olist = IdxToOrlist(idx);
				

				orders.remove(olist);
				
				System.out.println("삭제되었습니다.");
			}
		catch (Exception ex) {
			System.out.println("삭재 오류 : " + ex.getMessage());
		
			}
		}
	
	private void PrintAll() {
		System.out.println("\t[주문리스트] :" + orders.size());
		for(int i=0; i< orders.size(); i++) {
			OrderList olist = orders.get(i);
			
			System.out.printf("\t[%d]", i);
			olist.Print();
		}
	}
	
	private void MenuPrint() {
		System.out.println("=====================================================================================");
		System.out.println("[1] 주문 (Insert) [2]주문전체리스트출력  [3] 주문내역 (Select) [4]주문 취소(delete)  [5] Exit");
		System.out.println("=====================================================================================");

	}
}
