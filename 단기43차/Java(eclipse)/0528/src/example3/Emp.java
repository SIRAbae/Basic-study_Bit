package example3;


public class Emp extends Person implements Study {

	public Emp(String _name) {
		super(_name);
		
	}

	public void work() {
		System.out.println(toString() + ":" + "이 일한다.");
	}

	@Override
	public void study() {
		System.out.println(toString() + ":" + "이 공부한다.");
	}

	@Override
	public void Print() {
		System.out.println("직업 :"+ toString());
		System.out.println("부서 :"+ getPart());
	}

}
