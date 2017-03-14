
public class StartState implements State {
	public void doAction(Context context){
		System.out.println("Player is in start state");
	}
	public String toString(){
		return "Start State";
	}	
}
