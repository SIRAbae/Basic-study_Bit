import java.util.Scanner; 
public class 과업 {
	public static void exam8() {
	Scanner scan = new Scanner(System.in);
		//1. 변수 선언
	System.out.println("정수 입력 : ");
	int num1 = Integer.parseInt(scan.nextLine());
	
	System.out.println("정수 입력 : ");
	int num2 = Integer.parseInt(scan.nextLine());
	
	int result = num1 % num2;
	
	System.out.println("결과 값 : " + result);
	}
	
	public static void exam9() {
		Scanner scan = new Scanner(System. in);
			//1. 변수 선언
		System.out.println("정수 입력 : ");
		int num1 = Integer.parseInt(scan.nextLine());
		
		int result = num1 * num1;
		
		System.out.println("결과 값 : " + result);
		}
	
	public static void exam10() {
	Scanner scan = new Scanner(System.in);
		//1. 변수 선언
	System.out.println("정수 입력 : ");
	int num1 = Integer.parseInt(scan.nextLine());
	
	
	int result = num1<<3;
	String a2 = Integer.toBinaryString(result);
	System.out.println(a2);
	}
	
	public static void main(String[]args) {
		exam10();
	}
}
