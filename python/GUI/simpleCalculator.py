from tkinter import *

window = Tk()
window.title("Welcome ")
lbl = Label(window, text = "")
lbl.grid(column=0, row=0)

txt = Entry(window, width=10)
txt.grid(column=1, row=0)
lblAdd = Label(window, text="+")
lblAdd.grid(column=1,row=0)

def clickAdd():
    res = "Welcome to " + txt.get()
    lbl.configure(text=res)
    print("Pressed Add")

def clickClear():
    print("Pressed Clear")

def clickQuit():
    print("Pressed Quit")
    
btnAdd = Button(window, text="Add", command=clickAdd)
btnAdd.grid(column = 1, row=1)
btnClear = Button(window, text="Clear", command=clickClear)
btnClear.grid(column = 2, row=1)
btnQuit = Button(window, text="Quit", command=clickQuit)
btnQuit.grid(column = 3, row=1)




window.mainloop()
