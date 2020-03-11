package wb_sample2;

public class Man {
	private String name;
	private Gun gun;
	
	public Man(String _name, Gun _gun) {
		name=_name;
		gun= _gun;
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
			throw new Exception("ÃÑÀÌ ¾ø´Ù.");
		}
		gun.shot();
		return gun.getcount();
		
	}

}
