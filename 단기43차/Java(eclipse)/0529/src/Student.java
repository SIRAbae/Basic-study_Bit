/*
 * page 344, 257(Wrapper 클래스 : 멤버변수로  value형 타입을 갖는 클래스)
 * 
 *  만약 학벙을 저장하고자 한다면??
 * - 학번의 타입이 정해져 있지 않다면??(String or int)
 * -1) 대안 : Object
 */
public class Student {
	private Object number;
	
	public void set(Object value) {
		number = value;
	}
	
	public Object get() {
		return number;
		
	}
}
