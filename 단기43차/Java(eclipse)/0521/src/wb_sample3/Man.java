package wb_sample3;

public class Man {
	private String name;
	private Gun gun;
	
	public Man(String _name) {
		setName(_name);
		gun = new Gun(5);
	}
	
	public String getName() {
		return name;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	
/*	public void pickGun(Gun gun) {
		
	}
	*/
	public int Shot() throws Exception {
		if(gun==null) {
			throw new Exception("���� ����.");
		}
		gun.shot();
		return gun.getcount();
		
	}

}
