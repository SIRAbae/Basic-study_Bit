package example1;
/*
 * 덧셈객체 (정수1, 정수2, 결과값 / 연산가능, 출력가능 
 * 뺄셈객체 (정수1, 정수2, 결과값 / 연산가능, 출력가능)
 * 
 */
public class Start {
	public static void main(String[] args) {
		Cal cal = new Add(10, 20);
		Add add = new Add(20, 30);
		
		Cal cal = new Sub(10, 20);
		
		cal.Print();  // 10+ 20 = 30
		add.Print();  // 20+ 30 = 50
		cal.Print();  // 10- 20 = -10
	}
}
