
public class Business {

	private String name;
	private String address;
	
	public void setName(String busName) {
		name = busName;
	}
	
	public String getName() {
		return name;
	}
	
	public void setAddress(String busAddress) {
		address = busAddress;
	}
	
	public String getAddress() {
		return address;
	}
	
	public String getDescription() {
		return name + " -- " + address;
	}
}
