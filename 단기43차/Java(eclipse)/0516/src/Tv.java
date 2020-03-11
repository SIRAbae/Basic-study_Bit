
public class Tv {

	//데이터 은닉
	//왜? 신뢰성
	private boolean ispower;
	private int channel;  //0~10
	private int volume;  //0~20
	
	//생성자 : 객체 생성시 자동으로 호풀되는 특수한 맴버함수
	//      목적 : 맴버변수 초기화
	//      이름 : 반드시 클래스명과 동일
	//      리턴 : 없다.
	//      매개변수 : 일다. 따라서 오버로딩 가능(여러개의 생성자 정의 가능)
	
	Tv() throws Exception{
	this(2,5); // this : 자기자신.
		//ispower = false;
		//channel = 2;
		//volume = 5;
		
	}
	Tv(int ch, int vo) throws Exception{
		setIspower(false);
		setChannel(ch);
		setVolume(vo);
	}
	
	//get & set 메서드
	//멤버 변수는 뎅터 은닉되어 있다. 따라서 외부 접근이 불가능 하다.
	//get & set을 통해 외부에서 간접적으로 접근할 수 있도록 한다.
	
	public boolean isIspower() { //get메서드
		return ispower;
	}
	
	private void setIspower(boolean ispower) { //set메서드
		this.ispower = ispower;
	}
	
	public int getChannel() {
		return channel;
	}
	
	// 예외 명세 : 나는 이런한 예외를 발생시킨다.
	public void setChannel(int channel) throws Exception {
		if(channel <0 || channel >10)
		throw new Exception("잘못됝 채널입니다. : " + channel);
		
		this.channel = channel;
	}
	
	public int getVolume() {
		return volume;
	}
	
	public void setVolume(int volume) throws Exception {
		if(volume < 0|| volume>20)
			throw new Exception("볼륨범위를 벋어남 : " + volume);
		
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
	System.out.println("[전원]" + ispower);
	System.out.println("[볼륨]"+ volume);
	System.out.println("[채널]"+ channel);
	System.out.println("===================================");
}

}
