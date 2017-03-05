
public class Circle extends Shape {

	private int radius, positionX, positionY;
	
	public Circle(int radius, int positionX, int positionY, DrawAPI drawAPI){
		
		super(drawAPI);
		
		this.positionX = positionX;
		this.positionY = positionY;
		this.radius = radius;
		
	}
	
	public void draw(){
		
		drawAPI.drawCircle(radius, positionX, positionY);
		
	}
	
}
