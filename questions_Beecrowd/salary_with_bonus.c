#include <stdio.h>
#include <string.h>

int main(){

	char saller;
	
	float fix_salary, total_sales;

	scanf("%s %f %f",&saller, &fix_salary, &total_sales);

	float comission = 0.15;

	float total_salary = (total_sales *comission) + fix_salary;

	printf("TOTAL = R$ %.2f", total_salary);

	return 0;

}
