package example2;

public class Student {
	private String name;
	private int old;
	private String object1;
	
	public Student(String n, int o, String obj1) {
		name = n;
		old = o;
		object1 = obj1;
	}
	
	public void Print() {
		System.out.printf ("�̸� : " + name + "\t");
		System.out.printf ("���� : " + old + "\t");
		System.out.printf ("���� : " + object1 + "\t");
		
	}
	
	@Override
	public boolean equals(Object obj) {
		Student d = (Student)obj;
		
		if(suject.equals(d.suject))
			return true;
		else
			return false;
	}

}



