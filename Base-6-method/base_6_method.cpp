#include <iostream>
#include <list>
#include <cmath>

using namespace std;

int main()
{
    // count is the upper limit of the range
    // count = int(input("Type in the uppper limit: "))
    int count = 1000000;
    int n = 0;

    // Convents the count variable to a value useful for the algorithm
    if (count % 6 <= 4){
        n = count / 6;
    }
    else{
        n = count / 6 + 1;
    }

    // Gives the first two prime numbers as these prime numbers won't
    // register in the program
    list<int> prime_list{3};

    // Finds the prime numbers
    // Only determines numbers which are + 1 or - 1 multiples of 6 as only these
    // numbers can be primer numbers for numbers > 4
    // Only calculates factors of prime numbers up to and including the
    // square root of the number.  Only checks if prime factors are divisible
    for (int i = 1; i <= n; ++i) {
        int limit = sqrt( i * 6 + 1);
        int number = i * 6 - 1;
        for (auto prime : prime_list) {
            if (number % prime == 0){
                break;
            }
            else if (prime > limit){
                prime_list.push_back(number);
                break;
            }
        }
        number = i * 6 + 1;
        for (auto prime : prime_list) {
            if (number % prime == 0){
                break;
            }
            else if (prime > limit){
                prime_list.push_back(number);
                break;
            }
        }

    }


    if (prime_list.back() > count){
        prime_list.pop_back();
    }
    prime_list.push_front(2);

    if (count == 1){
        cout << "There are 0 prime numbers between 1 and 1" << endl;
    }
    else{
        string text = "[";
        for (auto primeItem : prime_list) {
            text += to_string( primeItem );
            text += ", ";
        }

        // The last (,) of the string is deleted
        text.pop_back();
        text.pop_back();

        text += " ]";
        cout << text << endl;

        cout << "There are " << prime_list.size() <<
                " prime numbers between 1 and " << count << endl;
    }

    return 0;
}
