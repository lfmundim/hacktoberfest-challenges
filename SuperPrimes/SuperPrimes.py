import sys

def checkPrime(x):
    # 1 is not a prime
    if x == 1 or x == 0:
        return False
    
    # Loop from 2 to sqrt(x)
    i = 2
    while i*i <= x:

        # If i divides x, x is not a prime number
        if x % i == 0:
            return False

        i+=1
    # x is Prime!
    return True

x = int(sys.argv[1])

numbersList = [x]
numbersList += [int(i) for i in str(x)]

isPrime = list(map(checkPrime, numbersList))

if isPrime[0] == 0:
    print("Nada")

elif sum(isPrime) == len(numbersList):
    print("Super")

else:
    print("Primo")