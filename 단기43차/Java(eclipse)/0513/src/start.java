
public class start {
	public static void exam1() {
		byte a = 10; // page32 : -128~127
		
		System.out.println("a 의값 : " +a);
	}
	public static void exam2() {
		int num1 = 90;
		long dnum1;
		dnum1 =num1;    // double = int  => double = (double)int (자동)암시적인 형태변환
		System.out.println(dnum1);
		
		int num2;
		dnum1 = 2147483647;
		num2 = (int)dnum1; //int = dounle X 명시적인 형태변환
		System.out.println(num2);
	}
	/*
	 * 사용자로부터 1개의 정수값을 입력받고,
	 * PI라는 이름의 상수를 선언하시오.(단, PI는 3.14의 값을 갖는다.)
	 * result 이름의 double형 변수를 선언하고 num1 * num1* 3.14의 값을
	 * 저장하시오.
	 * result 값을 출력하시오. 
	 */
	/*
	public static void exam3() {
		//2. 정수(int)
		Scanner Scan = new Scanner(System.in);
		System.out.print("정수 입력 :");
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
	 * 저장 단위 : byte(바이트)
	 * 1byte = 8bit(비트)   비트, 최소단위
	 * 	 
	 */
	public static void exam6() {
		//int : 4byte == 32bit
		//16진수 표기시 : 하나의 숫자는 4bit크기를 가진다.
		int num = 0x01020504;  //16진수의 표현법 16909060
		System.out.println(num);
		
		
		
	
		//비트마스크 : & 내가 보고 싶은 자리의 값만 보는 방법
		//하위위 4bit의 값?
		System.out.println(num & 0xf);
	}
	
	public static void exam7() {
		int value = 0; //8bit라고 가정하면. 0000 0000
		
		//2번째 비트를 키고싶다!! : |
		value = value | 2;
		//4번재 비트를 키고싶다!!
		value = value | 8;
		//4번째 비트를 끄고 싶다!!: &~
		value = value &~ 8;
		
		//4번째 비트를 확인하고 싶다!!!(비트마스크) : &
		int check = value & 8;
		
	}
	public static void main(String[]args) {
		exam6();
	}
}
