package example1;

public class Add extends Cal {
	public Add(int _num1, int _num2) {
		super(_num1, _num2);
	}

	@Override
	public void Exam() {
		setResult(getNum1() + getNum2());
	}
	@Override
	public void Print() {
		System.out.printf("%02d + %02d = %0.1f\n",
				getNum1(), getNum2, getResult());
	}
}
