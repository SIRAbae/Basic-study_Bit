package example3;

public class Menu {
	private String name;  //�̸�
	private int price;   // ����
	private int Selcount; // �Ǹż���
	
	
	public Menu(String _name, int _price) {
			setName(_name);
			price = _price;
			Selcount = 0;
		}
	

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}
	
	public int getprice() {
		return price;
	}

	public void setprice(int price) {
			this.price = price;
		}
	
	public int getselcount() {
		return price;
	}

	public void setSelcount(int selcount) {
			this.Selcount = selcount;
		}
	
	public void Sel (int count) {
		setSelcount(getselcount() + count);
	}
	
	public void Print() {
		System.out.println("�޴��� : " + name);
		System.out.println("���� : " + price);
		System.out.println("�Ǹż��� : " + Selcount);
	}
	
	@Override
	public String toString() {
		return String.format("%s\t%d��\t%d��", name, price, Selcount);
	}
}

