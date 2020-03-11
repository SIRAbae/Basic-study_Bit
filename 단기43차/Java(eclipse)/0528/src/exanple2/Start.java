package exanple2;

public class Start {
	public static void main(String[] args) {
		Pegasus ani = new Pegasus("페가소스");
		
		ani.Sound();
		ani.Fly();
		ani.Run();
		//----------------------------------------------
		Animal ani1 = new Pegasus("페가페가");
		ani.Sound();
		
		//다운캐스팅
		Pegasus pega = (Pegasus)ani1;
		pega.Fly();
		pega.Run();
	}
}
