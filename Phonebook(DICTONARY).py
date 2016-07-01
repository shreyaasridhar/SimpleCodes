phonebook= {'Shreyaa':8056150653,'Narayana':8056150653,'Anu':9677213807,'Sridhar':+919560258458,'Gopal':9176995010}
print "What do you want to do?"
print "1.Call"
print "2.New contact"
print "3.Remove a contact"
print "4.Edit a contact"
no=int(raw_input())
if no==1:
    name=raw_input('Who do you want to call?')
    print phonebook[name]
elif no==2:
    print "Enter name of the contact: ",
    new=raw_input()
    print "Enter number: ",
    nno=int(raw_input())
    phonebook[new]=nno
elif no==3:
    print "Enter name of the contact: ",
    new=raw_input()
    del phonebook[new]
elif no==4:
    print 
    
    
