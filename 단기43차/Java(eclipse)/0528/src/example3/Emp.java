package example3;


public class Emp extends Person implements Study {

	public Emp(String _name) {
		super(_name);
		
	}

	public void work() {
		System.out.println(toString() + ":" + "�� ���Ѵ�.");
	}

	@Override
	public void study() {
		System.out.println(toString() + ":" + "�� �����Ѵ�.");
	}

	@Override
	public void Print() {
		System.out.println("���� :"+ toString());
		System.out.println("�μ� :"+ getPart());
	}

}
