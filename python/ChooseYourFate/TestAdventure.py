print("Hello, adventurer!  Welcome to Python Your Fate!")
name = input("What is your name, adventurer? ")
currentchoice = input('''
Your name is ''' + name + "? Is that correct? (y/n) ")
if currentchoice == "n":
    namecorrection = input("Ok.. well.. What is your real name? (last chance) ")
else:
    namecorrection = 0
if namecorrection == name:
    print('''
W- That's just the same thing!
Anyway...''')
if namecorrection != 0:
    name = namecorrection
print('''
Ah, ''' + name + ". What a wonderful name you have")