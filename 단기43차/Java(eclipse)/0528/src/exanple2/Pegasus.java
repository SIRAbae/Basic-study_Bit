package exanple2;

public class Pegasus extends Animal implements IRun, IFly{
	
	public Pegasus(String _name) {
		super(_name);
		
	}

	@Override
	public void Sound() {
		System.out.println(toString() + ":" + "히히히힝!!!");
	}

	@Override
	public void Fly() {
		System.out.println(toString() + ":" + "난다요~~~~");
		
	}

	@Override
	public void Run() {
		System.out.println(toString() + ":" + "말 달린다~~~~");
		
	}
}