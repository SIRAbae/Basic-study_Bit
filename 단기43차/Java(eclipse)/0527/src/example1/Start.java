package example1;

public class Start {
	public static void main(String[] args) {
		MyDate d1 = new MyDate (2019,5,27);
		MyDate d2 = new MyDate (2019,5,27);
		
		d1.Print();
		d2.Print();
		
		// page 267
		//object로 부터 물려받은 equalse는 래퍼런스비교를 한다.
		//따라서 값 비교를 하려면 재정의가 필요하다.
		System.out.println(d1);
		System.out.println(d2.toString());
		
		if(d1.equals(d2) == true) {
			System.out.println("동일날짜");
		}
		else {
			System.out.println("다른날짜");
		}
		
		//clone 사용
		try {
			MyDate d3 = (MyDate)d1.clone();
			d3.Print();
		} catch (CloneNotSupportedException e) {
			System.out.println(e.getMessage());
		}
		
	}
	
}
