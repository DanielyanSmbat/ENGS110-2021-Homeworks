import random 

def checkIfNumber(user_guess):
    if (user_guess.isnumeric()):
        return True
    else:
        print("The number that you have entered is not a valid name.")
        return False
def checkIfRange(user_guess):
    if((i <= user_guess) and (user_guess <= 100)):
        return True
    else:
        print("The number you have entered is not in the 1-100 range,please try again")
        return False

def getValidValue():
    while(True):
        user_guess = input("Please guess a number in range from 1 to 100")
        if(checkIfNumber(user_guess)):
            user_guess = int(user_guess)
            if(checkIfInRange(user_guess)):
                return user_guess

def main():
    SavedNumber = random.randint(1,100)
    NumberOfSteps = 0
    user_guess = 0

    while(user_guess != SavedNumber):
        user_guess = getValidValue()

        if(SavedNumber == user_guess):
            print("You are the winner! after",NumberOfSteps,"steps")
        elif(SavedNumber > user_guess):
            print("The number is too small")
            NumberOfSteps = NumberOfSteps+1

    print("GoodBye")


main()
