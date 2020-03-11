package example2;
/*
 * 미션
 * 1) person(String name, int age/ print) - 부모
 * 2) Student ( String suject / print 재정의) - 자식
 */
public class Start {
	public static void main(String[] args) {
		Student stu1 = new Student("홍길동", 10, "컴퓨터");
		Student stu2 = new Student("이길동", 20, "컴퓨터");
		
		stu1.Print();
		stu2.print();
		//학과만 비교할것
		if(stu1.equlas(stu2)) {
			System.out.println("동일학과");	
		}
		else {
			System.out.println("서로다른학과");
		}
	}
}
