package exanple2;

public class Pegasus extends Animal implements IRun, IFly{
	
	public Pegasus(String _name) {
		super(_name);
		
	}

	@Override
	public void Sound() {
		System.out.println(toString() + ":" + "��������!!!");
	}

	@Override
	public void Fly() {
		System.out.println(toString() + ":" + "���ٿ�~~~~");
		
	}

	@Override
	public void Run() {
		System.out.println(toString() + ":" + "�� �޸���~~~~");
		
	}
}