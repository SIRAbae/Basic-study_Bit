package example2;

public class Student {
	private String name;  //�̸�
	private int grad;   // �г�
	
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
		System.out.println("�̸� : " + name);
		System.out.println("�й� : " + grad);
	}
	
	@Override
	public String toString() {
		return String.format("%s\t%d", name, grad);
	}
}
