
public class start {
	public static void main(String[] args) {
		Card.setHeight(500);
		System.out.println("īƮ ����(H) : " + Card.getHeight());
		System.out.println("īƮ ����(W) : " + Card.getWidth());
		
		Card card1 = new Card("S", 1);
		Card card2 = new Card("H", 11);
		
		card1.Print(true);
		card2.Print(true);
	}
}

/*
 * �ν��Ͻ��� [1,'S']/['J','h'] �� ������.
 * [100, 200]�� �����Ѵ�.
 */