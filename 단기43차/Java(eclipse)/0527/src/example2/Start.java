package example2;
/*
 * �̼�
 * 1) person(String name, int age/ print) - �θ�
 * 2) Student ( String suject / print ������) - �ڽ�
 */
public class Start {
	public static void main(String[] args) {
		Student stu1 = new Student("ȫ�浿", 10, "��ǻ��");
		Student stu2 = new Student("�̱浿", 20, "��ǻ��");
		
		stu1.Print();
		stu2.print();
		//�а��� ���Ұ�
		if(stu1.equlas(stu2)) {
			System.out.println("�����а�");	
		}
		else {
			System.out.println("���δٸ��а�");
		}
	}
}
