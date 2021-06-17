#include <iostream>

void firstPattern(int n){
    for(int i = 0; i<n; i++){
      for (int j = 0; j<=n; j++){
          std::cout << "*";
      }

        std::cout << std::endl;
    }

}

void secondPattern(int n){
    for(int  i = n; i >= 1; i--){
        for (int j = i ; j > 0; j--){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void thirdPattern(int n ){

    //first loop will create the rows
    for(int i = 1 ; i <=n; i++){
        // second loop will give the blank spaces
        for(int k = n - i; k > 0; k--){
            std::cout << " ";
        }
            // third loop will
            for(int j = 1; j <=i; j ++){
                std::cout << "*";
            }


       std::cout << std::endl;
    }

}


// hours glass method

void hourGlass(int n) {
// top half  first for loop will tak in th rows
    for (int i = 1; i <= n; i++) {
        // second for loop  add spaces to each row
        for (int k = 1; k < i; k++)
            std::cout << " ";
// this part will create print the symbol starting at 11 based on the top for loop
        for (int j = i; j <= n; j++)
            std::cout <<"* ";

        std::cout << std::endl;

    }

    //bottom part of the glasshour
    for (int i = n - 1; i >= 1; i--) {
        //print spaces for beginnig to each row
        for (int k = 1; k < i; k++){
            std::cout << " ";
        }

        for (int j = i; j < n; j++){
            std::cout << "*"<< " ";
        }
        // terminate the line and goes tot he next till the condition is done
        std::cout << std::endl;
    }



}

int main() {
    int n =11;
   // hourGlass(n);
   firstPattern(n);
//
//    //invert a triangle first for loop dictates the number of rows second will be used to shape the triangle
//// 1. create a function that takes in a param of n
//// 2. 2 loops 1 will pass in the value of "row" so the total number of rows we want
//// 3. 2nd loops inside of the main one will loop  over *
//
//  void tedHatesMe(int n){
//
//        for (int i = n; i > 0; i--) {
//            //inner loop to handle number of columns
//            for (int j = 0; j < i; j++) {
//
//                //below "see out or cout" will print the program
//
//               std::cout << "* ";
//            }
//
//            //this piece of could will end the line after each row
//            std::cout << std::endl;
//        }
//
//      }
//    int n = 5;
//    tedHatesMe(n);
//
//    return 0;


//second pattern
//    for(int i = 0; i<11; i++){
//        for(int j = 0; j<i; j++){
//            //your code goes here
//            std::cout << "*";
//
//        }
//
//        std::cout << std::endl;
//    }


    // third pattern

 //take in n which will be the number we loop against
 // i = 0 will or first loop is going to loop through  the rows
 //next for will take  i- j an




}





