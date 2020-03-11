import java.util.Scanner;

public class start {
	
	private Account acc;
	private Scanner scan = new Scanner(System.in);
	

	public start() throws Exception {
	
	acc= new Account(10, "홍길동", 10000);
	}

public void Run() {
	
	while(true) {
	acc.Print();
	System.out.print(">>");
	String msg = scan.nextLine();   //볼륨 업
	String[] split = msg.split(" ");
	
	try {
	 if(split[0].equals("입금")) {
		int value = Integer.parseInt(split[1]);
		acc.AddMoney(value);
		}
	 else if(split[0].equals("출금")) {
			int value = Integer.parseInt(split[1]);
			acc.MinMoney(value);
	 }
	else if(split[0].equals("종료")) {
		break;
	}
	}
	catch (Exception e) {
		System.out.println(e.getMessage());
		}
	}	
}
	

public static void main(String[] args) throws Exception {
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
