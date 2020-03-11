package example1;
 //page 293 clone
public class MyDate implements Cloneable {  // clone1
	private int year;
	private int month;
	private int day;
	
	public MyDate(int y, int m, int d) {
		year = y;
		month = m;
		day = d;		
	}
	
	public void Print() {
		System.out.printf ("%04d-%02d-%02d\n", year, month, day);
	}

	
	
	public String toString() {
		return String.format("%04d-%02d-%02d",
				year, month, day);
	}
	
	
	public boolean equals(Object obj) {
		MyDate d = (MyDate)obj;
		
		if(year == d.year && month == d.month && day == d.day)
			return true;
		else
			return false;
	}
	//@Override
	
	//clone2
	public Object clone() throws CloneNotSupportedException{
		return super.clone();
	}
}
