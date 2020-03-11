
public class Account {
	private int number;
	private String name;  //0~10
	private int balance;  //0~20
	
	Account() throws Exception{
		this(10, null, 10000);
	}


	Account(int num, String i,  int b) throws Exception{
		setNumber(num);
		setName(i);
		setBalance(b);
	}


	
	public int getNumber() {
		return number;
	}
	
	public void setNumber(int number) {
		
		this.number = number;
	}
	
	public String getName() {
		return name;
	}
	
	public void setName(String name){
		this.name = name;
	}
	
	public int getBalance() {

		return balance;
	}
	
	public void setBalance(int balance) {
		
		this.balance = balance;
	}

	public void AddMoney(int value) throws Exception {
		if(value <0 ) {
			throw new Exception("마이너스 금액 입금오류");
		}
		setBalance(balance + value);
	}
	
	public void MinMoney(int value) throws Exception {
		if(balance < value ) {
			throw new Exception("잔액이 부족합니다.");
		}
		setBalance(balance - value);
	}
	
	
	public void Print() {
		System.out.println("===================================");
		System.out.println("[계좌]" + number);
		System.out.println("[이름]"+ name);
		System.out.println("[잔액]"+ balance);
		System.out.println("===================================");
	}
	
	
}