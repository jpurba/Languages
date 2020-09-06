import javax.swing.*;     // Needed for swing package
import java.awt.event.*;  // Needed for ActionListener

public class EventDemo extends JFrame 
{
	public EventDemo()
	{
		// Constants for the window size
		final int WIDTH = 200;
		final int HEIGHT = 100;
		
		// Set the window size
		setSize(WIDTH, HEIGHT);
		
		// Specify the default close operation
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		// Create a JButton
		JButton button = new JButton("Click Me");
		
		// Register an action listener for the Button
		button.addActionListener(new ButtonListener());
		
		// Add the button to the window
		add(button);
		
		// Display the window
		setVisible(true);
	}
	
	// The ButtonListener class is an action listener for the button
	private class ButtonListener implements ActionListener
	{
		public void actionPerformed(ActionEvent e)
		{
			JOptionPane.showMessageDialog(null,  "Have a great day !");
		}
	}

}
