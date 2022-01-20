package Employee;

public class EmployeeTest {

	public static void main(String[] args) {
		BasePlusCommissionEmployee bpEmployee = new BasePlusCommissionEmployee(0.1, 500,2500);
		ComissionEmployee cEmployee= new ComissionEmployee(.2, 1000);
		System.out.println("Earning Report: ");
		System.out.println("Employee 1: " + bpEmployee.getEarnings());
		System.out.println("Employee 2: " + cEmployee.getEarnings());

	}

}
