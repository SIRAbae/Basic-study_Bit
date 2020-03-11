package example3;

import java.util.ArrayList;
import java.util.Scanner;


public class MenuControl {
	private ArrayList<Menu> datalist = new ArrayList<Menu>();
	private Scanner scan = new Scanner(System.in);
	
	private void PrintAll() {
		System.out.println("\t���尳�� :" + datalist.size());
		for(int i=0; i< datalist.size(); i++) {
			Menu menu = datalist.get(i);
			
			System.out.printf("\t[%d]", i);
			System.out.println(menu);  //stutoString() �̶� ���� �ڵ�
		}
	}
	
	private void Insert() {
		
		try {
		System.out.println(">> �޴��� :");
		String name = scan.nextLine();
		System.out.print(">> ���� : ");
		int price = Integer.parseInt(scan.nextLine());
		
		Menu menu = new Menu(name, price);
		
		datalist.add(menu);
		
		System.out.println(">> ����Ǿ����ϴ�.");
		}
		catch(Exception ex) {
			System.out.println("���� ���� : " + ex.getMessage());
		}
	}
		
	private void Select() {
			//�̸��� ������ �˻�
		try {	
		System.out.println(">> �˻��̸� :");
			String name = scan.nextLine();
			
			Menu menu = NameToStudent(name);
			
			menu.Print();
	}
		catch (Exception ex) {
			System.out.println("������� : " + ex.getMessage());
		}
	}
	
	
	
	public void Update() {
		//�̸��� ������ �˻� �� �г� ����
		try {
		System.out.println(">> ������ �̸� �Է� :");
		String name = scan.nextLine();
		System.out.println(">> ������ �г� �Է� :");
		int price = Integer.parseInt(scan.nextLine());
		
		Menu menu = NameToStudent(name);
		menu.setprice(price);
		
		System.out.println("����Ǿ����ϴ�.");
		}
		catch(Exception ex) {
			System.out.println("���� ���� : " + ex.getMessage());
		}
	}
	
	
	


	public void Delete() {
		//�̸��� ������ �˻� �� �г� ����
		try {
				System.out.println(">> ������ �̸� �Է� :");
				String name = scan.nextLine();
				
				Menu menu = NameToStudent(name);

				datalist.remove(menu);
				
				System.out.println("�����Ǿ����ϴ�.");
			}
		catch (Exception ex) {
			System.out.println("���� ���� : " + ex.getMessage());
		
			}
		}
	
	private Menu NameToStudent (String name) throws Exception {
		for (Menu menu : datalist) {
			if(menu.getName().equals(name) == true) {
				return menu;
				}
			}
		throw new Exception("����.");
	}
	
	public void Run() {
		while(true) {
			MenuPrint();
			switch(scan.nextLine()) {
			case "1" : Insert();  break; 
			case "2" : Select();  break;
			case "3" : Update();  break;
			case "4" : Delete();  break;
			case "5" : break;
			default : System.out.println("�߸� �Է�");
			}
			PrintAll();
		}
	}
	
	
	private void MenuPrint() {
		System.out.println("============================================================");
		System.out.println("[1] Insert  [2] Select  [3] Update [4] Delete [5 Exit]");
		System.out.println("============================================================");

	}
}
