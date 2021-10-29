# Calculates and lists the prime numbers from 1 to a given range

# count is the upper limit of the range
count = int(input("Type in the uppper limit: "))

# An option to not use the user input option
# count = 10000000

# Create a list "prime[0..n]" and initialize all entries it as true.
# A value in prime[i] will finally be false if i is not a prime, else true.
prime = [True for i in range(count + 1)]
# List to save all the prime numbers
prime_numbers = []

# Start from number 2
p = 2

# Set a condition to stop iteration
while(p * 2 <= count):
    # If prime[p] is not changed, then it is a prime
    if (prime[p] == True):
        # If p is a prime then all multiples of p are not primes
        for i in range(p * 2, count + 1, p):
            prime[i] = False
    p += 1

# Counter of primes
counter = 0
# Save all prime numbers
for p in range(2, count + 1):
    # Check all the True values
    if prime[p]:
        # Append all the values to the list prime_numbers
        prime_numbers.append(p)
        counter += 1

print(prime_numbers)
print("There are " + str(counter) +
      " prime numbers between 1 and " + str(count))
