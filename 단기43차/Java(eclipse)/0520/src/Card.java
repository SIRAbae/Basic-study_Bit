/*
 * 카드 객체 생성--->
 *1) 추상화
 *	멤버변수(필드)
 *	>>> 폭, 높이, 모양, 숫자
 *	멤버함수(메서드)
 *	>>> 출력(모양/숫자)
 *	>>> 출력([폭/높이]모양/숫자)
 *	>>> 숫자를 주면 문자로 반환
 *2) 구현
 *	멤버변수 ----> 생성자 -> get/set --> method
 */
public class Card {
	//숫자 (은닉)
	private static int width = 200;         //클래스 멤버
	private static int height = 300;        //클래스 멤버
	private String shape;             //인스턴스 멤버
	private int number;               //인스턴스 멤버
	
	//생성자(public)
	public Card(String shape, int number) {
		this.setShape(shape);
		this.setNumber(number);
	}

	public static int getWidth() {
		return width;
	}

	
	// static 멤버 함수는 this 사용이 불가능하다.
	// why? 인스턴스 멤버가 아니기 때문, 클래스 맴버이다.
	public static void setWidth(int _width) {
		width = _width; //this를 쓸 수 있는건 인스턴스만 가능하다. 공유(static)은 사용 불가
	}

	public static int getHeight() {
		return height;
	}

	public static void setHeight(int _height) {
		height = _height;
	}

	public String getShape() {
		return shape;
	}

	private void setShape(String shape) {
		this.shape = shape;
	}

	public int getNumber() {
		return number;
	}

	private void setNumber(int number) {
		this.number = number;
	}
	
	public void Print() {
		try {
			System.out.println(shape + "," + NumberToChar(number));
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	public void Print(boolean b) {
		System.out.println("[" + width + "/" + height + "]");
		Print();
	}
	
	private char NumberToChar (int value) throws Exception {
	if(value >=1 && value <= 10) {
		return (char) ('0' + (char)value);
	}
	else if(value == 11) {
		return 'J';
	}
	else if(value == 12) {
		return 'Q';
	}
	else if(value == 11) {
		return 'K';

	}
	else {
		throw new Exception("잘못된 숫자");
	}
	}
	
}