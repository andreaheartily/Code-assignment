#include <stdio.h>
int main(){

    // Program to determine the;
    // Multiple of three, print fizz
    // Multiple of five, print buzz
    // Multiple of seven, print fizzbuzz
    // If none of the above then print the number itself
    
    int x = 12;
    if (x%3==0){
        printf("Fizz\n");
    }
    else{
    printf("%d\n",x);
}


int y=21;
if (y%7==0){
    printf("FizzBuzz\n");
}
else{
    printf("%d\n",y);
}

  int z = 30;
  if (z%5==0){
      printf("Buzz\n");
  }
  else{
      printf("%d\n",z);
  }
  
  
   
    
    
    return 0;
}
