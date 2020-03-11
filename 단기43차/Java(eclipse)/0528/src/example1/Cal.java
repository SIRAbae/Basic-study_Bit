package example1;

public abstract class Cal {
	private int num1;
	private int num2;
	private float result;
	
	public Cal(int _num1, int _num2) {
		setNum1(_num1);
		setNum2(_num2);
		Exam(); // <------result를 초기화
		
	}

	public abstract void Exam();
	
	public abstract void Print();

	public int getNum1() {
		return num1;
	}

	public void setNum1(int num1) {
		this.num1 = num1;
	}

	public int getNum2() {
		return num2;
	}

	public void setNum2(int num2) {
		this.num2 = num2;
	}

	public float getResult() {
		return result;
	}

	public void setResult(float result) {
		this.result = result;
	}
	
	
}
