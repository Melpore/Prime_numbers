# A program which calculates all of the prime factors of a number
from math import sqrt

# count is the upper limit of the prime number range
count = int(input("Type in the uppper limit: "))

# An option to not use the user input option
#count = 100000000

# Cacluates all prime factors by dividing all numbers until the remaining \
# number is 1 or until the count reachers the square root of the number
prime_factors = []
remaining = count

# Cacluates all prime factors by dividing the prime numbers until the remaining number is 1
for n in range(int(sqrt(count)) + 1):
    while remaining % (n + 2) == 0 and count != 1 and (n + 2) != count:
        remaining = remaining / (n + 2)
        prime_factors.append(n + 2)
if prime_factors == []:
    prime_factors = [count]
    
print("The prime factors of " + str(count) + " are:")
print(prime_factors)
