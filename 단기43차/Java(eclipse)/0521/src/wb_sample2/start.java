package wb_sample2;

/*
 * has a ù��° ����
 * ������ �뼺�� �Ǵ� ��ü�� ����
 * Man�� ������ �� �̸� ������ ��ü�� ����
 */
public class start {
	public static void main(String[] args) {
		Gun gun = new Gun(5);
		Man man = new Man("ȫ�浿", gun);
		
		
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
