"""
File: calculator.py
Project 1.3
A GUI-based calculator.

Add 2 integer input number and put the results to text
It has 3 button: add, clear and quit
Add: will add 2 integer input number
clear: will clear the input boxes and output text to blank or set them to zero
quit: will close the window when it exit.
"""

from breezypythongui import EasyFrame

class Calculator(EasyFrame):
    """Application window for the calculator."""

    def __init__(self):
        """Sets up the window and the widgets."""
        EasyFrame.__init__(self, title = "Tax Calculator")
  
        # Label and field for the income
        
        self.input1Field = self.addIntegerField(value = "",
                                              row = 0, width = 10,
                                              column = 0)
        
        self.addLabel(text = "     +",
                      row = 0, column = 1)

        self.input2Field = self.addIntegerField(value = "",
                                              row = 0, width = 10,
                                              column = 2)
        self.addLabel(text = "=",
                      row = 0, column = 3)

        self.addButton(text = "Add", row = 1, column = 0, columnspan = 1, command = self.addCalc)
        self.addButton(text = "Clear", row = 1, column = 1, columnspan = 1, command = self.clearCalc)
        self.addButton(text = "Quit", row = 1, column = 2, columnspan = 1, command = self.quitCalc)
        
        

    # The event handler method for the button
    def quitCalc(self):
        #Close the window
        Calculator().quit()


    def clearCalc(self):
        # set box value to zero
        self.input1Field.setNumber(0)
        self.input2Field.setNumber(0)
        self.addLabel(text = "0                      ",
                      row = 0, column = 4)

    def addCalc(self):
        # get the input
        in1 = self.input1Field.getNumber()
        in2 = self.input2Field.getNumber()
        
        # Compute the input
        out = in1 + in2

        # output in text or string
        self.addLabel(text = str(out),
                      row = 0, column = 4)
        
def main():
    Calculator().mainloop()

if __name__ == "__main__":
    main()
