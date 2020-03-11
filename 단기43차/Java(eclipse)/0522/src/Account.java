import java.util.Calendar;

public class Account {
	
	private String name;	//�̸�
	private int accid; 		//���¹�ȣ : ���� ������ �ڵ�����
							//������ : 1000, ���� + 10
	private int balance;	//�ܾ�
	private Calendar date;	//��������(page 157)
	private static int s_accid = 1000;

	//������/�ʱ�ȭ
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
			throw new Exception("���̳ʽ� �Ա� �Ұ�");
		
		setBalance(balance + money);
	}
	
	public void outputmoney(int money) throws Exception {
		if (money <= 0)
			throw new Exception ("���̳ʽ� �Ա� �Ұ�");
		
		if (money > balance)
			throw new Exception("�ܾ� ����");
		
		setBalance(balance - money);
	}
	
	public void printline() {
		System.out.print(name + "\t");
		System.out.print(accid + "\t");
		System.out.print(balance + "��\t");
		System.out.println(date);
	}
	
	public void print() {
		System.out.println("[��     ��]" + name);
		System.out.println("[���¹�ȣ]" + accid);
		System.out.println("[��     ��]" + balance + "��");
		System.out.println("[�����Ͻ�]" + date);
	}
}
