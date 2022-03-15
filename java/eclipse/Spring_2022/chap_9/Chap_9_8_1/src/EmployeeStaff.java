
public class EmployeeStaff extends EmployeePerson {

	private String managerName;
	
	// Default constructor
	public EmployeeStaff() {
		managerName = "";
	}
	
	// Constructor with parameters
	public EmployeeStaff(String reportsTo) {
		managerName = reportsTo;
	}
	
	// Get the name of the manager
	public String getManagerName() {
		return managerName;
	}
	
	public void superPrintInfo() {
		super.printInfo();
	}
	
	@Override
	public void printInfo() {
		System.out.println("Manager name: " + getManagerName());
		System.out.print("Name: " + fullName + ", Department: " +
	departmentCode + ", Birthday: " + birthday + ", Salary: " + annualSalary);
		System.out.println("");
	}
	
	
}
