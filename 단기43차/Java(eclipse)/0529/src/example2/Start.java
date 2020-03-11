package example2;

import java.util.ArrayList;
import java.util.Scanner;
/*
 * ���ʸ� �÷��� Ŭ����
 */
public class Start {
	private ArrayList<Student> datalist = new ArrayList<Student>();
	private Scanner scan = new Scanner(System.in);
	
	public void Run() {
		while(true) {
			MenuPrint();
			switch(scan.nextLine()) {
			case "1" : Insert();  break; 
			case "2" : Select();  break;
			case "3" : Update();  break;
			case "4" : Delete();  break;
			case "5" : break;
			default : System.out.println("�߸� �Է�");
			}
			PrintAll();
		}
	}
	
	
	private void MenuPrint() {
		System.out.println("============================================================");
		System.out.println("[1] Insert  [2] Select  [3] Update [4] Delete [5 Exit]");
		System.out.println("============================================================");

	}

	private void PrintAll() {
		System.out.println("\t���尳�� :" + datalist.size());
		for(int i=0; i< datalist.size(); i++) {
			Student stu = datalist.get(i);
			
			System.out.printf("\t[&d]", i);
			System.out.println(stu);  //stutoString() �̶� ���� �ڵ�
		}
	}
	
	private void Insert() {
		
		try {
		System.out.println(">> �̸� :");
		String name = scan.nextLine();
		System.out.print(">> �г� : ");
		int grad = Integer.parseInt(scan.nextLine());
		
		Student stu = new Student(name, grad);
		
		datalist.add(stu);
		
		System.out.println(">> ����Ǿ����ϴ�.");
		}
		catch(Exception ex) {
			System.out.println("���� ���� : " + ex.getMessage());
		}
	}
		
	private void Select() {
			//�̸��� ������ �˻�
		try {	
		System.out.println(">> �˻��̸� :");
			String name = scan.nextLine();
			
			Student stu = NameToStudent(name);
			
			stu.Print();
	}
		catch (Exception ex) {
			System.out.println("������� : " + ex.getMessage());
		}
	}
	
	private Student NameToStudent (String name) throws Exception {
		for (Student stu : datalist) {
			if(stu.getName().equals(name) == true) {
				return stu;
				}
			}
		throw new Exception("����.");
	}
	
	public void Update() {
		//�̸��� ������ �˻� �� �г� ����
		try {
		System.out.println(">> ������ �̸� �Է� :");
		String name = scan.nextLine();
		System.out.println(">> ������ �г� �Է� :");
		int grad = Integer.parseInt(scan.nextLine());
		
		Student stu = NameToStudent(name);
		stu.setGrad(grad);
		
		System.out.println("����Ǿ����ϴ�.");
		}
		catch(Exception ex) {
			System.out.println("���� ���� : " + ex.getMessage());
		}
	}
	
	
	


	public void Delete() {
		//�̸��� ������ �˻� �� �г� ����
		try {
				System.out.println(">> ������ �̸� �Է� :");
				String name = scan.nextLine();
				
				Student stu = NameToStudent(name);

				datalist.remove(stu);
				
				System.out.println("�����Ǿ����ϴ�.");
			}
		catch (Exception ex) {
			System.out.println("���� ���� : " + ex.getMessage());
		
			}
		}
	
	

	public static void main(String [] str) {
		Start s = new Start();
		s.Run();
	}
}
