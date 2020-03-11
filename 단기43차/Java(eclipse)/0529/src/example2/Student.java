package example2;

public class Student {
	private String name;  //이름
	private int grad;   // 학년
	
	public Student(String _name, int _grad) {
			setName(_name);
			setGrad(_grad);
		}
	

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getGrad() {
		return grad;
	}

	public void setGrad(int grad) {
		this.grad = grad;
	}
	public void Print() {
		System.out.println("이름 : " + name);
		System.out.println("학번 : " + grad);
	}
	
	@Override
	public String toString() {
		return String.format("%s\t%d", name, grad);
	}
}
