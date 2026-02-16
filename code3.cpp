// PATTERNS
#include <iostream>
using namespace std;
int main(){

    // int n = 4;
    // for ( int i = 1; i<= n ; i++){ // Outer loop for rows

    //     for(int j = 1; j<= n ; j++){ // Inner loop for columns
    //         cout << j << " "; 
    //     }

    //     cout << endl;
    // }

    // int n = 4;
    // for (int i = 1; i<= n; i++){
    //     for (int j= 1; j<= n ; j++){
    //         cout << "*" << " ";

    //     }  
    //     cout << endl;
    // }
    // int n = 4;
    // for (int i = 0; i < n; i++){
    //     char ch = 'A';
    //     for ( int j = 0; j< n; j++){
    //         cout << ch << " ";
    //         ch++;
            
    //     } 
    //     cout << endl;
    // }

    int n = 3;
    for (int i = 0; i < n; i++){
        int num = 1;
        for (int j= 0; j < n; j++){
            cout << num << " ";
            num++;
            
        }
        cout << endl;
    }

    return 0;
}