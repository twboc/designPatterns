
public class main {

	public static void main(String[] args){
		
		System.out.println("This is a proxy pattern");
		
		ProxyImage proxyHandler = new ProxyImage("image.jpg");
		
		proxyHandler.display();
		
		proxyHandler.display();
		
		proxyHandler.display();
		
	}
	
}
