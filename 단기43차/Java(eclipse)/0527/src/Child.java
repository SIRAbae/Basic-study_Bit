
public class Child extends Parent {// �θ�� �ڽ��� ���踦 ����
	
	private String child_string; 
	
	public Child() {
		System.out.println("Child()");
	}
	
	public Child(String str) {
		child_string = str;
		System.out.println("Child(String)");
	}

	public Child(String str, int number) {
		super(number);
		child_string = str;
		System.out.println("Child(String, int)");
	}
	
	@Override//���� �̰��� �θ𿡼� ã�ƺ�����.
	public void Print() {
		super.Print();
		System.out.println(" ���� : " + child_string )   ;
		
	}
}
