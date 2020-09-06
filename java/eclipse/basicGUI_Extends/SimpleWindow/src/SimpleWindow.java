
import javax.swing.*;

// This class is not ordinary class but extends of JFrame and inherit
// JFrame functionality
public class SimpleWindow extends JFrame {
	
	// Constructor
	public SimpleWindow()
	{
		// Constants for the window's width and height
		final int WIDTH = 350;
		final int HEIGHT = 250;
		
		// Set the title
		setTitle("This is a simple window 2");
		
		// Set the size
		setSize(WIDTH, HEIGHT);
		
		// Specify what happens when the close button is pressed
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		// Display the window
		setVisible(true);
	}
	
	

}
