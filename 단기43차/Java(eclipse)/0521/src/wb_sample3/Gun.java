package wb_sample3;

public class Gun {
	private int count; // 인스턴스 멤버
	
	static final int COUNT_MAX = 10; // 클래스 멤버
	//생성자
	public Gun() {
		this(10);
	}
	
	public Gun(int count) {
		this.count =count;
	}
	public int getcount() {
		return count;
	}
	public void setcount(int count) {
		this.count = count;
	}
	
	public void shot() throws Exception {
		if(count <= 0)
			throw new Exception("총알이 없다.");
		count--;
	}
}
