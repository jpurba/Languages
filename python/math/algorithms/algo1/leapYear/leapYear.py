
def main():
    year = int(input("Enter a year: "))
    if ((year>= 1900) and (year<=100000)):
        print(leapYear(year))



def leapYear(year):
    if year % 400 == 0:
        return True
    if year % 100 == 0:
        return False
    if year % 4 == 0:
        return True
    else:
        return False



if __name__ == "__main__":
    main()