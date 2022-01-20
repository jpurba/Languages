package Employee;

public class BasePlusCommissionEmployee extends ComissionEmployee {
	
	// private instance fields
	private double commisionRate;
	private double grossSales;
	private double baseSalary;
		
	public BasePlusCommissionEmployee(double c, double g, double b) {
		
		// commissionRate = c;
		// grossSales = g;
		super(c, g);

		baseSalary = b;
	}

	public double getBaseSalary() {
		return baseSalary;
	}
	
	public void setBaseSalary(double b) {
		baseSalary = b;
	}
	
	@Override // Optional
	public double getEarnings() {
		return baseSalary + super.getEarnings();
		// return baseSalary + commisionRate * grossSales;
		// return commisionRate * grossSales;
	}
	
	

}
