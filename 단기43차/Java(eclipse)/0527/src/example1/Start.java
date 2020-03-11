package example1;

public class Start {
	public static void main(String[] args) {
		MyDate d1 = new MyDate (2019,5,27);
		MyDate d2 = new MyDate (2019,5,27);
		
		d1.Print();
		d2.Print();
		
		// page 267
		//object�� ���� �������� equalse�� ���۷����񱳸� �Ѵ�.
		//���� �� �񱳸� �Ϸ��� �����ǰ� �ʿ��ϴ�.
		System.out.println(d1);
		System.out.println(d2.toString());
		
		if(d1.equals(d2) == true) {
			System.out.println("���ϳ�¥");
		}
		else {
			System.out.println("�ٸ���¥");
		}
		
		//clone ���
		try {
			MyDate d3 = (MyDate)d1.clone();
			d3.Print();
		} catch (CloneNotSupportedException e) {
			System.out.println(e.getMessage());
		}
		
	}
	
}
