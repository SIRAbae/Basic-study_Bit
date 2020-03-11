import java.util.Random;
import java.util.Scanner;

public class start {
	static Scanner scan = new Scanner (System.in);
	
	//배역 객체 생성 [**배열의 4가지 패턴**]
	public static void exam1() {
		//1. 배열 변수 선언 그리고 배열 생성
		int[] arr1;
		arr1 = new int[5];
		arrprint(arr1); //<===========출력요청(함수의 호출코드)
	
		//2. 배열 선언과 동시에 초기화
		int[] arr2 = {1,2,3,4,5,6,7,8,9,10};
		arrprint(arr2);
		
		//3. 배열 선언과 동싱에 초기화
		int[] arr3 = new int[5];
		arrprint(arr3);
		
		//4. 배열 선언과 동시에 초기화
		int[] arr4 = new int[] {1,2};
		arrprint(arr4);
	}

	
	//영문자 26개를 배열에 저장하시오.
	// 1. 문자 26개를 저장할 수 있는 배열을 생성
	// 2. 해당 배열에 영문자를 순서대로 저장
	public static void exam2() {
		char[] arr3 = new char[26];
		
		for(int i=0; i<arr3.length; i++) {
			arr3[i] = (char)(97 + i);
		}
		
		arrprint(arr3);
	}
	
	//난수 (1~99)의 값을 100개 저장하고, 그 합과 최대값, 최소값, 평균을 구하시오.
	public static void exam3() {
		int[] arr= new int[100];
		Random random = new Random();
		for(int i=0; i<arr.length; i++) {
		arr[i]=random.nextInt(99)+1; //1~98
	
		}
		//배열출력
		arrprint(arr);
		//===========================
		int sum = 0;
		double average;
		for(int value : arr) {
			sum = sum + value;  //합
		}
		average = sum / arr.length;  //평균
		
		int max = arr[0];
		int min = arr[0];
		for(int i=1; i<arr.length; i++) { //최대값
			if(max < arr[i])
				max = arr[i];
			
			if(min > arr[i])
				min = arr[i];
		}
		// ================================ 합
		System.out.println("합 : " + sum);
		System.out.println("평균 : " + average);
		System.out.println("최대값 : " + max);
		System.out.println("최소값 : " + min);
		
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
		System.out.println("당첨번호");
		for (int i=0; i<6; i++) {
			System.out.println(lott + ",");
		}
		System.out.println("");
	}
	
	//배열의 복사
	//A 배열이 가지고 있는 값을 B배열에 복사하고 싶다.
	public static void exam5() {
		int [] arr1= {1,2,3,4,5};
		//방법1)
		int[] arr2 = arr1;
		arrprint(arr1);
		arrprint(arr2);
		
		//====================================
		//방법2)
		int[] arr3 = arr1.clone(); // arr1 : 1,2,20,4,5
		                           // arr3 : 1,2,20,4,5
		                           // arr1 : 1,2,30,4,5
		
		arr1[2] = 30;
		
		arrprint(arr1);
		arrprint(arr3);
	}
	
	//2차원 배열
	public static void exam6() {
		
		//1. 배열 변수 선언 그리고 배열 생성
				int[][] arr1;
				arr1 = new int[3][5];
				arrprint1(arr1); //<===========출력요청(함수의 호출코드)
			
				
				//2. 배열 선언과 동시에 초기화
				int[][] arr2 = {{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}};
				arrprint1(arr2);
			
				
				//3. 배열 선언과 동싱에 초기화
				int[][] arr3 = new int[3][5];
				arrprint1(arr3);
				
				//4. 배열 선언과 동시에 초기화
				int[][] arr4 = new int[][] {{1,2,3,4,5},
					{6,7,8,9,10}, 
					{11,12,13,14,15}};
				arrprint1(arr4);
	
	}

	//2차원 배열의 생성 : 가변 배열 ****
	public static void exam7() {
		
		//1. 배열 변수 선언 그리고 배열 생성
		int[][] arr1;
		arr1 = new int[3][]; // exam6과 다른점 뒤에 행이 정의되지 않았다. 저장공간이 없다.
		arr1[0] = new int[2];
		arr1[1] = new int[3];
		arr1[2] = new int[4];
		arrprint1(arr1); //<===========출력요청(함수의 호출코드)
	
		
		//2. 배열 선언과 동시에 초기화
		int[][] arr2 = {{1,2}, {6,7,8}, {11}};
		arrprint1(arr2);
	
		
		//3. 배열 선언과 동싱에 초기화
		int[][] arr3 = new int[3][];
		arr3[0] = new int[3];
		arr3[1] = new int[2];
		arr3[2] = new int[1];
		arrprint1(arr3);
		
		//4. 배열 선언과 동시에 초기화
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
		System.out.println("예외 발생");
		System.out.println(ex.getMessage());
	}
	}
	//2차원 배열 출력
	public static void arrprint1(int [][] arr) {
		
		System.out.println("배열의 행의 개수 : " + arr.length);
		
		for(int i = 0; i<arr.length; i++) {
			for(int j=0; j<arr[i].length; j++) {
				System.out.printf("arr[%d][%d] = %d" , i, j, arr[i][j]);
		
			}
			System.out.println("");
		}
		System.out.println("");
	}
	
	public static void arrprint(char [] arr) { //매개변수, 대입연산 [arr1 = 옆에있는 int[]arr]
		
		System.out.println("배열의 개수 : " + arr.length);
	
		for(int i = 0; i<arr.length; i++) {
		System.out.print(arr[i]+",");
		}
		System.out.println("");
	
	}
	
	//배열 요소 전체 출력(순회)
	public static void arrprint(int [] arr) { //매개변수, 대입연산 [arr1 = 옆에있는 int[]arr]
	
		System.out.println("배열의 개수 : " + arr.length);
	
		for(int i = 0; i<arr.length; i++) {
		System.out.print(arr[i]+",");
		}
		System.out.println("");
	
	}
	
	public static void main(String[] args) {
		exam1();
	}
}
