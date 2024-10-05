#include <iostream>

using namespace std;
 
int main()
{
    // Declares 
   int input[3]; 
   
   // For loop to input values 
   for (int i = 0; i < 3; i++){
       cout << "Input values into Array: "; 
       cin >> input[i]; 
   }
     if(input[2] < 9){
          input[2] = input[2] + 1; 
     }
     else if(input[2] == 9 && input[1] != 9) {
         input[2] = 0; 
         input[1] = input[1] + 1; 
     }
     

     if(input[0] < 9 && input[1] == 9 && input[2] == 9){
         input[0] = input[0] + 1; 
         input[1] = 0; 
         input[2] = 0; 
     }
   
       cout << "Here is your value + 1: "; 
       cout << input[0];
       cout << input[1]; 
       cout << input[2]; 
   
    return 0;
}
