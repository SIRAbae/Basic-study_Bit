package wb_sample3;

/*
 * has a ù��° ����
 * ��� ��ü�� ���� �ֱⰡ ����(���� ����)
 * 
 */
public class start {
	public static void main(String[] args) {
		Man man = new Man("ȫ�浿");
		
		
		try {
	//		man.PickGun(gun);
			int count = man.Shot();
			System.out.println("���� �Ѿ� : " + count);
		}
		catch(Exception ex) {
			System.out.println(ex.getMessage());
		}
	}
}
