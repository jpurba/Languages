class Person(object):
    def __init__(self,name,phonenumber):
        self.name = name
        self.phonenumber = phonenumber  
        
    def setName(self):
        print "we have called setName in object" + self.name
        
    def setName1(self,name):
        self.name = name
    
    def getName(self):
        return self.name
        
    def greet(self):
        print "Hello my name is " + self.getName()
        
    def greet1(self):
        print "Hello my name is " + str(self.getName())
        
if __name__ == '__main__':
    person = Person("Ronnie",123456)
    person2 = Person("Henrik",987654)
    
    print person.name
    
    print person2.name
    
    person.setName()
    person2.setName()
    
    person.setName1("Marcus")
    print person.name
    
    person.setName1("John")
    print person.getName()
    
    person.greet()
    
    person.setName1(123456)
    person.greet1()