// Calculates and lists the prime numbers from 1 to a given range
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // count is the upper limit of the range
    int count = 1000000;

    // Get prime numbers and how many prime numbers exist

    // Create a list "prime[0..n]" and initialize all entries it as true.
    // A value in prime[i] will finally be false if i is not a prime, else true.

    vector<bool> prime;
    for (int i = 0; i < count + 1; ++i) {
        prime.push_back(true);
    }

    // List to save all the prime numbers
    vector<int> prime_numbers;

    // Start from number 2
    int p = 2;

    // Set a condition to stop iteration
    while(p * 2 <= count){
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true){
            // If p is a prime then all multiples of p are not primes
            for( int i = p*2; i < count + 1; i += p ){
                prime[i] = false;
            }
        }
        p += 1;
    }

    // Counter of primes
    int counter = 0;
    // Save all prime numbers
    for( int p = 2; p < count + 1; ++p ){
        // Check all the True values
        if (prime[p]){
            // Append all the values to the list prime_numbers
            prime_numbers.push_back(p);
            counter += 1;
        }
    }

    string text = "[";
    for (auto prime : prime_numbers) {
        text += to_string( prime );
        text += ", ";
    }
    // The last (,) is removed from the string
    text.pop_back();
    text.pop_back();

    text += "]";

    cout << text << endl;


    cout << "There are " << counter << " prime numbers between 1 and " << count << endl;

    return 0;
}
