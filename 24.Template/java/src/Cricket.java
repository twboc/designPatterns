
public class Cricket extends Game {

	@Override
	void endPlay(){
		System.out.println("Cricket game finished");
	}
	
	@Override
	void initialize(){
		System.out.println("Cricket Game Initialized! Start Playing");
	}
	
	@Override
	void startPlay(){
		System.out.println("Cricket Game started. Enjoy the game!");
	}
	
}
