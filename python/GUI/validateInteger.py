from tkinter import *
import tkinter.messagebox

class numOnly:
    def __init__(self, root):
        self.root = root
        self.root.title("Entry Widget Validation")
        self.root.geometry("576x350+500+500")
        self.root.configure(bg="#c0ded9")

        #===================================== Frame Entry =====================================#

        Mainframe = Frame(self.root,bd=10)
        Mainframe.grid()

        Tops = Frame(Mainframe, bd=10, width=466, height=200,relief=RIDGE)
        Tops.pack(side=TOP)

        self.lblInfo = Label(Tops, font=('Helvetica', 31,'bold'), text="Validate Entry Widget",\
                             justify=CENTER, bg= "#c0ded9")
        self.lblInfo.grid(padx=2)

        MembersName_F = LabelFrame(Mainframe,bd=10, width=466, height=200,
                                   font=('Helvetica', 12,'bold'), text="Customer Name",
                                   relief=RIDGE)
        MembersName_F.pack(side=TOP)

        Receipt_ButtonFrame = LabelFrame(Mainframe,bd=10,width=466, height=200,
                                   font=('Helvetica', 12,'bold'), text="Details",
                                   relief=RIDGE)
        Receipt_ButtonFrame.pack(side=BOTTOM)

        #===================================== Variables =====================================#

        NumOne = StringVar()
        NumTwo = StringVar()
        Answer = StringVar()

        #===================================== Label & Entry =====================================#

        self.lblNumOne = Label(MembersName_F,font=('Helvetica', 16,'bold'),
                               text="Number One", bd=7)
        self.lblNumOne.grid(row=0,column=0, sticky=W)
        self.txtNumOne = Entry(MembersName_F,font=('Helvetica', 16,'bold'),
                               bd=7, textvariable=NumOne, width=31)
        self.txtNumOne.grid(row=0,column=1)

        self.lblNumTwo = Label(MembersName_F,font=('Helvetica', 16,'bold'),
                               text="Number Two", bd=7)
        self.lblNumTwo.grid(row=1,column=0, sticky=W)
        self.txtNumTwo = Entry(MembersName_F,font=('Helvetica', 16,'bold'),
                               bd=7, textvariable=NumTwo, width=31)
        self.txtNumTwo.grid(row=1,column=1)

        self.lblAnswer = Label(MembersName_F,font=('Helvetica', 16,'bold'),
                               text="Answer", bd=7)
        self.lblAnswer.grid(row=2,column=0, sticky=W)
        self.txtAnswer = Entry(MembersName_F,font=('Helvetica', 16,'bold'),
                               bd=7, textvariable=Answer, width=31)
        self.txtAnswer.grid(row=2,column=1)

        #===================================== Functions Entry =====================================#

        def Reset():
            NumOne.set("")
            NumTwo.set("")
            Answer.set("")
            return

        def iExit():
            iExit = tkinter.messagebox.askyesno("Validate Entry Widget","Confirm if you want to exit")
            if iExit > 0:
                root.destroy()
                return

        def numberOnly():
            Item1 = (NumOne.get())
            Item2 = (NumTwo.get())
            if (Item1.isdigit() and Item2.isdigit()):
                Item3 = int(Item1) + int(Item2)
                Answer.set(Item3)
                tkinter.messagebox.showinfo("Correct Data","Well done bro")
                return True
            else:
                Answer.set("Please type integer on both input ")
                tkinter.messagebox.showinfo("Wrong Data", "Change the data")
                return False

        #===================================== Button Entry =====================================#

        self.btnValidate=Button(Receipt_ButtonFrame,padx=18, bd=7,
                                font=('Helvetica', 16,'bold'), width=7, text="Validate",
                                command=numberOnly, bg = "#c0ded9").grid(row=2, column=0, pady=12)
        self.btnReset=Button(Receipt_ButtonFrame,padx=18, bd=7,
                                font=('Helvetica', 16,'bold'), width=7, text="Reset",
                                command=Reset, bg = "#c0ded9").grid(row=2, column=1, pady=12)
        self.btnExit=Button(Receipt_ButtonFrame,padx=18, bd=7,
                                font=('Helvetica', 16,'bold'), width=7, text="Exit",
                                command=iExit, bg = "#c0ded9").grid(row=2, column=2, pady=12)

def main():
    root = Tk()
    application = numOnly(root)
    root.mainloop()

if __name__ =='__main__':
    main()
