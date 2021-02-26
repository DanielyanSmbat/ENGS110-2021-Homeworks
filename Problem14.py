import random

print("Hello friend,Please think about a number between 1 and 100")

compGuess = random.randint(1,100)

print("Is this your number? -",compGuess)

userAnswer= input("too high or too low?")

while (True):
    if(userAnswer == "too high"):
        compGuess = int(compGuess//2)
        print("Is this your number? -",compGuess)
    elif (userAnswer == "too low"):
        compGuess = compGuess + int((100-compGuess)//2) 
        print("Is this your number? -",compGuess)
    else:
        break

print("I am the winner!!!")

    

