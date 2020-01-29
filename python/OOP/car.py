class Car:
    def __init__(self, color, mileage):
        self.color = color
        self.mileage = mileage
    def __str__(self):
        return 'a {self.color} car'.format(self=self)
def main():
    myCar = Car ('red',37281)
    print(myCar)
    my_car = Car ('blue', 45912)
    print(my_car)

if __name__ == "__main__":
    main()
