# Calculates and lists the prime numbers from 1 to a given range
from math import sqrt

# count is the upper limit of the range
count = int(input("Type in the uppper limit: "))

# An option to not use the user input option
# count = 1000000

# Convents the count variable to a value useful for the algorithm 
if count % 6 <= 4:
    n = count // 6
else:
    n = count // 6 + 1

# Gives the first two prime numbers as these prime numbers won't \
# register in the program
prime_list = [3] 

# Finds the prime numbers
# Only determines numbers which are + 1 or - 1 multiples of 6 as only these \
    # numbers can be primer numbers for numbers > 4 
# Only calculates factors of prime numbers up to and including the \
    # square root of the number.  Only checks if prime factors are divisible
for i in range(1, n + 1):
    limit = int(sqrt(i * 6 + 1))
    number = i * 6 - 1
    for prime in prime_list:
        if number % prime == 0:
            break
        elif prime > limit:
            prime_list.append(number)
            break
    number = i * 6 + 1
    for prime in prime_list:
        if number % prime == 0:
            break
        elif prime > limit:
            prime_list.append(number)
            break
        
if prime_list[-1] > count:
    prime_list.pop(-1)
prime_list.insert(0, 2)
 
if count == 1:
     print("There are 0 prime numbers between 1 and 1")
else:
    print(prime_list)
    print("There are " + str(len(prime_list)) +
          " prime numbers between 1 and " + str(count))
