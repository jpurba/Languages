
public class Media implements AudioVisual, Song {
	
	String name;
	String singer;
	
	public void setName(String setName) {
		name = setName;
	}
	
	public void setSinger (String setSinger) {
		singer = setSinger;
	}

	@Override
	public void printName() {
		System.out.println(name);
		
	}

	@Override
	public void printSinger() {
		System.out.println("Singer: " + singer);		
	}
}
