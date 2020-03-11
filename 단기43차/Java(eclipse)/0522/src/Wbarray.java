
public class Wbarray {

	private Account[] base;
	private int capacity;	//최태 저장공간
	private int size;		//저장 개수, 저장인덱스위치값
	
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
			throw new Exception("잘못된 인덱스 입니다.");
		
		return base[idx];
	}
	
	public void push_back(Account value) throws Exception {
		//저장공간이 잉ㅆ는지 여부 검사
		
		if (size >= capacity)
			throw new Exception("저장 공간이 없다.");
		
		//저장
		base[size] = value;
		
		//저장 + 개수증가
		size++;
	}
	
	public void Erase(int idx) {
		if (idx <0 || idx >= size)
			throw new Exception("잘못된 인덱스인다.");
		
		for (int i idx; i < size =1; i++)
	}
}
