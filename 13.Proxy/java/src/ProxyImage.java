
public class ProxyImage implements Image {
	
	private RealImage realImage;
	private String fileName;
	
	public ProxyImage(String fileName){
		this.fileName = fileName;
	}
	
	@Override
	public void display(){
		System.out.println("PROXY!!! You shall display!!!");
		if(realImage == null){
			System.out.println("Get me the real thing!!!");
			realImage = new RealImage(fileName);
		}else{
			System.out.println("ALREADY HAVE ONE!");
		}
		realImage.display();		
	}

}
