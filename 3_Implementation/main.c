 #include <stdio.h>
 int addition();
int subtraction();
int multiplication();
int division();
int modulus();
int power();
int factorial(); // it is header file, conatins all function
int main() {
  // variable declaration
  int choice; 
  int num1,num2, answer=0;
  printf("Select the operation you want perform");
  printf("1.Additon\n 2.Subtraction\n 3.multplication \n 4.Division \n 5.Modules\n 6.Power\n 7.Factorial \n ");
  scanf("%d", &choice);

// switch statement
 switch (choice) {

    case 1:
      printf("Enter two number");
      scanf("%d %d",&num1,&num2);
      
      answer = addition(num1,num2); //calling addition function
      
      printf("Answer=%d",answer);
      break;
    case 2:
     printf("Enter two number");
      scanf("%d %d",&num1,&num2);
      answer=subtraction(num1,num2); //calling subtraction function
      printf("Answer=%d",answer);
      break;
    case 3:
      printf("Enter two number");
      scanf("%d %d",&num1,&num2);
      answer = multiplication(num1,num2); //calling multiply function 
      printf("Answer=%d",answer);
      break;
    case 4:
      printf("Enter two number");
      scanf("%d %d",&num1,&num2);
     answer = division(num1,num2);    //calling division function
     printf("Answer=%d",answer);

      break;
    case 5: 
        printf("Enter two number");
        scanf("%d %d",&num1,&num2);
       answer= modulus(num1,num2);  // calling madules function
       printf("Answer=%d",answer);
        break;  
    case 6: 
        printf("\nEnter two numbers to find the power \n");
        printf("number: ");
        scanf("%d",&num1);
 
        printf("power : ");
        scanf("%d",&num2);      // calling power function
       answer= power(num1,num2);
          printf("Answer=%d",answer);
        break;  
    case 7: 
        printf("\nEnter a number to find factorial : ");
        scanf("%d",&num1);
        answer = factorial(num1); //calling  factorial function
        printf("Answer=%d",answer);
        break;  
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
