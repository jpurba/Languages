
public class EmployeeManager extends EmployeePerson {

	private int numManaged;     // Number of staff managed
	
	// Default constructor
	public EmployeeManager() {
		numManaged = 0;
	}
	
	// Constructor with parameters
	public EmployeeManager(int nManaged) {
		numManaged = nManaged;
	}
	
	// Get the number of people managed
	public int getNumManaged() {
		return numManaged;
	}
	
	public void superPrintInfo() {
		super.printInfo();
	}
	
	@Override
	public void printInfo() {
		System.out.println("Number of manager: " + getNumManaged());
		System.out.print("Name: " + fullName + ", Department: " +
	departmentCode + ", Birthday: " + birthday + ", Salary: " + annualSalary);
		System.out.println("");
	}
}
