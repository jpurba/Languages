class Employee:

    num_of_emps = 0
    raise_amount = 1.04
    
    def __init__(self,first,last,pay):
        self.first = first
        self.last  = last
        self.pay   = pay
        self.email = first + '.' + last + '@company.com'
        Employee.num_of_emps += 1 

    def fullname(self):
        return '{} {}'.format(self.first,self.last)

    def apply_raise(self):
        self.pay = int(self.pay * self.raise_amount)

if __name__ == '__main__':
    emp_1 = Employee('Josua','Purba',5000)
    emp_2 = Employee('Test','User',6000)        
    
    print (emp_1.email)
    print (emp_2.email)
    print(emp_1.fullname())
    print(emp_2.fullname())
    Employee.fullname(emp_1)
    Employee.fullname(emp_2)
    print ('Number of Employees: ', + Employee.num_of_emps)

    
    print(' ')
    print('Salary before raise:',+ emp_1.pay)
    emp_1.apply_raise()
    print('Salary after raise:',+ emp_1.pay)
    print('Employee.raise_amount:',+ Employee.raise_amount)
    print('emp_1.raise_amount:',+ emp_1.raise_amount)
    print('emp_2.raise_amount:',+ emp_2.raise_amount)

    emp_1.raise_amount = 1.05
    print(' ')
    print('Update emp_1 only raise_amount to 1.05')
    print('Employee.raise_amount:',+ Employee.raise_amount)
    print('emp_1.raise_amount:',+ emp_1.raise_amount)
    print('emp_2.raise_amount:',+ emp_2.raise_amount)

    print(' ')
    print('Employee.__dict__:', Employee.__dict__)
    print(' ')
    print('emp_1.__dict__:', emp_1.__dict__)
    print('emp_2.__dict__:', emp_2.__dict__)


    
    
