
public class Tv {

	//������ ����
	//��? �ŷڼ�
	private boolean ispower;
	private int channel;  //0~10
	private int volume;  //0~20
	
	//������ : ��ü ������ �ڵ����� ȣǮ�Ǵ� Ư���� �ɹ��Լ�
	//      ���� : �ɹ����� �ʱ�ȭ
	//      �̸� : �ݵ�� Ŭ������� ����
	//      ���� : ����.
	//      �Ű����� : �ϴ�. ���� �����ε� ����(�������� ������ ���� ����)
	
	Tv() throws Exception{
	this(2,5); // this : �ڱ��ڽ�.
		//ispower = false;
		//channel = 2;
		//volume = 5;
		
	}
	Tv(int ch, int vo) throws Exception{
		setIspower(false);
		setChannel(ch);
		setVolume(vo);
	}
	
	//get & set �޼���
	//��� ������ ���� ���еǾ� �ִ�. ���� �ܺ� ������ �Ұ��� �ϴ�.
	//get & set�� ���� �ܺο��� ���������� ������ �� �ֵ��� �Ѵ�.
	
	public boolean isIspower() { //get�޼���
		return ispower;
	}
	
	private void setIspower(boolean ispower) { //set�޼���
		this.ispower = ispower;
	}
	
	public int getChannel() {
		return channel;
	}
	
	// ���� �� : ���� �̷��� ���ܸ� �߻���Ų��.
	public void setChannel(int channel) throws Exception {
		if(channel <0 || channel >10)
		throw new Exception("�߸��� ä���Դϴ�. : " + channel);
		
		this.channel = channel;
	}
	
	public int getVolume() {
		return volume;
	}
	
	public void setVolume(int volume) throws Exception {
		if(volume < 0|| volume>20)
			throw new Exception("���������� ��� : " + volume);
		
		this.volume = volume;
	}


// method
public void poweronoff() {
	ispower = !ispower;
	 setIspower(!spower);
	 	 
}

public void VolumUp(){
	try {
	setVolume(volume+1);
} catch(Exception e) {
}
}


public void VolumDown() {
	try {
	setVolume(volume-1);
} catch(Exception e) {
	
}
}

public void ChannelUp() {
	try {
	setChannel(channel+1);
}
	catch(Exception e) {
		channel = 0;
	}
}

public void ChannelDown() {
	try {
		setChannel(channel-1);
	}
		catch(Exception e) {
			channel = 10;
		}
	}

public void ChannelChange(int value) {
	try {
		setChannel(value);
	}catch(Exception e) {
	}	
}

public void Print() {
	System.out.println("===================================");
	System.out.println("[����]" + ispower);
	System.out.println("[����]"+ volume);
	System.out.println("[ä��]"+ channel);
	System.out.println("===================================");
}

}
