import java.util.Scanner;

public class start {
//���ڿ� ����
	public static void exam1() {
		System.out.println(10 + 20 + "30");
		System.out.println(10 + "20" + 30);
	}
	
	public static void exam2() {
		String str1 = "abc";
		String str2 = "abc";
		String str3 = new String("abc");
		String str4 = new String("abc");
		//====================================
		//���ڿ� ��
		if( str1 == str2) {
			System.out.println("����.1");
		}
		if( str3 == str4) {
			System.out.println("����.2");
		}
		
		if( str1.equals(str2)==true) {
			System.out.println("����.3");
		}
		if( str3.equals(str4)==true) {
			System.out.println("����.4");
		}
		if( str1.equals(str3)==true) {
			System.out.println("����.5");
		}
	}
	
	//whlile(�ݺ���)
	//��Ȳ1) �ݺ��� Ƚ���� ����  -> �Ϲ������� 0���� ����
	//Hello World�� 10�� ���!!
	public static void exam3() {
		
		//1.�ʱⰪ
		int i = 0;
		
		//�ݺ�
		while(i<10) {// 2.����
			
			//=========================================
			System.out.println("Hello wrold");
			//=========================================
			
			i++;  // 3.����
		}
	}
	
	//��Ȳ2) �ݺ��� Ƚ���� �����ϴ� ������ Ȱ�� -> Ȱ�뿡 �°� ���� ��ġ ����
	//���� 1���� 10���� ��� ������ ����ϰ� �ʹ�.
	public static void exam4() {
		
		int i = 1;
		
		//�ݺ�
		while(i<11) {// 2.����
			
			//=========================================
			System.out.println( i + "\t");
			//=========================================
			
			i++;  // 3.����
		}
	}
	
	//���� 1���� 10���� ��� Ȧ���� ������ ����ϰ� �ʹ�.
	public static void exam5() {
		
		int i = 1;
		
		//�ݺ�
		while(i<11) {// 2.����
			
			//=========================================
			System.out.println( i + "\t");
			//=========================================
			
			i=i+2;  // 3.����
		}
	}

	//���� 1���� 10���� ��� ¦���� ������ ����ϰ� �ʹ�.
	public static void exam6() {
	
	int i = 2;
	
	//�ݺ�
	while(i<11) {// 2.����
		
		//=========================================
		System.out.println( i + "\t");
		//=========================================
		
		i=i+2;  // 3.����
	}
}
	
	
	//���� 10���� 1���� Ȧ���� ������ ����ϰ� �ʹ�.
	public static void exam7() {
		
		int i = 9;
		
		//�ݺ�
		while(i>0) {// 2.����
			
			//=========================================
			System.out.println( i + "\t");
			//=========================================
			
			i=i-2;  // 3.����
		}
	}
	
	//��Ȳ3) �ݺ��� Ƚ���� �������� ���
	// ����ڷκ��� -1�� �Է��� �� ���� �ݺ��ؼ� ������ �Է¹޾ƶ�.
	public static void exam8() {

		Scanner scan = new Scanner(System.in);
		
		while(true) { //���ѷ���
			System.out.println("���� �Է� : ");
			int number = Integer.parseInt(scan.nextLine());
			
			if(number == -1) {
				break; //�ݺ����� ���������� Ű����**********
			}
		}
	}
	public static void main(String[] args) {
		exam8
		();
	}
}
