package wb_sample2;

/*
 * has a 첫번째 패턴
 * 소유의 대성이 되는 객체를 생성
 * Man을 생성할 때 미리 생성된 객체를 전달
 */
public class start {
	public static void main(String[] args) {
		Gun gun = new Gun(5);
		Man man = new Man("홍길동", gun);
		
		
		try {
	//		man.PickGun(gun);
			int count = man.Shot();
			System.out.println("남은 총알 : " + count);
		}
		catch(Exception ex) {
			System.out.println(ex.getMessage());
		}
	}
}
