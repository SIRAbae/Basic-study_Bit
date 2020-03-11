import java.util.Scanner;

public class start {
//문자열 연산
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
		//문자열 비교
		if( str1 == str2) {
			System.out.println("같다.1");
		}
		if( str3 == str4) {
			System.out.println("같다.2");
		}
		
		if( str1.equals(str2)==true) {
			System.out.println("같다.3");
		}
		if( str3.equals(str4)==true) {
			System.out.println("같다.4");
		}
		if( str1.equals(str3)==true) {
			System.out.println("같다.5");
		}
	}
	
	//whlile(반복문)
	//상황1) 반복의 횟수만 관리  -> 일반적으로 0부터 시작
	//Hello World를 10번 출력!!
	public static void exam3() {
		
		//1.초기값
		int i = 0;
		
		//반복
		while(i<10) {// 2.조건
			
			//=========================================
			System.out.println("Hello wrold");
			//=========================================
			
			i++;  // 3.증감
		}
	}
	
	//상황2) 반복의 횟수를 관리하는 변수를 활용 -> 활용에 맞게 시작 위치 변경
	//나는 1부터 10까지 모든 정수를 출력하고 싶다.
	public static void exam4() {
		
		int i = 1;
		
		//반복
		while(i<11) {// 2.조건
			
			//=========================================
			System.out.println( i + "\t");
			//=========================================
			
			i++;  // 3.증감
		}
	}
	
	//나는 1부터 10까지 모든 홀수인 정수를 출력하고 싶다.
	public static void exam5() {
		
		int i = 1;
		
		//반복
		while(i<11) {// 2.조건
			
			//=========================================
			System.out.println( i + "\t");
			//=========================================
			
			i=i+2;  // 3.증감
		}
	}

	//나는 1부터 10까지 모든 짝수인 정수를 출력하고 싶다.
	public static void exam6() {
	
	int i = 2;
	
	//반복
	while(i<11) {// 2.조건
		
		//=========================================
		System.out.println( i + "\t");
		//=========================================
		
		i=i+2;  // 3.증감
	}
}
	
	
	//나는 10부터 1까지 홀수인 정수를 출력하고 싶다.
	public static void exam7() {
		
		int i = 9;
		
		//반복
		while(i>0) {// 2.조건
			
			//=========================================
			System.out.println( i + "\t");
			//=========================================
			
			i=i-2;  // 3.감소
		}
	}
	
	//상황3) 반복의 횟수가 가변적인 경우
	// 사용자로부터 -1을 입력할 때 까지 반복해서 정수를 입력받아라.
	public static void exam8() {

		Scanner scan = new Scanner(System.in);
		
		while(true) { //무한루프
			System.out.println("정수 입력 : ");
			int number = Integer.parseInt(scan.nextLine());
			
			if(number == -1) {
				break; //반복문을 빠져나가는 키워드**********
			}
		}
	}
	public static void main(String[] args) {
		exam8
		();
	}
}
