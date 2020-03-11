package example3;

public class Start {
	public static void main(String [] args) {
		
		Animal[] ani = new Animal[3];
		
		//Upcasting.....
		ani[0] = new Cat();
		ani[1] = new Dog();
		ani[2] = new Fish();
		
		//������ : ��ü �������� ���
		for(Animal a :ani) {
			a.Sound();
		}
		
		//����̸� ��� : instanceof
		for(Animal a :ani) {
			
			if(a instanceof Cat) {
			Cat cat = (Cat)a;
			cat.Sound();
			}
		}
		// ����� ���ġ��.....
		for(Animal a :ani) {
		if(a instanceof Fish) {
		//DownCasting
		Fish f = (Fish)a;
		f.Sound();
		f.Swimming();
			}
		}
	}
}
