import java.lang.System;

public class main {

	public static void main(String[] args){
		
		System.out.println("");
		System.out.println("Get factory");
		shapeFactory Shapefactory = new shapeFactory();
		
		System.out.println("");
		System.out.println("Get Circle");
		Shape circle = Shapefactory.getShape("CIRCLE");
		circle.draw();
		
		System.out.println("");
		System.out.println("Get Rectangle");
		Shape rectangle = Shapefactory.getShape("RECTANGLE");
		rectangle.draw();
		
		System.out.println("");
		System.out.println("Get Square");
		Shape square = Shapefactory.getShape("SQUARE");
		square.draw();
		
		
	}
}
