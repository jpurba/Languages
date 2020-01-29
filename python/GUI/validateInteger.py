from tkinter import *
import tkinter.messagebox

class numOnly:
    def __init__(self, root):
        self.root = root
        self.root.title("Entry Widget Validation")
        self.root.geometry("476x350+300+200")
        self.root.configure(bg="#c0ded9")

        Mainframe = Frame(self.root,bd=10)
        Mainframe.grid()

        Tops = Frame(Mainframe, bd=10, width=100, height=350,relief=RIDGE)
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

        NumOne = StringVar()
        NumTwo = StringVar()
        Answer = StringVar()

def main():
    root = Tk()
    application = numOnly(root)
    root.mainloop()

if __name__ =='__mani__':
    main()
