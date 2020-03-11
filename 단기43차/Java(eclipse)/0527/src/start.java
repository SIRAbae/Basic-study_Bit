
/*
 * 1) 자식객체 설정
 *  - 부모 생성 >> 자식 생성
 * 2) 객체 초기화
 *  - super()
 * 3) Override
 *  - 부모 멤버함수의 재정의  
 */

public class start {
	public static void main(String[] args) {
		Child child = new Child("문자열" , 10);  //child를 만들면 부모객체가 만들어 진다. 
		child.Print();
	}
	
}
