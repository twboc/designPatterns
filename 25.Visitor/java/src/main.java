
public class main {

	public static void main(String[] args){
	
		System.out.println("Visitor pattern");
		
		ComputerPart computer = new Computer();
		computer.accept(new ComputerPartDisplayVisitor());
		
	}
	
}
