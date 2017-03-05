
public class main {
	
	public static void main(String[] args){
		
		System.out.println("Bridge");
		Shape redCircle = new Circle(100,100, 10, new RedCircle());
		Shape greenCircle = new Circle(100,100, 10, new GreenCircle());
		redCircle.draw();
		greenCircle.draw();
		
	}

}
