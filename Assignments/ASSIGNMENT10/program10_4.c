#include<stdio.h>
////////////////////////////////////////////////
//
// Function Name: FhtoCs
// Description:  accept temperature in Fahrenheit and convert it into celsius.
// Input: double
// Output :double
// Author : Atharva Sanjay More
// Date : 2/11/25
//
////////////////////////////////////////////////
double FhtoCs(float fTemp)
{
    double fceleius = 0.0;

    fceleius = ((fTemp -32) * (5.0/9.0));

    return fceleius;
}       //Time Complexity= O(1)
int main()
{
float fValue = 0.0;
double dRet = 0.0;
printf("Enter temperature in Fahrenheit");
scanf("%f",&fValue);
dRet = FhtoCs(fValue);
printf("temprature in celsius is %lf",dRet);
return 0;
}