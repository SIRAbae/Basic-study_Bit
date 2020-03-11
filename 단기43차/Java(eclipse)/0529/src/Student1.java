/*
 * 만약 학벙을 저장하고자 한다면??
 * - 학번의 타입이 정해져 있지 않다면??(String or int)
 * -2) 대안 : 제네릴 == 일반화 == 템플릿 * 
 */
public class Student1 <T> {
	private T number;
	public void set (T _number) {
		number = _number;
	}
	
	public T get() {
		return number;
	}
	
}
