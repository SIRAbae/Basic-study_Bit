/*
 * ī�� ��ü ����--->
 *1) �߻�ȭ
 *	�������(�ʵ�)
 *	>>> ��, ����, ���, ����
 *	����Լ�(�޼���)
 *	>>> ���(���/����)
 *	>>> ���([��/����]���/����)
 *	>>> ���ڸ� �ָ� ���ڷ� ��ȯ
 *2) ����
 *	������� ----> ������ -> get/set --> method
 */
public class Card {
	//���� (����)
	private static int width = 200;         //Ŭ���� ���
	private static int height = 300;        //Ŭ���� ���
	private String shape;             //�ν��Ͻ� ���
	private int number;               //�ν��Ͻ� ���
	
	//������(public)
	public Card(String shape, int number) {
		this.setShape(shape);
		this.setNumber(number);
	}

	public static int getWidth() {
		return width;
	}

	
	// static ��� �Լ��� this ����� �Ұ����ϴ�.
	// why? �ν��Ͻ� ����� �ƴϱ� ����, Ŭ���� �ɹ��̴�.
	public static void setWidth(int _width) {
		width = _width; //this�� �� �� �ִ°� �ν��Ͻ��� �����ϴ�. ����(static)�� ��� �Ұ�
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
		throw new Exception("�߸��� ����");
	}
	}
	
}