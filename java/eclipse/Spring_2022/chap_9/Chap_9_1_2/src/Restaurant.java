
public class Restaurant extends Business {

	private int rating;
	
	public void setRating(int userRating) {
		rating = userRating;
	}
	
	public int getRating() {
		return rating;
	}
	
	@Override
	public String getDescription() {
		return getName() + " -- " + getAddress() +
				"\n Rating: " + rating;
	}
}
