def fibonacci(userNumber):
    firstFib = 0
    secondFib = 1
    sumFib = 0
    while (firstFib < userNumber):
        sumFib += firstFib
        temp = firstFib
        firstFib= secondFib
        secondFib = temp + secondFib
    print(sumFib)

def prime(userNumber):
    for i in range(2,userNumber):
        if (userNumber%i==0):
            print("Your number is not prime")
            return
        
    print("Your number is prime!")
    

def binary(userNumber):
    binString = ""
    if userNumber == 0:
        print("0")
        return
    while(userNumber != 0):
        if(userNumber%2==0):
            binString = "0" + binString
        else:
            binString = "1" + binString
        userNumber //= 2
        
    print(binString)
        
    

def main(userNumber):
    fibonacci(userNumber)
    prime(userNumber)
    binary(userNumber)

userNumber = int(input("Please insert a number: ")) 
main(userNumber)



