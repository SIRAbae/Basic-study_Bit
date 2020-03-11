package example1;

public class Start {
	public static void main(String[] args) {
		Add add = new Add();
		System.out.println( add.result(10 , 20));

		Sub sub = new Sub();
		System.out.println( sub.get(10 , 20));
	}
}
