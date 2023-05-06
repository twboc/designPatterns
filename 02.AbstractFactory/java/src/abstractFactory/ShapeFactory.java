package abstractFactory;

import shapes.*;
import colors.*;

public class ShapeFactory extends AbstractFactory {

	public Shape getShape(String shapeType){
		
		if ( shapeType == null){
			return null;			
		}
		
		if (shapeType.equalsIgnoreCase("CIRCLE")) {
			return new Circle();			
		}else if (shapeType.equalsIgnoreCase("SQUARE")) {
			return new Square();
		}else if(shapeType.equalsIgnoreCase("RECTANGLE")){
			return new Rectangle();			
		}
		
		return null;
	}
	
	public Color getColor(String color) {
		return null;
	}
	
}
