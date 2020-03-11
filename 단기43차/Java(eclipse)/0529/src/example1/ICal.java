package example1;

/*
 * 구현 상속
 */
public interface ICal {
	int Cal(int n1 , int n2);
}

class Mul implements ICal{

	@Override
	public int Cal(int n1, int n2) {
		return n1 * n2;
	}
}
	
class Div implements ICal{

	@Override
	public int Cal(int n1, int n2) {
		return n1 / n2;
	}
		
}