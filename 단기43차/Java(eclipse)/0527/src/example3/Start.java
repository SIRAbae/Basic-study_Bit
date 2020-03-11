package example3;

public class Start {
	public static void main(String [] args) {
		
		Animal[] ani = new Animal[3];
		
		//Upcasting.....
		ani[0] = new Cat();
		ani[1] = new Dog();
		ani[2] = new Fish();
		
		//다형성 : 전체 동물들을 출력
		for(Animal a :ani) {
			a.Sound();
		}
		
		//고양이만 출력 : instanceof
		for(Animal a :ani) {
			
			if(a instanceof Cat) {
			Cat cat = (Cat)a;
			cat.Sound();
			}
		}
		// 물고기 헤엄치기.....
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
