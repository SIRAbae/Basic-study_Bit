import java.util.Scanner;

//Bank �� Wbarry�� �����ϰ� �ִ�. (has a 3��°����, �����ֱ⸦ �����ϰ�)
public class Bank {
	private Wbarray acclist;
	private Scanner scan = new Scanner(System.in);
	
	public Bank() {
		acclist = new Wbarray(10);
	}
	
	public void Makeaccount() {
		
		try {
		System.out.println("��    �� : ");
		String name = scan.nextLine();
		
		System.out.print(" �� �� �� : ");
		int money = Integer.parseInt(scan.nextLine());
		
		Account acc = new Account(name, money);
		
		acclist.push_back(acc);
		System.out.println("���°� ����Ǿ����ϴ�.");
	} catch (Exception e) {
		System.out.println("���� ���� : " + e.getMessage());
	}	
	}
	//select
	public void Printallaccount() {
		for (int i = 0; i <acclist.getSize(); i++) {
			Account acc = acclist.getAccount(i);
			acc.printline();
		}
		
	}
	catch(Exception e) {
		System.out.println("��ü��¿��� : " + e.getMessage());
	}
	public void selectaccount() {
		System.out.print("�˻��� �̸� : ");
		String name = scan.nextLine();
		
		int idx = NameToIdx(name);
		Account acc = acclist.getAccount(idx);
		acc.print();
	}
	catch(Exception e) {
		System.out.println("�˻� ����" + e.getMessage());
	}
	public void Addmoney() {
		System.out.print("�Ա��� ���� ���� : ");
		String name = scan.nextLine();
		
		int idx = NameToIdx(name);
		Account acc = acclist.getAccount(idx);
		acc.print();
	
		System.out.print("�Աݾ� : ");
	int money = Integer.parseInt(scan.nextline());
	acc.inputmoney(money);

	System.out.print("�ԱݵǾ����ϴ�.");
	
	}
	catch(Exception e) {
		System.out.println("�˻� ����" + e.getMessage());
	}
	public void Minmoney() {
		
	}
	public void DeleteAccount() {
		
	}
	private int NameToIdx (String name) {
		
		for (int i = 0; i < acclist.getSize(); i++) {
			Account acc = acclist.getAccount(i);
			if(acc.getName())
		}
	}
}
