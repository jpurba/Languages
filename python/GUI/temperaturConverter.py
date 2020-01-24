"""
File: taxformwithgui.py
Project 8.1
A GUI-based tax calculator.

Computes and prints the total tax, given the income and
number of dependents (inputs), and a standard deduction of
$10,000, an exemption amount of $3,000, and a flat tax rate
of 20%.
"""

from breezypythongui import EasyFrame

class TemperatureConverter(EasyFrame):
    """Application window for the tax calculator."""

    def __init__(self):
        """Sets up the window and the widgets."""
        EasyFrame.__init__(self, title = "Tax Calculator")
  
        # Label and field for the income
        self.addLabel(text = "Celcius",
                      row = 0, column = 0)
        self.celciusField = self.addFloatField(value = 0.0,
                                              row = 1, column = 0,
                                               precision = 2)
        self.addLabel(text = "Fahrenheit",
                      row = 0, column = 1)
        self.fahreinheitField = self.addFloatField(value = 32.0,
                                              row = 1, column = 1,
                                                   precision = 2)
     
        self.addButton(text = ">>>>", row = 2, column = 0,
                       columnspan = 1, command = self.computeFahr)

        self.addButton(text = "<<<<", row = 2, column = 1,
                       columnspan = 1, command = self.computeCelsius)
        

        """
        if i_convention.upper() == "C":
        result = int(round((9 * degree) / 5 + 32))
        o_convention = "Fahrenheit"
        elif i_convention.upper() == "F":
        result = int(round((degree - 32) * 5 / 9))
        o_convention = "Celsius"

        """

    # The controller methods
    def computeFahr(self):
        """Inputs the Celsius degrees
        and outputs the Fahrenheit degrees."""
        celcius = self.celciusField.getNumber()
        fahreinheit = ((9 * celcius) / 5 + 32)
        self.fahreinheitField.setNumber(fahreinheit)

    def computeCelsius(self):
        """Inputs the Fahrenheit degrees
        and outputs the Celsius degrees."""
        Fahrenheit = self.fahreinheitField.getNumber()
        celcius = ((Fahrenheit - 32) * 5 / 9)
        self.celciusField.setNumber(celcius)
        
        
def main():
    TemperatureConverter().mainloop()

if __name__ == "__main__":
    main()
