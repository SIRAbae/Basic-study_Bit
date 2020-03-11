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
			default : System.out.println("�߸� �Է�");
			}
		}
	}
	
	//�ֹ��������.
	private void Insert() {
		
		try {
		OrderList olist = new OrderList();
		System.out.println(">> ��� ������ �޴��� ���� :");
		int type = Integer.parseInt(scan.nextLine());
		for(int i = 0; i < type; i++) {
			System.out.print(">> �޴� : ");
			String name = scan.nextLine();
			System.out.print(">> ���� : ");
			int count = Integer.parseInt(scan.nextLine());
			
			Order order = new Order(name, count);
			olist.Add(order);
			
		}
		
		
		orders.add(olist);
		
		System.out.println(">> ����Ǿ����ϴ�.");

		}
		catch(Exception ex) {
			System.out.println("���� ���� : " + ex.getMessage());
		}
	}
	
	
	//�ֹ���ȣ�� ������ �˻�
	private void Select() {
	try {	
	System.out.println(">> �ֹ���ȣ :");
		int idx = Integer.parseInt(scan.nextLine());
		
		OrderList olist = IdxToOrlist(idx);
		
		olist.Print();
}
	catch (Exception ex) {
		System.out.println("������� : " + ex.getMessage());
	}
}
	
	private OrderList IdxToOrlist (int idx) throws Exception {
		for (OrderList olist : orders) {
			if(olist.getIdx() == idx) {
				return olist;
				}
			}
		throw new Exception("����.");
	}
	
	//�ֹ���ȣ�� �˻� �� ����
	public void Delete() {
		//�̸��� ������ �˻� �� �г� ����
		try {
				System.out.println(">> �ֹ���ȣ :");
				int idx = Integer.parseInt(scan.nextLine());
				
				OrderList olist = IdxToOrlist(idx);
				

				orders.remove(olist);
				
				System.out.println("�����Ǿ����ϴ�.");
			}
		catch (Exception ex) {
			System.out.println("���� ���� : " + ex.getMessage());
		
			}
		}
	
	private void PrintAll() {
		System.out.println("\t[�ֹ�����Ʈ] :" + orders.size());
		for(int i=0; i< orders.size(); i++) {
			OrderList olist = orders.get(i);
			
			System.out.printf("\t[%d]", i);
			olist.Print();
		}
	}
	
	private void MenuPrint() {
		System.out.println("=====================================================================================");
		System.out.println("[1] �ֹ� (Insert) [2]�ֹ���ü����Ʈ���  [3] �ֹ����� (Select) [4]�ֹ� ���(delete)  [5] Exit");
		System.out.println("=====================================================================================");

	}
}
