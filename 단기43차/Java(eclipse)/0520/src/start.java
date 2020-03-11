
public class start {
	public static void main(String[] args) {
		Card.setHeight(500);
		System.out.println("카트 정보(H) : " + Card.getHeight());
		System.out.println("카트 정보(W) : " + Card.getWidth());
		
		Card card1 = new Card("S", 1);
		Card card2 = new Card("H", 11);
		
		card1.Print(true);
		card2.Print(true);
	}
}

/*
 * 인스턴스를 [1,'S']/['J','h'] 만 가진다.
 * [100, 200]은 공유한다.
 */