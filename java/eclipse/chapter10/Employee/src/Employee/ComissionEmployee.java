package Employee;

public class ComissionEmployee {

	// private instance variables
	private double commissionRate;
	private double grossSales;
	
	public ComissionEmployee(double c, double g) {
		commissionRate = c;
		grossSales = g;
	}
	
	public double getCommisionRate() {
		return commissionRate;
	}
	
	public double getGrossSales() {
		return grossSales;
	}
	
	public void setCommisionRate(double c) {
		commissionRate = c;
	}
	
	public void setGrossSales(double g) {
		grossSales = g;
	}
	
	public double getEarnings() {
		return grossSales * commissionRate;
	}
	
}
