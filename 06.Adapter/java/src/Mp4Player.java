
public class Mp4Player implements AdvancedMediaPlayer {

	@Override
	public void playVlc(String fileName){	}

	@Override
	public void playMp4(String fileName){
		System.out.println("Now playing a mp4 file: " + fileName);
	}

}
