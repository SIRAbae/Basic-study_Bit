package example2;

import java.util.ArrayList;
import java.util.Scanner;
/*
 * 제너릭 컬렉션 클래스
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
			default : System.out.println("잘못 입력");
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
		System.out.println("\t저장개수 :" + datalist.size());
		for(int i=0; i< datalist.size(); i++) {
			Student stu = datalist.get(i);
			
			System.out.printf("\t[&d]", i);
			System.out.println(stu);  //stutoString() 이랑 같은 코드
		}
	}
	
	private void Insert() {
		
		try {
		System.out.println(">> 이름 :");
		String name = scan.nextLine();
		System.out.print(">> 학년 : ");
		int grad = Integer.parseInt(scan.nextLine());
		
		Student stu = new Student(name, grad);
		
		datalist.add(stu);
		
		System.out.println(">> 저장되었습니다.");
		}
		catch(Exception ex) {
			System.out.println("저장 실패 : " + ex.getMessage());
		}
	}
		
	private void Select() {
			//이름을 가지고 검색
		try {	
		System.out.println(">> 검색이름 :");
			String name = scan.nextLine();
			
			Student stu = NameToStudent(name);
			
			stu.Print();
	}
		catch (Exception ex) {
			System.out.println("저장실패 : " + ex.getMessage());
		}
	}
	
	private Student NameToStudent (String name) throws Exception {
		for (Student stu : datalist) {
			if(stu.getName().equals(name) == true) {
				return stu;
				}
			}
		throw new Exception("없다.");
	}
	
	public void Update() {
		//이름을 가지고 검색 후 학년 수정
		try {
		System.out.println(">> 수정할 이름 입력 :");
		String name = scan.nextLine();
		System.out.println(">> 수정할 학년 입력 :");
		int grad = Integer.parseInt(scan.nextLine());
		
		Student stu = NameToStudent(name);
		stu.setGrad(grad);
		
		System.out.println("변경되었습니다.");
		}
		catch(Exception ex) {
			System.out.println("수정 오류 : " + ex.getMessage());
		}
	}
	
	
	


	public void Delete() {
		//이름을 가지고 검색 후 학년 삭제
		try {
				System.out.println(">> 수정할 이름 입력 :");
				String name = scan.nextLine();
				
				Student stu = NameToStudent(name);

				datalist.remove(stu);
				
				System.out.println("삭제되었습니다.");
			}
		catch (Exception ex) {
			System.out.println("삭재 오류 : " + ex.getMessage());
		
			}
		}
	
	

	public static void main(String [] str) {
		Start s = new Start();
		s.Run();
	}
}
