class Person(object):
    def __init__(self):
        print ('You have created a new object')
        self.name = None
        self.phonenumber = None

if __name__ == '__main__':
    person = Person()
    person.name = 'Henrik'
    person.phonenumber = 8583526736
    
    person2 = Person()
    person2.name = 'Bob'
    person2.phonenumber = 8585328765
    
    print (person.name)
    print (person.phonenumber)
    
    print (person2.name)
    print (person2.phonenumber)
    
    
    
    
