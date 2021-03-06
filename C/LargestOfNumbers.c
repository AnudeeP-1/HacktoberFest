#include<stdio.h>
int largestOfTwo( int num1, int num2 ) {
    if( num1 > num2 )
        return num1;
    return num2;
}

int largestOfThree( int num1, int num2, int num3 ) {
    return largestOfTwo( largestOfTwo( num1, num2), num3 ));
}
int largestOfFour(int num1, int num2, int num3, int num4) {
    return largestOfTwo(largestOfThree(num1, num2, num3), num4)) ;
}
int largestOfFive(int num1, int num2, int num3, int num4, int num5) {
    return largestOfTwo(largestOfFour(num1, num2, num3, num4) , num5)) ;
    }
void main() {

    int n1 = 50;
    int n2 = 400;
    int n3 = -10;
    int n4 = 500;
    int n5 = -50;

    printf( "Largest among n1, n2 : %d\n", largestOfTwo( n1, n2 ) ) ;

    /* Please create below functions to find the largest among the numbers */

    printf( "Largest among n1, n2, n3 : %d\n", largestOfThree( n1, n2, n3 ) ) ;
    printf( "Largest among n1, n2, n3, n4 : %d\n", largestOfFour( n1, n2, n3, n4 ) ) ;

    printf( "Largest among n1, n2, n3, n4, n5 : %d\n", largestOfFive( n1, n2, n3, n4, n5 ) ) ;
    
}
