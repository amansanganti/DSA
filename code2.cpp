#include <iostream>
using namespace std;

int main(){

    // int n ;
    // cout << "Enter a number: ";
    // cin >> n;
    // if (n>=0){
    //     cout << n << "This is a positive number" << endl;
    // }
    // else{
    //     cout << n << "This is a negative number" << endl;

    // }


    // The number is even or odd

    // int n ;
    // cout << "Enter a number: ";
    // cin >> n;
    // if (n%2 == 0){
    //     cout << n << "This is an even number" << endl;
    // }
    // else{
    //     cout << n << "This is an odd number" << endl;
    // }

    // char ch;
    // cout << "Enter a character: ";
    // cin >> ch;
    // if (ch >= 'a' && ch <= 'z'){
    //     cout << ch << " is a lowercase letter." << endl;
    // }
    // else if (ch >= 'A' && ch <= 'Z'){
    //     cout << ch << " is an uppercase letter." << endl;
    // }
    // else if (ch >= '0' && ch <= '9'){
    //     cout << ch << " is a digit." << endl;
    // }
    // else{
    //     cout << ch << " is a special character." << endl;
    // }


    // TERNARY Statement
    // int n = 66;
    // cout << (n <= 45 ? "n is less than or equal to 45" : "n is greater than 45") << endl;



    // int i = 1;
    // while (i <=n){
    //     cout << i << " " << endl;
    //     i++;
    // }

    // for( int i = 1 ; i <= 9999; i++){
    //     cout << i << " " << endl;
    // }

    // int sum = 0;
    // for (int i = 1; i <=10 ; i++){
    //     sum += i;
    //     if ( i == 5){
    //         break;
    //     }
    // }
    // cout << sum << endl;
    // return 0;
// }

//     int sum = 0;
//     for (int i = 1; i <=10 ; i++){
//         sum += i;
//         if( i%2 == 1){
//             cout << i << " " << endl;
//         }
//     }
// }   

//  The number is prime or not

int n = 10;
for( int i = 2 ; i <= n-1 ; i++){
    if (n % i == 0){
        cout << n << " is not a prime number." << endl;
        return 0;
    }
    else{
        cout << n << " is a prime number." << endl;
        return 0;
    }
}
}

