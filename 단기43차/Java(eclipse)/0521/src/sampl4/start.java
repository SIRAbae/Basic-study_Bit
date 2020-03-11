package sampl4;
import java.util.Scanner;

public class start {
	
	private Tv tv;
	private TvController tvcon;
	private Scanner scan = new Scanner(System.in);
	public start() {
		try {
			tv = new Tv();
			tvcon = new TvController(tv);
		} catch (Exception e) {
			System.out.println("TV객체 생성 오류 : " + e.getMessage());
		}
	}
	
	public void Run() {
		
		while(true) {
		tv.Print();
		System.out.print(">>");
		String msg = scan.nextLine();   //볼륨 업
		String[] split = msg.split(" ");
		
		if(msg == "전원") {
			tvcon.poweronoff();
		}
		else if(split[0].equals("볼륨")) {
			if(split[0].equals("업")) {
				tvcon.VolumUp();
			}
			else if(split[1].equals("다운")) {
				tvcon.VolumDown();
			}
		}
	
		else if(split[0].equals("채널")) {
			if(split[1].equals("업")) {
				tvcon.ChannelUp();
			}
			else if(split[1].equals("다운")) {
				tvcon.ChannelDown();
		}
			else {
				int value = Integer.parseInt(split[1]);
				tvcon.ChannelChange(value);
			}
		}
		else if(split[0].equals("종료")) {
			break;
		}
	}
		
	}
public static void main(String[] args) {
	/*try {
	Tv tv1 = new Tv(); //TV객제 생성
	//tv1.channel = 1000; // 외부접근 허용시 신뢰성이 무너짐
	
	Tv tv2 = new Tv(2, 3);
	tv2.setChannel(8);
	}
	catch(Exception ex) {
		System.out.println(ex.getMessage());
	}
}*/
	
	//new.Start().Run();
	start start = new start();
	start.Run();
}
}
