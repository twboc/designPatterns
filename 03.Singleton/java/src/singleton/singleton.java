package singleton;
public class singleton {
	private static singleton instance = null;
	public void work(){
		System.out.println("I am an instance and I am doing some work!");
	}
	public static singleton getInstance(){
		if (instance == null){
			instance = new singleton();
		}
		return instance;
	}
}
