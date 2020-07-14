/**
 * Lead Author(s):
 * Jeremiah Purba; 5550010017
 * 
 * Other Contributors:
 * None
 *
 * References:
 * Gaddis, T. (2015). Starting Out With Java Myprogramming Lab 
 * From Control Structures Through Objects. (6th ed.). Addison-Wesley. 
 *
 * Version: 1.2 (07/12/2020)
 */

// Needed for the Scanner class for input
import java.util.Scanner;

/**
 * Class Name: CISC190ArrayOperations
 * Purpose   : Compare the input temperature with value from table
 *             then return the boolean results whether it's true
 *             or wrong 
 */

public class CISC190ArrayOperations {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}
	
	/*
	 * Purpose: check the input temperature of ethyl alcohol and  
	 * 			compare it with freezing temperature number from table.
	 * Signature: input 2 integers and return boolean 
	 * Examples: 
	 * isEthylFreezing(-180,-173) return true
	 * isEthylFreezing(-173,-173) return true
	 * isEthylFreezing(-170,-173) return false
	 */
	public static Boolean isEthylFreezing (int inputTemperature, int tableTemperature)
	{
		if (inputTemperature <= tableTemperature)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	/*
	 * Purpose: check the input temperature of ethyl alcohol and 
	 * 			compare it with boiling temperature number from table.
	 * Signature: input 2 integers and return boolean 
	 * Examples: 
	 * isEthylBoiling(173,172) return true
	 * isEthylBoiling(172,172) return true
	 * isEthylBoiling(171,172) return false
	 */
	public static Boolean isEthylBoiling (int inputTemperature, int tableTemperature)
	{
		if (inputTemperature >= tableTemperature)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	/*
	 * Purpose: check the input temperature of oxygen and  
	 * 			compare it with freezing temperature number from table.
	 * Signature: input 2 integers and return boolean 
	 * Examples: 
	 * isOxygenFreezing(-363,-362) return true
	 * isOxygenFreezing(-362,-362) return true
	 * isOxygenFreezing(-361,-362) return false
	 */
	public static Boolean isOxygenFreezing (int inputTemperature, int tableTemperature)
	{
		if (inputTemperature <= tableTemperature)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	/*
	 * Purpose: check the input temperature of oxygen and 
	 * 			compare it with boiling temperature number from table.
	 * Signature: input 2 integers and return boolean 
	 * Examples: 
	 * isEthylBoiling(-305,-306) return true
	 * isEthylBoiling(-306,-306) return true
	 * isEthylBoiling(-307,-306) return false
	 */
	public static Boolean isOxygenBoiling (int inputTemperature, int tableTemperature)
	{
		if (inputTemperature >= tableTemperature)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	/*
	 * Purpose: check the input temperature of water and  
	 * 			compare it with freezing temperature number from table.
	 * Signature: input 2 integers and return boolean 
	 * Examples: 
	 * isWaterFreezing(31,32) return true
	 * isWaterFreezing(32,32) return true
	 * isWaterFreezing(33,32) return false
	 */
	public static Boolean isWaterFreezing (int inputTemperature, int tableTemperature)
	{
		if (inputTemperature <= tableTemperature)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	/*
	 * Purpose: check the input temperature of water and 
	 * 			compare it with boiling temperature number from table.
	 * Signature: input 2 integers and return boolean 
	 * Examples: 
	 * isWaterBoiling(213,212) return true
	 * isWaterBoiling(212,212) return true
	 * isWaterBoiling(211,212) return false
	 */
	public static Boolean isWaterBoiling (int inputTemperature, int tableTemperature)
	{
		if (inputTemperature >= tableTemperature)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

}
