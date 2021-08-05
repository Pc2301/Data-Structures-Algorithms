using namespace std;
#include<iostream>

void printEgyptianFraction(int numerator, int denominator) {
   

   if (numerator==0 || denominator==0)
   {
   	return;
   }

   // If denominator divides numerator , the number is not a fraction
   if(numerator%denominator==0)
   {
   	cout<<numerator/denominator;
   	return;
   }
   // If numerator divides denominator, then simple division
    // makes the fraction in 1/n form
   if(denominator%numerator==0)
   {
   	cout<<"1/"<<denominator/numerator;

   	return;
   }

   if(numerator>denominator)
   {
   	cout<<int(numerator/denominator);
   	printEgyptianFraction(numerator%denominator,denominator);
   	return;
   }
   // We reach here dr > nr and dr%nr is non-zero
    // Find ceiling of dr/nr and print it as first
    // fraction
    int n = denominator/numerator + 1;
    cout << "1/" << n << " + ";
 
    // Recur for remaining part
    printEgyptianFraction(numerator*n-denominator, denominator*n);
}



// Driver Program
int main()
{
    int nr = 24, dr = 5;
    cout << "Egyptian Fraction Representation of "
         << nr << "/" << dr << " is\n ";
    printEgyptianFraction(nr, dr);
    return 0;
}