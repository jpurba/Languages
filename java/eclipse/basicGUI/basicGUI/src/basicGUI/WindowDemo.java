package basicGUI;

import javax.swing.*;

public class WindowDemo {

	public static void main(String[] args) {
		
		// Constants for the window's width and height
		final int WIDTH = 350;
		final int HEIGHT = 250;
		
		// Create a Jframe object for the window
		JFrame window = new JFrame();  // create in memory, however it won't display on screen
		
		// Set the window's title
		window.setTitle("This is a simple window");
		
		// Set the window's size
		window.setSize(WIDTH, HEIGHT);
		
		// Specify what happens when the close button is pressed
		window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		// Display the window
		window.setVisible(true);

	}

}
