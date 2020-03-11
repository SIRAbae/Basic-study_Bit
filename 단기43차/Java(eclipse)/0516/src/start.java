import java.util.Scanner;

public class start {
	
	private Tv tv;
	private Scanner scan = new Scanner(System.in);
	public start() {
		try {
			tv = new Tv();		
		} catch (Exception e) {
			System.out.println("TV��ü ���� ���� : " + e.getMessage());
		}
	}
	
	public void Run() {
		
		while(true) {
		tv.Print();
		System.out.print(">>");
		String msg = scan.nextLine();   //���� ��
		String[] split = msg.split(" ");
		
		if(msg == "����") {
			tv.poweronoff();
		}
		else if(split[0].equals("����")) {
			if(split[0].equals("��")) {
				tv.VolumUp();
			}
			else if(split[1].equals("�ٿ�")) {
				tv.VolumDown();
			}
		}
	
		else if(split[0].equals("ä��")) {
			if(split[1].equals("��")) {
				tv.ChannelUp();
			}
			else if(split[1].equals("�ٿ�")) {
				tv.ChannelDown();
		}
			else {
				int value = Integer.parseInt(split[1]);
				tv.ChannelChange(value);
			}
		}
		else if(split[0].equals("����")) {
			break;
		}
	}
		
	}
public static void main(String[] args) {
	/*try {
	Tv tv1 = new Tv(); //TV���� ����
	//tv1.channel = 1000; // �ܺ����� ���� �ŷڼ��� ������
	
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
