
public class main {
	
	public static void main(String[] args){
		
		System.out.println("Composite pattern demo");
		
		Employee ceo = new Employee("Hubert", "MANAGEMENT", 30000);
		
		Employee manager1 = new Employee("Olaf", "Sales", 25000);
		Employee manager2 = new Employee("Hans", "Production", 25000);
		
		ceo.add(manager1);
		ceo.add(manager2);

		Employee worker1Sales = new Employee("Helga", "Sales", 15000);
		Employee worker2Sales = new Employee("Wolf", "Sales", 15000);
		Employee worker3Sales = new Employee("Gustav", "Sales", 15000);
		
		manager1.add(worker1Sales);
		manager1.add(worker2Sales);
		manager1.add(worker3Sales);
		
		Employee worker1production = new Employee("Veronika", "Production", 13000);
		Employee worker2production = new Employee("Mathias", "Production", 13000);
		Employee worker3production = new Employee("Olgierd", "Production", 13000);
		Employee worker4production = new Employee("Tomas", "Production", 13000);
		
		manager2.add(worker1production);
		manager2.add(worker2production);
		manager2.add(worker3production);
		manager2.add(worker4production);
		
		System.out.println(ceo.toString());
		
		ceo.directOrder("We will work harder!!!");
		
		
	}

}
