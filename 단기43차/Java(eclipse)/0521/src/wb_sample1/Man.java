package wb_sample1;

public class Man {
	private String name;
	private Gun gun;
	
	public Man(String _name) {
		name=_name;
		gun= null;
	}
	
	public String getName() {
		return name;
	}
	
	public void setName(String name) {
		
	}
	
	public void pickGun(Gun gun) {
		
	}
	
	public int Shot() throws Exception {
		if(gun==null) {
			throw new Exception("ÃÑÀÌ ¾ø´Ù.");
		}
		gun.shot();
		return gun.getcount();
		
	}

}
