// guess random number game in c++
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int randomNumber ;
    int guess ;
    int chances = 0;

    srand((unsigned int) time(0));
    int number = (rand() % ( 100-1)+1);          
    cout << "Welcome to the guess random number game"<<endl;

    do
    {
        cout << "Enter your guess number between 1 and 100: ";
        cin >> number;
        chances++;
        
        if (guess > randomNumber) 
         {
            cout << "The higher number!" <<endl;
            
        } 
    
        else if(guess < randomNumber)
         {
           cout << "The lower Number!" <<endl ;
        }
        else
               {
            cout << "you got the right number" <<guess<<"in"<< chances<< "tries\n" ;
        }
     }
         while (guess != randomNumber);
    
    return 0;
    
}