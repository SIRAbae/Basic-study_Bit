
public class Child extends Parent {// 부모와 자식의 관계를 만듬
	
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
	
	@Override//나는 이것을 부모에서 찾아보갰다.
	public void Print() {
		super.Print();
		System.out.println(" 숫자 : " + child_string )   ;
		
	}
}
