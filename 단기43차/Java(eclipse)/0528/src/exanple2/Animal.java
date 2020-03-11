package exanple2;

public abstract class Animal {
	
	private String name;
	
	public Animal(String _name) {
		name = _name;
	}
	@Override
	public String toString() {
		return name;
		
	}
	
	public abstract void Sound();
}
