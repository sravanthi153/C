1.1.	Write a program to take input of one number and display it on the monitor.
#include <stdio.h>
int main() {   
    int num;
   
    printf("Enter a num "); 
    // reads and stores input
    scanf("%d", &num);

    // displays output
    printf("You entered: %d", num);
    
    return 0;
}
Prints: enter num:12
You  entered 12

2.	Write a program to take input of two numbers and perform all arithmetic operations on them. 
Case: add
#include<stdio.h>

int main()
 {
     int num1, num2, sum;
     printf("Enter a number");
     scanf("%d %d",&num1, &num2);
     sum = num1+num2;
     printf("%d+%d = %d", num1,num2,sum);
     return 0;
    } 
//prints : enter a number:1  3  output: 1+3=4.

Case 2 sub:
#include<stdio.h>
int main()
 {
     int num1, num2, sub;
     printf("Enter a number");
     scanf("%d %d",&num1, &num2);
     sub = num1-num2;
     printf("%d-%d = %d", num1,num2,sub);
     return 0;
     
 }¬
//prints :enter a number 10  8   output : 10-8=2
  
Case 3 multiplication
 #include<stdio.h>
int main()
 {
     int num1, num2, multiplication;
     printf("Enter a number");
     scanf("%d %d",&num1, &num2);
     multiplication = num1*num2;
     printf("%d*%d = %d", num1,num2,multiplication);
     return 0;
     
 }
//prints enter a number 12 12 output:12*12=144

 Case 4 Division :

#include<stdio.h>
int main()
 {
     int num1, num2, Division;
     printf("Enter a number");
     scanf("%d %d",&num1, &num2);
     Division = num1/num2;
     printf("%d/%d = %d", num1,num2,Division);
     return 0;
     
 }  // prints enter a number 12 12 output: 12/12=1

4.Take input of Number of inches and display its equivalent number feet.
#include<stdio.h>
int main()
{
    int feet,inches;
    printf("enter the value of feet");
    scanf("%d",&feet);
    inches=feet*12;
    printf("Total inches will be: %d\n",inches);
    return 0;
}
   //prints enter the value of feet: 5.4 
Output: total inches will be 60.

3.Take input of number of feet and convert into inches and display  
#include<stdio.h>
int main()
{
    int feet,inches;
    printf("enter the value of inches");
    scanf("%d",&inches);
    feet=inches/12;
    printf("feet: %d\n",feet);
    return 0;
}
   //prints:
Input 168
Output 14.
5. Take input of temperature in Fahrenheit and convert into centigrade and display.  

int main()
{
    float celsius, fahrenheit;

    /* Input temperature in fahrenheit */
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    /* Fahrenheit to celsius conversion formula */
    celsius = (fahrenheit - 32) * 5 / 9;

    /* Print the value of celsius */
    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

    return 0;
}
//Enter temperature in Fahrenheit:200
Output is 93.33
  
6.  Take input of temperature in centigrade and convert into Fahrenheit and display.
int main()
{
 float fahr, cel;
 printf("Enter the temperature in celsius: ");
 scanf("%f", &cel);

 fahr = (1.8 * cel) + 32.0; //temperature conversion formula
 printf("\nTemperature in Fahrenheit: %.2f F\n", fahr);
 return 0;
}
//Enter the temperature in celsius:50
Temperature in Fahrenheit:122.00f

7.Take input of your name and display.  
#include<stdio.h>  
void main()  
{
     printf( " My Name Is sravanthi " );   
      
} //output is My Name Is sravanthi

