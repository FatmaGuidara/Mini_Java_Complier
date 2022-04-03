from concurrent.futures import process
from curses import window
from glob import glob
import imp
from importlib.resources import path
from tkinter import *
from tkinter import filedialog as fd
import subprocess

window = Tk()
window.title('Mini Java IDE')
global_path = ''
p1 = PhotoImage(file = 'logo.png')
window.iconphoto(False, p1)

def runCode():
    global global_path
    if (global_path == ''):
        saveMsg = Toplevel()
        msg = Label(saveMsg, text="Please save the file first")
        msg.pack()
        return
    command = f'java_compiler.exe < {global_path}'
    process = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=True)
    outputResult , error = process.communicate() 
    output.insert('1.0', outputResult)
    output.insert('1.0', error)

def openFile():
    path = fd.askopenfilename()
    with open(path, 'r') as file:
        code = file.read()
        textEditor.delete("1.0", END)
        textEditor.insert('1.0',code)
        global global_path
        global_path = path

def saveAsFile():
    path = fd.asksaveasfilename()
    with open(path, 'w') as file:
        code = textEditor.get('1.0', END)
        file.write(code)
        global global_path
        global_path = path

def saveFile():
    global global_path
    path = global_path
    with open(path, 'w') as file:
        code = textEditor.get('1.0', END)
        file.write(code)
        
textEditor = Text()
textEditor.config(bg='#362f2e', fg="#d2ded1", insertbackground="white")
textEditor.pack()

output = Text(height=7)
output.config(bg='#362f2e', fg="#1dd604")
output.pack()

menuBar = Menu(window)

fileBar = Menu(menuBar, tearoff=0)
fileBar.add_command(label="Open", command=openFile)
fileBar.add_command(label="Save", command=saveFile)
fileBar.add_command(label="Save As", command=saveAsFile)
fileBar.add_command(label="Exit", command=exit)
menuBar.add_cascade(label='File', menu=fileBar)


runBar = Menu(menuBar, tearoff=0)
runBar.add_command(label="Run", command=runCode)
menuBar.add_cascade(label='Run', menu=runBar)



window.config(menu=menuBar)
window.mainloop()