package exanple2;

public class Dog extends Animal implements IRun{
	
	public Dog(String _name) {
		super(_name);
	}
	
	@Override
	public void Sound() {
		System.out.println(toString() + ":" + "�۸�!!!!");
	}

	@Override
	public void Run() {
		System.out.println(toString() + ":" + "�޸���.~~~");
		
	}
	
}