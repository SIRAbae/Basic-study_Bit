package wb_sample1;

public class Gun {
	private int count; // �ν��Ͻ� ���
	
	static final int COUNT_MAX = 10; // Ŭ���� ���
	//������
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
		
	}
	
	public void shot() throws Exception {
		if(count <= 0)
			throw new Exception("�Ѿ��� ����.");
		count--;
	}
}
