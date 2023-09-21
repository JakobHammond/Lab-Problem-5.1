//
//  main.cpp
//  p5-1
//
//  Created by Jakob Hammond on 9/21/23.
//

#include <iostream>
using namespace std;

int main(void){
    
    int numToSquare = 1;
    int squareNum;
    int evenNum = 2;
    int squareSum = 0;
    int evenSum = 0;
    
    
    for(; evenNum <= 100; evenNum += 2){
        evenSum += evenNum;
    }
    cout << "The sum of all even numbers between 2 and 100, inclusive, is " << evenSum << endl;
    
    for(; numToSquare <= 100; numToSquare++){
        squareNum = numToSquare * numToSquare;
        squareSum += squareNum;
    }
    cout << "The sum of all squares between 1 and 100, inclusive, is " << squareSum << endl;
}
