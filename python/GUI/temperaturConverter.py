"""
File: temperatureconverter.py
Project 8.3
Temperature conversion between Fahrenheit and Celcius.
Illustrates the use of numeric data fields.
"""

from breezypythongui import EasyFrame

class TemperatureConverter(EasyFrame):
    """A termperature conversion program."""

    def __init__(self):
        """Sets up the window and the widgets."""
        EasyFrame.__init__(self, title = "Tax Calculator")
        # Label and field for the income
        self.addLabel(text = "Celcius",
                      row = 0, column = 0)
        self.celsiusField = self.addFloatField(value = 0.0,
                                              row = 1, column = 0,
                                               precision = 2)
        self.addLabel(text = "Fahrenheit",
                      row = 0, column = 1)
        self.fahrField = self.addFloatField(value = 32.0,
                                              row = 1, column = 1,
                                                   precision = 2)
        self.addButton(text = ">>>>", row = 2, column = 0,
                       columnspan = 1, command = self.computeFahr)

        self.addButton(text = "<<<<", row = 2, column = 1,
                       columnspan = 1, command = self.computeCelsius)

    # The controller methods
    def computeFahr(self):
        """Inputs the Celcius degrees
        and outputs the Fahrenheit degrees."""
        celcius = self.celsiusField.getNumber()
        fahreinheit = ((9 * celcius) / 5 + 32)
        self.fahrField.setNumber(fahreinheit)
    
    def computeCelsius(self):
        """Inputs the Fahrenheit degrees
        and outputs the Celcius degrees."""
        Fahrenheit = self.fahrField.getNumber()
        celcius = ((Fahrenheit - 32) * 5 / 9)
        self.celsiusField.setNumber(celcius)
        
def main():
    """Instantiate and pop up the window."""
    TemperatureConverter().mainloop()

if __name__ == "__main__":
    main()