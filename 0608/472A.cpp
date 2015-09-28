 #include <iostream> 
 #include <cstdlib> 
 #include <cmath> 
 
 
 using namespace std; 
 
 
 bool IsPrime( int n ) 
 { 
    if ( n == 1 ) 
     { 
         return false; 
     } 

     if ( n == 2 || n == 3 ) 
     { 
         return true; 
     } 
 
 
     if ( n % 2 == 0 ) 
     { 
         return false; 
     } 
 
 
     int sq = ( int ) sqrt( ( double ) n ); 
     for ( int i = 3; i <= sq; i += 2 ) 
     { 
         if ( n % i == 0 ) 
         { 
             return false; 
         } 
     } 
 
 
     return true; 
 } 
 
 
 int main( void ) 
 { 
     // the input number n 
     int n; 
     cin >> n; 
 
 
     int ub = n / 2; 
     for ( int i = 4; i <= ub; ++i ) 
     { 
         if ( !IsPrime( i ) && !IsPrime( n - i ) ) 
         { 
             cout << i << ' ' << n - i << endl; 
             break; 
         } 
     } 
 
 
     return 0; 
 } 
