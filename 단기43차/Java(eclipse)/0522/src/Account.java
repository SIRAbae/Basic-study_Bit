import java.util.Calendar;

public class Account {
	
	private String name;	//이름
	private int accid; 		//계좌번호 : 계좌 생성시 자동으로
							//시작점 : 1000, 증가 + 10
	private int balance;	//잔액
	private Calendar date;	//개설일자(page 157)
	private static int s_accid = 1000;

	//생성자/초기화
	public Account(String _name) {
		this(_name, 0);
	}

	public Account(String _name, int _money) {
	setName(_name);
	setAccid(s_accid);
	s_accid = s_accid +10;
	setBalance(_money);
	setDate(Calendar.getInstance());
	}

	public String getName() {
		return name;
	}

	private void setName(String name) {
		this.name = name;
	}

	public int getAccid() {
		return accid;
	}

	private void setAccid(int accid) {
		this.accid = accid;
	}

	public int getBalance() {
		return balance;
	}

	private void setBalance(int balance) {
		this.balance = balance;
	}

	public Calendar getDate() {
		return date;
	}

	private void setDate(Calendar date) {
		this.date = date;
	}


	public void inputmoney(int money) throws Exception {
		if (money <= 0)
			throw new Exception("마이너스 입금 불가");
		
		setBalance(balance + money);
	}
	
	public void outputmoney(int money) throws Exception {
		if (money <= 0)
			throw new Exception ("마이너스 입금 불가");
		
		if (money > balance)
			throw new Exception("잔액 부족");
		
		setBalance(balance - money);
	}
	
	public void printline() {
		System.out.print(name + "\t");
		System.out.print(accid + "\t");
		System.out.print(balance + "원\t");
		System.out.println(date);
	}
	
	public void print() {
		System.out.println("[이     름]" + name);
		System.out.println("[계좌번호]" + accid);
		System.out.println("[잔     액]" + balance + "원");
		System.out.println("[개설일시]" + date);
	}
}
