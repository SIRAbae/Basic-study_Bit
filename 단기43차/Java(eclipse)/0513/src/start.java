
public class start {
	public static void exam1() {
		byte a = 10; // page32 : -128~127
		
		System.out.println("a �ǰ� : " +a);
	}
	public static void exam2() {
		int num1 = 90;
		long dnum1;
		dnum1 =num1;    // double = int  => double = (double)int (�ڵ�)�Ͻ����� ���º�ȯ
		System.out.println(dnum1);
		
		int num2;
		dnum1 = 2147483647;
		num2 = (int)dnum1; //int = dounle X ������� ���º�ȯ
		System.out.println(num2);
	}
	/*
	 * ����ڷκ��� 1���� �������� �Է¹ް�,
	 * PI��� �̸��� ����� �����Ͻÿ�.(��, PI�� 3.14�� ���� ���´�.)
	 * result �̸��� double�� ������ �����ϰ� num1 * num1* 3.14�� ����
	 * �����Ͻÿ�.
	 * result ���� ����Ͻÿ�. 
	 */
	/*
	public static void exam3() {
		//2. ����(int)
		Scanner Scan = new Scanner(System.in);
		System.out.print("���� �Է� :");
		int num1 = Integer.parseInt(scan.nextLine());
	
		final double PI = 3.14;
	
		double result = num1* num1 * PI;
		
		System.out.println(result);
	}

*/
	public static void exam4() {
		int num1 = 1;
		int result;
		result = ++num1;
		System.out.println(num1 + "," + result);   //1,1
		
		result = num1++;
		System.out.println(num1 + "," + result); // 3, 2
	}

	public static void exam5() {
		int num1 = 1;
		int result = ++num1 + num1++;
		System.out.println(num1 + "," + result); //3, 4
		
		boolean b = true;
		System.out.println(b);
		
		System.out.println(B<4);
		
	}
	
	/*
	 * ���� ���� : byte(����Ʈ)
	 * 1byte = 8bit(��Ʈ)   ��Ʈ, �ּҴ���
	 * 	 
	 */
	public static void exam6() {
		//int : 4byte == 32bit
		//16���� ǥ��� : �ϳ��� ���ڴ� 4bitũ�⸦ ������.
		int num = 0x01020504;  //16������ ǥ���� 16909060
		System.out.println(num);
		
		
		
	
		//��Ʈ����ũ : & ���� ���� ���� �ڸ��� ���� ���� ���
		//������ 4bit�� ��?
		System.out.println(num & 0xf);
	}
	
	public static void exam7() {
		int value = 0; //8bit��� �����ϸ�. 0000 0000
		
		//2��° ��Ʈ�� Ű��ʹ�!! : |
		value = value | 2;
		//4���� ��Ʈ�� Ű��ʹ�!!
		value = value | 8;
		//4��° ��Ʈ�� ���� �ʹ�!!: &~
		value = value &~ 8;
		
		//4��° ��Ʈ�� Ȯ���ϰ� �ʹ�!!!(��Ʈ����ũ) : &
		int check = value & 8;
		
	}
	public static void main(String[]args) {
		exam6();
	}
}
