package exanple2;

public class Start {
	public static void main(String[] args) {
		Pegasus ani = new Pegasus("�䰡�ҽ�");
		
		ani.Sound();
		ani.Fly();
		ani.Run();
		//----------------------------------------------
		Animal ani1 = new Pegasus("�䰡�䰡");
		ani.Sound();
		
		//�ٿ�ĳ����
		Pegasus pega = (Pegasus)ani1;
		pega.Fly();
		pega.Run();
	}
}
