
public class VlcPlayer implements AdvancedMediaPlayer {
	
	@Override
	public void playVlc(String fileName){
		
		System.out.println("Now playing a vlc file: " + fileName);
		
	}
	
	@Override
	public void playMp4(String fileName){	}

}
