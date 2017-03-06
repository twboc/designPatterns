import java.util.ArrayList;
import java.util.List;


public class Employee {
	
	private String name;
	private String dept;
	private int salary;
	private List<Employee> subordinates;
	
	public Employee(String name, String dept, int salary){
		this.name = name;
		this.dept = dept;
		this.salary = salary;
		this.subordinates = new ArrayList<Employee>();
	}
	
	public void add(Employee employee){
		this.subordinates.add(employee);
	}
	
	public void remove(Employee employee){
		this.subordinates.remove(employee);
	}
	
	public List<Employee> getSubordinates(){
		return this.subordinates;
	}
	
	public void directOrder(String order){
		System.out.println(this.name + " says: ");
		System.out.println("This is a direct order: " +  order);
		for (Employee employee : this.subordinates) {
			employee.directOrder(order);	
		}
	}
	
	public String toString(){
		return ("Employee :[ Name : "+ name
		+ ", dept : "+ dept + ", salary :"
		+ salary+" ]");
	}
	
}
