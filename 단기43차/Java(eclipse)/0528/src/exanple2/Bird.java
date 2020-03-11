
package exanple2;

public class Bird extends Animal implements IFly {
	
	public Bird(String _name) {
		super(_name);
	}
	
	@Override
	public void Sound() {
		System.out.println(toString() + ":" + "¤‹¤‹!!!");
	}

	@Override
	public void Fly() {
		System.out.println(toString() + ":" + "³­´Ù¿ä~~~~~~");
		
	}
}
