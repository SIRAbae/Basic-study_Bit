
public class Start {
	public static void main(String[] args) {
		
		//String 타입을 저장할때
		Student stu = new Student();
		stu.set("192513");
		String number = (String)stu.get();
		System.out.println(number);
		
		
		//int 타입을 저장할 때
		Student stu1 = new Student();
		stu1.set(192513);  // Boxing : int -> Integer
		System.out.println((int)stu1.get());  // UnBoxing:Inter ->int
	//========================================================================
		Student1 <String>stu2 = new Student1 <String>();
		Student1 <Integer>stu3 = new Student1 <Integer>();
		
		stu2.set("292513");
		stu3.set(292513);
		
		String n1 = stu2.get();
		int n2 = stu3.get();
		
		
	}
	
	
}
