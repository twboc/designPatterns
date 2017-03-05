
public class RedCircle implements DrawAPI {
	@Override
	public void drawCircle(int radius, int positionX, int positionY){
		
		System.out.println("Drawing Circle[ color: red, radius: "
				+ radius + ", x: " + positionX + ", " + positionY + "]");
	}
}
