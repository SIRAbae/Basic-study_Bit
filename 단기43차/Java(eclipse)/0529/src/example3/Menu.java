package example3;

public class Menu {
	private String name;  //이름
	private int price;   // 가격
	private int Selcount; // 판매수량
	
	
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
		System.out.println("메뉴명 : " + name);
		System.out.println("가격 : " + price);
		System.out.println("판매수량 : " + Selcount);
	}
	
	@Override
	public String toString() {
		return String.format("%s\t%d원\t%d개", name, price, Selcount);
	}
}

