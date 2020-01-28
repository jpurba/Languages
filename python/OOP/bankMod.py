"""
File: bank.py
This module defines the Bank class.
"""
import pickle
import random
from savingsaccount import SavingsAccount

class Bank:
    """This class represents a bank as a collection of savings accounts.
    An optional file name is also associated
    with the bank, to allow transfer of accounts to and
    from permanent file storage."""

    """The state of the bank is a dictionary of accounts and
    a file name. If the file name is None, a file name
    for the bank has not yet been established."""

    def __init__(self, fileName = None):
        """Creates a new dictionary to hold the accounts.
        If a file name is provided, loads the accounts from
        a file of pickled accounts."""
        self.accounts = {}
        self.fileName = fileName
        if fileName != None:
            fileObj = open(fileName, 'rb')
            while True:
                try:
                    account = pickle.load(fileObj)
                    self.add(account)
                except Exception:
                    fileObj.close()
                    break

    def __str__(self):
        """Returns the string representation of the bank."""
        data = list(map(str, self.accounts.values()))
        print("Original data: ",data)
        data1 = data[2].split("\n")
        data2 = data[1].split("\n")
        
        #data.sort(key=lambda x:x[0])
        data.sort(reverse = False)
        print("Sorted data: ",data)
        #for index in data:
        #    print(index)

        print("dataList = ",data1[0])
        print("dataList = ",data2[0])
        if(data1[0] > data2[0]):
            print("dataList",data1[0]," > ", data2[0])
        else:
            print("dataList",data1[0]," < ", data2[0])

        print(data[0])
        
        #join(map(str,self.accounts.values())
        return "\n".join(map(str, self.accounts.values()))

    def makeKey(self, name, pin):
        """Returns a key for the account."""
        return name + "/" + pin

    def add(self, account):
        """Adds the account to the bank."""
        key = self.makeKey(account.getName(), account.getPin())
        self.accounts[key] = account

    def remove(self, name, pin):
        """Removes the account from the bank and
        and returns it, or None if the account does
        not exist."""
        key = self.makeKey(name, pin)
        return self.accounts.pop(key, None)

    def get(self, name, pin):
        """Returns the account from the bank,
        or returns None if the account does
        not exist."""
        key = self.makeKey(name, pin)
        return self.accounts.get(key, None)

    def computeInterest(self):
        """Computes and returns the interest on
        all accounts."""
        total = 0
        for account in self._accounts.values():
            total += account.computeInterest()
        return total

    def getKeys(self):
        """Returns a sorted list of keys."""
        # Exercise
        return []

    def save(self, fileName = None):
        """Saves pickled accounts to a file. The parameter
        allows the user to change file names."""
        if fileName != None:
            self.fileName = fileName
        elif self.fileName == None:
            return
        fileObj = open(self.fileName, 'wb')
        for account in self.accounts.values():
            pickle.dump(account, fileObj)
        fileObj.close()

# Functions for testing
     
def createBank(numAccounts = 1):
    """Returns a new bank with the given number of
    accounts."""
    names = ("Brandon", "Molly", "Elena", "Mark", "Tricia",
             "Ken", "Jill", "Jack")
    #print("Original Tuple name: ", names)         
    #listNames = list(names)
    #sortedListNames = listNames.sort(reverse = False)
    #print("List name: ", listNames)
    #print("Sorted List name: ", sortedListNames)

    index = 0
    bank = Bank()
    upperPin = numAccounts + 1000
    for pinNumber in range(1000, upperPin):
        name = random.choice(names)
        #name = names[index]
        balance = float(random.randint(100, 1000))
        bank.add(SavingsAccount(name, str(pinNumber), balance))
        index = index+1
    return bank

def testAccount():
    """Test function for savings account."""
    account = SavingsAccount("Ken", "1000", 500.00)
    print(account)
    print(account.deposit(100))
    print("Expect 600:", account.getBalance())
    print(account.deposit(-50))
    print("Expect 600:", account.getBalance())
    print(account.withdraw(100))
    print("Expect 500:", account.getBalance())
    print(account.withdraw(-50))
    print("Expect 500:", account.getBalance())
    print(account.withdraw(100000))
    print("Expect 500:", account.getBalance())
    account2 = SavingsAccount("Ben", "2000", 1000.00)
    print(account2)

def testBank(number = 0):
    """Returns a bank with the specified number of accounts and/or
    the accounts loaded from the specified file name."""
    bank = Bank()
    for i in (range(number)):
        bank.add(SavingsAccount('Name' + str(i + 1),
                                str(1000 + i),
                                100.00))
    return bank    

def main(number = 10, fileName = None):
    """Creates and prints a bank, either from
    the optional file name argument or from the optional
    number."""
    #testAccount()
    Bank1 = createBank(8)
    print(Bank1)
    #data1 = Bank1.get("Brandon","1000")
    #print(data1)
    #bank = testBank(9)
    #print(bank)

   
    
##    if fileName:
##        bank = Bank(fileName)
##    else:
##        bank = createBank(number)
##    print(bank)

if __name__ == "__main__":
    main()