import java.util.Random;
import java.util.Scanner;

public class start {
	static Scanner scan = new Scanner (System.in);
	
	//�迪 ��ü ���� [**�迭�� 4���� ����**]
	public static void exam1() {
		//1. �迭 ���� ���� �׸��� �迭 ����
		int[] arr1;
		arr1 = new int[5];
		arrprint(arr1); //<===========��¿�û(�Լ��� ȣ���ڵ�)
	
		//2. �迭 ����� ���ÿ� �ʱ�ȭ
		int[] arr2 = {1,2,3,4,5,6,7,8,9,10};
		arrprint(arr2);
		
		//3. �迭 ����� ���̿� �ʱ�ȭ
		int[] arr3 = new int[5];
		arrprint(arr3);
		
		//4. �迭 ����� ���ÿ� �ʱ�ȭ
		int[] arr4 = new int[] {1,2};
		arrprint(arr4);
	}

	
	//������ 26���� �迭�� �����Ͻÿ�.
	// 1. ���� 26���� ������ �� �ִ� �迭�� ����
	// 2. �ش� �迭�� �����ڸ� ������� ����
	public static void exam2() {
		char[] arr3 = new char[26];
		
		for(int i=0; i<arr3.length; i++) {
			arr3[i] = (char)(97 + i);
		}
		
		arrprint(arr3);
	}
	
	//���� (1~99)�� ���� 100�� �����ϰ�, �� �հ� �ִ밪, �ּҰ�, ����� ���Ͻÿ�.
	public static void exam3() {
		int[] arr= new int[100];
		Random random = new Random();
		for(int i=0; i<arr.length; i++) {
		arr[i]=random.nextInt(99)+1; //1~98
	
		}
		//�迭���
		arrprint(arr);
		//===========================
		int sum = 0;
		double average;
		for(int value : arr) {
			sum = sum + value;  //��
		}
		average = sum / arr.length;  //���
		
		int max = arr[0];
		int min = arr[0];
		for(int i=1; i<arr.length; i++) { //�ִ밪
			if(max < arr[i])
				max = arr[i];
			
			if(min > arr[i])
				min = arr[i];
		}
		// ================================ ��
		System.out.println("�� : " + sum);
		System.out.println("��� : " + average);
		System.out.println("�ִ밪 : " + max);
		System.out.println("�ּҰ� : " + min);
		
	}
	
	public static void exam4() {
		int[] lott = new int[45];
		for(int i=0; i<lott.length; i++) {
			lott[i] = i+1;
		}
		//=====================================
		Random  r = new Random();
		for(int i=0; i<1000; i++) {
			int idx1 = r.nextInt(45);
			int idx2 = r.nextInt(45);
			int temp = lott[idx1];
			lott[idx1] = lott[idx2];
			lott[idx2] = temp;
		}
		System.out.println("��÷��ȣ");
		for (int i=0; i<6; i++) {
			System.out.println(lott + ",");
		}
		System.out.println("");
	}
	
	//�迭�� ����
	//A �迭�� ������ �ִ� ���� B�迭�� �����ϰ� �ʹ�.
	public static void exam5() {
		int [] arr1= {1,2,3,4,5};
		//���1)
		int[] arr2 = arr1;
		arrprint(arr1);
		arrprint(arr2);
		
		//====================================
		//���2)
		int[] arr3 = arr1.clone(); // arr1 : 1,2,20,4,5
		                           // arr3 : 1,2,20,4,5
		                           // arr1 : 1,2,30,4,5
		
		arr1[2] = 30;
		
		arrprint(arr1);
		arrprint(arr3);
	}
	
	//2���� �迭
	public static void exam6() {
		
		//1. �迭 ���� ���� �׸��� �迭 ����
				int[][] arr1;
				arr1 = new int[3][5];
				arrprint1(arr1); //<===========��¿�û(�Լ��� ȣ���ڵ�)
			
				
				//2. �迭 ����� ���ÿ� �ʱ�ȭ
				int[][] arr2 = {{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}};
				arrprint1(arr2);
			
				
				//3. �迭 ����� ���̿� �ʱ�ȭ
				int[][] arr3 = new int[3][5];
				arrprint1(arr3);
				
				//4. �迭 ����� ���ÿ� �ʱ�ȭ
				int[][] arr4 = new int[][] {{1,2,3,4,5},
					{6,7,8,9,10}, 
					{11,12,13,14,15}};
				arrprint1(arr4);
	
	}

	//2���� �迭�� ���� : ���� �迭 ****
	public static void exam7() {
		
		//1. �迭 ���� ���� �׸��� �迭 ����
		int[][] arr1;
		arr1 = new int[3][]; // exam6�� �ٸ��� �ڿ� ���� ���ǵ��� �ʾҴ�. ��������� ����.
		arr1[0] = new int[2];
		arr1[1] = new int[3];
		arr1[2] = new int[4];
		arrprint1(arr1); //<===========��¿�û(�Լ��� ȣ���ڵ�)
	
		
		//2. �迭 ����� ���ÿ� �ʱ�ȭ
		int[][] arr2 = {{1,2}, {6,7,8}, {11}};
		arrprint1(arr2);
	
		
		//3. �迭 ����� ���̿� �ʱ�ȭ
		int[][] arr3 = new int[3][];
		arr3[0] = new int[3];
		arr3[1] = new int[2];
		arr3[2] = new int[1];
		arrprint1(arr3);
		
		//4. �迭 ����� ���ÿ� �ʱ�ȭ
		int[][] arr4 = new int[][] {{1,2,3,4,5},
			{6,7,8,9,10}, 
			{11,12,13,14,15}};
		arrprint1(arr4);
	}
	
	public static void exam8() {
		try {
		int [] arr = {1,2,3};
		int value = arr[3];
		
		System.out.println(value); // 2
	}
	catch(Exception ex) {
		System.out.println("���� �߻�");
		System.out.println(ex.getMessage());
	}
	}
	//2���� �迭 ���
	public static void arrprint1(int [][] arr) {
		
		System.out.println("�迭�� ���� ���� : " + arr.length);
		
		for(int i = 0; i<arr.length; i++) {
			for(int j=0; j<arr[i].length; j++) {
				System.out.printf("arr[%d][%d] = %d" , i, j, arr[i][j]);
		
			}
			System.out.println("");
		}
		System.out.println("");
	}
	
	public static void arrprint(char [] arr) { //�Ű�����, ���Կ��� [arr1 = �����ִ� int[]arr]
		
		System.out.println("�迭�� ���� : " + arr.length);
	
		for(int i = 0; i<arr.length; i++) {
		System.out.print(arr[i]+",");
		}
		System.out.println("");
	
	}
	
	//�迭 ��� ��ü ���(��ȸ)
	public static void arrprint(int [] arr) { //�Ű�����, ���Կ��� [arr1 = �����ִ� int[]arr]
	
		System.out.println("�迭�� ���� : " + arr.length);
	
		for(int i = 0; i<arr.length; i++) {
		System.out.print(arr[i]+",");
		}
		System.out.println("");
	
	}
	
	public static void main(String[] args) {
		exam1();
	}
}
