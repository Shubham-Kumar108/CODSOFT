#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
    int n,no_of_guesses=0;

    // Initialize random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int random_number = rand() % 100 + 1;
    //printf("The random number is: %d\n", random_number);
    do
    {
    cout<<"Guess The number : ";
    cin>>n;
    if(random_number>n)
    cout<<"Your guess is smaller than actual\n";
    else if(random_number<n)
    cout<<"Your guess is greater than actual\n";
    no_of_guesses++;
    }while(n!=random_number);
    cout<<"You guessed the no. in "<<no_of_guesses<<" guesses";
    return 0;
}

