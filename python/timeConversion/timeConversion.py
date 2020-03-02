import constant

#int divTwelve(int hours) {
#    return hours / MAX_HOURS;
#}

#int compareInput(int input, int threshold) {
#    if ((input % threshold) == ZERO) {   // check for multiple of threshold
#        return ZERO;
#    }
#    else if (input > threshold) {
#        input -= threshold;
#        return input;
#    }
#    return input;
#}

def dividesSixty(input):
    return input / constant.MINUTES_IN_HOURS

def modSixty(input):
    return input % constant.MINUTES_IN_HOURS

def divTwelve(input):
    return input / constant.MAX_HOURS

def main():
    minutes = 75
    outHours = dividesSixty(minutes)
    print ("outHours = ", outHours)
    outMinutes = modSixty(minutes)
    print("outMinutes = ", outMinutes)
    totalHours = divTwelve(minutes)
    print("totalHours = ", totalHours)

if __name__ ==  "__main__":
    main()