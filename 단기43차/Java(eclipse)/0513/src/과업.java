import java.util.Scanner; 
public class ���� {
	public static void exam8() {
	Scanner scan = new Scanner(System.in);
		//1. ���� ����
	System.out.println("���� �Է� : ");
	int num1 = Integer.parseInt(scan.nextLine());
	
	System.out.println("���� �Է� : ");
	int num2 = Integer.parseInt(scan.nextLine());
	
	int result = num1 % num2;
	
	System.out.println("��� �� : " + result);
	}
	
	public static void exam9() {
		Scanner scan = new Scanner(System. in);
			//1. ���� ����
		System.out.println("���� �Է� : ");
		int num1 = Integer.parseInt(scan.nextLine());
		
		int result = num1 * num1;
		
		System.out.println("��� �� : " + result);
		}
	
	public static void exam10() {
	Scanner scan = new Scanner(System.in);
		//1. ���� ����
	System.out.println("���� �Է� : ");
	int num1 = Integer.parseInt(scan.nextLine());
	
	
	int result = num1<<3;
	String a2 = Integer.toBinaryString(result);
	System.out.println(a2);
	}
	
	public static void main(String[]args) {
		exam10();
	}
}
