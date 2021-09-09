// Emerson Racca
// 09/08/2021
// Lab 4a: Flow Chart

// Code the given flowchart from the assignment.
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand( time( 0 ) ); // seed random number generator   
    int x = 1 + rand() % 1000; // adding 1 means that 0 is no longer a possibility.
    //cout << x << endl; // used for testing purposes.

    cout << "Number Guessing Game\n\n";

    int y;
    cout << "Enter your guess (1 to 1000): " ;
    cin >> y;
  
    cout << endl;
    
    if(y < x){
        cout << "Too low.";
    } else if (y == x) {
        cout << "You got it!";        
    } else
        cout << "Too high.";
    
    return 0;
}
