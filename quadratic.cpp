/*
 David Ortiz
 10/15/2017
 
 Program will calculate the result/s of a quadratic equation using the quadratic formula; user will enter the values for a, b, and c.
 
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    //Variables were all listed here for clarification. Ideally, they would be created only if they would be used
    double a, b, c; //will hold user-entered input for quadratic variables used for calculations in the program.
    bool valid; //will be false unless a!=0
    double realNum; //stores the real number result of the disc, even if disc is negative.
    double realResult; //calculates the real-number result of the square root of the disc
    double plusNumerator; //will hold the result of -b + disc
    double subNumerator; //will hold the result of -b - disc
    double denom; //will store the denominator of the formula (2*a) to be used to divide the result(s) of the numerator
    double plusResult; //will hold the result of plusNumerator/denom
    double subResult; //will hold the result of subNumerator/denom
    double result; //holds the result if there is only 1 result. (if disc==0)
    double disc; //will store the result of the discriminant for use in the program
    double negB; //will convert b to negative b
    double realPart; //separates the real vs imaginary parts of the complex number, allows for proper output form. Only when disc<0.
    double imagPart; //separates the real vs imaginary parts of the complex number, allows for proper output form. Only when disc<0.
    
    cout << "Enter variable a: ";
    cin >> a;
    
    cout << "Enter variable b: ";
    cin >> b;
    
    cout << "Enter variable c: ";
    cin >> c;
    
    //Initializing valid, denom, disc and negB
    valid = false;
    denom = 2.0*a;
    disc = (pow(b, 2)-(4*a*c));
    negB = b*(-1);
    
    //making sure input is quadratic
    if (a!=0){
        valid=true;
    } else {
        cout << "Not a quadratic formula!"<< endl << endl;
    }
    
    if (valid){
    
        if (disc<0){ // if discriminant is negative
            realNum = disc*(-1);
            realResult = sqrt(realNum);
            //imaginaryResult =  realResult * -1;
            
            realPart = negB/denom;
            imagPart = realResult/denom;
            
            if (realPart==-0) realPart=0; //cleaning up output
            
            cout << "The result is: " << realPart << "+" << imagPart << "i and " << realPart << "-" << imagPart << "i"<< endl << endl;
            
            
        } else if(disc>0){// if discriminant is positive
        
            realResult = sqrt(disc);
            plusNumerator = negB + realResult;
            subNumerator = negB-realResult;
            
            plusResult = plusNumerator/denom;
            subResult = subNumerator/denom;
            
            cout << "The result is: " << plusResult << " and " << subResult << endl << endl;
        
        } else if (disc==0){ // if discriminant is zero
            result = negB/denom;
            
            if (result==-0) result=0; //cleaning up output
            
            cout << "The result is: " << result << endl << endl;

        }
        
            
    } // end of valid if
                
    
} // end of main()


