package wb_sample3;

/*
 * has a 첫번째 패턴
 * 모든 객체의 생명 주기가 동일(같이 생성)
 * 
 */
public class start {
	public static void main(String[] args) {
		Man man = new Man("홍길동");
		
		
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
