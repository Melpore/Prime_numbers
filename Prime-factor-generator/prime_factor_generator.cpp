// A program which calculates all of the prime factors of a number
#include <iostream>
#include <list>

using namespace std;

int main()
{
    int count = 35;
    list<int> prime_factors;
    int remaining = count;

    // Calculates all prime factors by dividing all numbers until the remaining
    // number is 1 or until the count reachers the square root of the number

    int n = 2;

    while (remaining != 1 and n < remaining + 1){

        while (remaining % (n) == 0 and count != 1 and n != count){
            remaining = remaining / n;
            //cout << remaining << endl;
            prime_factors.push_back(n);
        }
        n += 1;
     }

    if (prime_factors.size() == 0){
        prime_factors.push_back( count );
    }
    cout << "The prime factors of " << count << " are:" << endl;

    string text = "[";
    for (auto factor : prime_factors) {
        text += to_string( factor );
        text += ", ";
    }
    // The last (,) is removed from the string
    text.pop_back();
    text.pop_back();

    text += "]";
