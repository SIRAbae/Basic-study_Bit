import java.util.Scanner;

//Bank 가 Wbarry를 소유하고 있다. (has a 3번째패턴, 생성주기를 동일하게)
public class Bank {
	private Wbarray acclist;
	private Scanner scan = new Scanner(System.in);
	
	public Bank() {
		acclist = new Wbarray(10);
	}
	
	public void Makeaccount() {
		
		try {
		System.out.println("이    름 : ");
		String name = scan.nextLine();
		
		System.out.print(" 입 금 액 : ");
		int money = Integer.parseInt(scan.nextLine());
		
		Account acc = new Account(name, money);
		
		acclist.push_back(acc);
		System.out.println("계좌가 저장되었습니다.");
	} catch (Exception e) {
		System.out.println("저장 에러 : " + e.getMessage());
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
		System.out.println("전체출력에러 : " + e.getMessage());
	}
	public void selectaccount() {
		System.out.print("검색할 이름 : ");
		String name = scan.nextLine();
		
		int idx = NameToIdx(name);
		Account acc = acclist.getAccount(idx);
		acc.print();
	}
	catch(Exception e) {
		System.out.println("검색 에러" + e.getMessage());
	}
	public void Addmoney() {
		System.out.print("입금할 계좌 고객명 : ");
		String name = scan.nextLine();
		
		int idx = NameToIdx(name);
		Account acc = acclist.getAccount(idx);
		acc.print();
	
		System.out.print("입금액 : ");
	int money = Integer.parseInt(scan.nextline());
	acc.inputmoney(money);

	System.out.print("입금되었슴니다.");
	
	}
	catch(Exception e) {
		System.out.println("검색 에러" + e.getMessage());
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
