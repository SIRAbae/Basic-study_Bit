
public class Wbarray {

	private Account[] base;
	private int capacity;	//���� �������
	private int size;		//���� ����, �����ε�����ġ��
	
	public Wbarray(int _capacity) {
		capacity = _capacity;
		size = 0;
		base = new Account[capacity];
	}

	public Account[] getBase() {
		return base;
	}


	public int getCapacity() {
		return capacity;
	}


	public int getSize() {
		return size;
	}
		
	public Account getAccount(int idx) throws Exception {
		if (idx < 0 || idx > size)
			throw new Exception("�߸��� �ε��� �Դϴ�.");
		
		return base[idx];
	}
	
	public void push_back(Account value) throws Exception {
		//��������� �פ����� ���� �˻�
		
		if (size >= capacity)
			throw new Exception("���� ������ ����.");
		
		//����
		base[size] = value;
		
		//���� + ��������
		size++;
	}
	
	public void Erase(int idx) {
		if (idx <0 || idx >= size)
			throw new Exception("�߸��� �ε����δ�.");
		
		for (int i idx; i < size =1; i++)
	}
}
