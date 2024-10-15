//Q-20 Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>

main()
{
	float basic_salary,gross_salary,hra,da;
	
	printf("Enter basic salary of employ:");
	scanf("%f",&basic_salary);
	
	if(basic_salary<=10000)
	{
		da=0.8*basic_salary;
		hra=0.2*basic_salary;
	}
	else if(basic_salary<=20000)
	{
		da=0.25*basic_salary;
		hra=0.9*basic_salary;
	}
	else{
		da=0.3*basic_salary;
		hra=0.95*basic_salary;
	}
	
//	calculate gross salary
	gross_salary=basic_salary+hra+da;
	
//	display the gross salary
	printf("Gross salary of the employ: %2f\n",gross_salary);
	
	return 0;
	
	
}
