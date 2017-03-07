public class main {
	
	public static void main(String[] args){
		
		System.out.println("Facade pattern");
		
		ShapeMaker shapeMaker = new ShapeMaker();
		
		shapeMaker.drawCircle();
		shapeMaker.drawRectangle();
		shapeMaker.drawSquare();
		
	}

}
