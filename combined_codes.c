/* ==========================================================================
   File: AOC.c
   ========================================================================== */

// Area of circle
#include<stdio.h>
float main()
{
    float r,pi=3.14;
    float area_of_circle;
    area_of_circle=pi*r*r;
    
printf("Area of a circle=%f",area_of_circle);
 return 0;
 
}


/* ==========================================================================
   File: AOR.c.c
   ========================================================================== */

// Area of a rectangle
#include<stdio.h>

int main() 
{
float l=2,b=3;
float A;
A=l*b;
 
printf("Area of rectangle=%f",A);

return 0;
    
} 


/* ==========================================================================
   File: AOS.c
   ========================================================================== */

//WACP Area of square
#include<stdio.h>
int main()
{
float l=6;
float AOS;
AOS=l*l*l*l;

printf("Area of square=%f",AOS);

return 0;
    
}

/* ==========================================================================
   File: AOT.c.c
   ========================================================================== */

// Area of a triangle
#include <stdio.h>

int main() {
	float l, b;
	float AOT;
    
	printf("Insert length and breadth of the triangle: ");
	scanf("%f %f", &l, &b);

	AOT = 0.5 * l * b;

	printf("Area of Triangle = %.2f\n", AOT);

	return 0;
}



/* ==========================================================================
   File: add2numbers.c
   ========================================================================== */

// two numbers addation
#include <stdio.h>

void main()
{
int a=5;
int b=5;
int c;
    c=a+b;
printf("addation=%d",c);
    
}

/* ==========================================================================
   File: employeedata.c
   ========================================================================== */

// display employee data 
#include <stdio.h>

int main() {
    printf("\n employee id:XXXXXXXX");
    printf("\n employee name: ABC");
    printf("\n Employee designation: PQR");
    printf("\n salary:XXXXX");
    printf("\n gender:M");
    return 0;
}

/* ==========================================================================
   File: helloworld.c
   ========================================================================== */

//WACP to display hello world
#include<stdio.h>

void main()
{
    printf("hello world:)");
}

/* ==========================================================================
   File: if.c.c
   ========================================================================== */

//WACP if statement
#include<stdio.h>
int main()
{
int num=2;
if(num<10)
printf("\n given number is less than 10");

return 0;
    
}

/* ==========================================================================
   File: if_else.c.c
   ========================================================================== */

// if...else example
#include <stdio.h>

int main() {
    int num = 12;

    if (num < 10)
    {
        printf("Number is less than 10\n");
    } else
    {
        printf("Number is greater than or equal to 10\n");
    }

    return 0;
}

/* ==========================================================================
   File: multiproblem.c
   ========================================================================== */

//WACP add sub and multiply
#include<stdio.h>

int main()
{
int n1=29,n2=19;
int add;
int sub;
int mult;
add=n1+n2;
printf("\n addation=%d",add);
 
sub=n1-n2;
printf("\n substraction=%d",sub);
 
mult=n1*n2;
printf("\n multiplication=%d",mult);
return 0;
}

/* ==========================================================================
   File: odd_even.c.c
   ========================================================================== */


#include <stdio.h>

int main() {
    int num = 5;

    if (num % 2 == 0) {  // Check if remainder is 0 (even number)
        printf("Number is even!!\n");
    } else {
        printf("Number is odd!!\n");
    }

    return 0;
}

/* ==========================================================================
   File: simpleintrest.c.c
   ========================================================================== */

//simple intrest
#include<stdio.h>
int main()
{
float P=500,R=8.5,T=5;
float I;

I=P*R*T;
printf("\n simple intrest=%f",I);

return 0;
    
}

/* ==========================================================================
   File: sub2numbers.c
   ========================================================================== */

//WACP add sub and multiply
#include<stdio.h>

int main()
{
int n1=29,n2=19;
int add;
int sub;
int mult;
add=n1+n2;
printf("\n addation=%d",add);
 
sub=n1-n2;
printf("\n substraction=%d",sub);
 
mult=n1*n2;
printf("\n multiplication=%d",mult);
return 0;
}

/* ==========================================================================
   File: userdata.c
   ========================================================================== */

//WACP user data
#include<stdio.h>
int main()
{
printf("\n Student name:AB");
printf("\n city: cd");
printf("\n college name:xyz");
printf("\n dob: XX XX XXXX");
printf("\n gender:X");
printf("\n contact:222222222");
return 0;
}

/* ==========================================================================
   File: add3numbers
   ========================================================================== */

//WACP for Addation of 3 numbers
#include <stdio.h>

int main()
{
    int a = 10, b = 12, c = 14;
    int d;
    d = a + b + c;
    printf("Addition = %d", d);
    return 0;
}

/* ==========================================================================
   File: marklist
   ========================================================================== */

#include <stdio.h>

int main()
{
    int m1, m2, m3, total;
    float per;

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    per = total / 3.0;

    printf("\nTotal = %d", total);
    printf("\nPercentage = %.2f%%", per); // Shows 2 decimal points

    if (per >= 70) {
        printf("\nYou are in Distinction");
    } 
    else if (per >= 50 && per < 70) {
        printf("\nSecond Class");
    } 
    else if (per >= 40 && per < 50) {
        printf("\nPass Class");
    } 
    else {
        printf("\nFAIL!!");
    }

    return 0;
}

