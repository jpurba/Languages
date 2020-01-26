class Student(object):
    def __init__(self, name, number):
        self.name = name
        self.scores = []
        for count in range(number-1):
            self.scores.append(0)

    def getName(self):
        return self.name
  
    def setScore(self, i, score):
        self.scores[i - 1] = score

    def getScore(self, i):
        return self.scores[i - 1]
    
    def getAverage(self):
        return sum(self.scores) / len(self.scores)
  
    def getHighScore(self):
        return max(self.scores)

    def getLowScore(self):
        return min(self.scores)

    def __str__(self):
        return "Name: " + self.name + "\nScores: " + \
            " ".join(map(str, self.scores))

        def __eq__(self, other):
        if (self.name == other.name) and (self.name is other.name):
            return True
        else:            
            return False

    def __lt__(self, other):
        if self.name < other.name:
            return True
        else: 
            return False

    def __ge__(self, other):
        if self.name >= other.name:
            return True
        else:
            return False
  

def main():
    test = int(input("Number of test: "))
    student1 = Student("Ben", test)
    student2 = Student("Ben", test)
    for i in range(1, test):
        student1.setScore(i, 25*i)
        student2.setScore(i, 27*i)
    
    
    print(student1)
    print(student2)
    student1Score1 = student1.getScore(1)
    print("Student 1 Score# 1: ",student1Score1)
    student2Score1 = student2.getScore(1)
    print("Student 2 Score# 1: ",student2Score1)

    print("\n")
    s1HighScore = student1.getHighScore()
    print("Student 1 Highest Score: ",s1HighScore)
    s2HighScore = student2.getHighScore()
    print("Student 2 Highest Score: ",s2HighScore)

    print("\n")
    s1LowScore = student1.getLowScore()
    print("Student 1 Lowest Score: ",s1LowScore)
    s2LowScore = student2.getLowScore()
    print("Student 2 Lowest Score: ",s2LowScore)

    print("\n")
    s1Average = student1.getAverage()
    print("Student 1 Average: ", s1Average)
    s2Average = student2.getAverage()
    print("Student 2 Average: ", s2Average)

    print("\n")
    print("Is student 1 = student 2 ?", student1 == student2)
    print("Is student 1 < student 2 ?", student1 < student2)
    print("Is student 1 > student 2 ?", student1 > student2)

    print(student1.name == student2.name)
    print(student1.name < student2.name)
    print(student1.name >= student2.name)

if __name__ == "__main__":
    main()