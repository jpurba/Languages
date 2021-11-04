# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn import linear_model

def print_hi(name):
    # Use a breakpoint in the code line below to debug your script.
    print(f'Hi, {name}')  # Press Ctrl+F8 to toggle the breakpoint.
    data = pd.read_csv("Fuel.csv")
    data.head()
    data = data[["ENGINESIZE","CO2EMISSIONS"]]
    plt.scatter(data["ENGINESIZE"], data["CO2EMISSIONS"], color="blue")
    plt.xlabel("ENGINESIZE")
    plt.ylabel("CO2EMISSIONS")
    plt.show()

    # Generating training and testing data from our data:
    # We are using 80% data for training.
    train = data[:(int((len(data) * 0.8)))]
    test = data[(int((len(data) * 0.8))):]

    # Modeling:
    # Using sklearn package to model data:
    regr = linear_model.LinearRegression()
    train_x = np.array(train[["ENGINESIZE"]])
    train_y = np.array(train[["CO2EMISSIONS"]])
    regr.fit(train_x,train_y)

    # The coefficients:
    print("coefficients: ", regr.coef_)   #slope
    print("Intercept: ", regr.intercept_) #intercept

    # Plotting the regression line:
    plt.scatter(data["ENGINESIZE"], data["CO2EMISSIONS"], color="blue")
    plt.plot(train_x, regr.coef_ * train_x + regr.intercept_, '-r')
    plt.xlabel("Engine size")
    plt.ylabel("Emission")

    # predicting values
    # Function for predicting future values
    def get_regression_predictions(input_features,intercept,slope):
        predicted_values = input_features*slope + intercept
        return predicted_values

    # Predicting emission for future car:
    my_engine_size = 3.5
    estimated_emission = get_regression_predictions(my_engine_size,regr.intercept_[0],regr.coef_[0][0])
    print("Estimated Emission : ", estimated_emission)

    # Checking various accuracy:
    #from sklearn.metrics import r2_score
    #test_x = np.array(test[['']])


# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    print_hi('PyCharm')

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
