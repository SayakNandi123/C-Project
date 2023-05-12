#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double num1, num2, result, i, f=1;
    
    printf("Welcome to the Advanced Scientific Calculator!\n");
    printf("Please select an operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Square root\n6. Logarithm\n7. Exponential\n8. Sine\n9. Cosine\n10. Tangent\n11. Factorial\n");
    printf("Enter your choice:");
	scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
            printf("Enter two numbers to add:");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %lf\n", result);
            break;
        
        case 2:
            printf("Enter two numbers to subtract:");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %lf\n", result);
            break;
        
        case 3:
            printf("Enter two numbers to multiply:");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %lf\n", result);
            break;
        
        case 4:
            printf("Enter two numbers to divide:");
            scanf("%lf %lf", &num1, &num2);
            result = num1 / num2;
            printf("Result: %lf\n", result);
            break;
        
        case 5:
            printf("Enter a number to find the square root:");
            scanf("%lf", &num1);
            result = sqrt(num1);
            printf("Result: %lf\n", result);
            break;
        
        case 6:
            printf("Enter a number to find the logarithm (base 10):");
            scanf("%lf", &num1);
            result = log10(num1);
            printf("Result: %lf\n", result);
            break;
        
        case 7:
            printf("Enter a number to find the exponential (e^x):");
            scanf("%lf", &num1);
            result = exp(num1);
            printf("Result: %lf\n", result);
            break;
        
        case 8:
            printf("Enter an angle in degrees to find the sine:");
            scanf("%lf", &num1);
            result = sin(num1 * M_PI / 180.0);
            printf("Result: %lf\n", result);
            break;
        
        case 9:
            printf("Enter an angle in degrees to find the cosine:");
            scanf("%lf", &num1);
            result = cos(num1 * M_PI / 180.0);
            printf("Result: %lf\n", result);
            break;
        
        case 10:
            printf("Enter an angle in degrees to find the tangent:");
            scanf("%lf", &num1);
            result = tan(num1 * M_PI / 180.0);
            printf("Result: %lf\n", result);
            break;
        case 11:
        	 printf("Enter a number to find its factorial:");
        	 scanf("%lf",&num1);
        	 for (i=1;i<=num1;i++){
        	    	f=f*i;
			     }result = f;
           printf("Result: Factorial of %.2lf is %.2lf\n",num1,result);
           break;
        default:
           printf("Invalid choice!\n");
           break;
    }printf("Thanks for using the calculator.\n");
	return 0;
	
}
