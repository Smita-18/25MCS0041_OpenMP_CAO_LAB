#include "stdio.h"
#include "omp.h"

void fn_helloworld_parallel()
{
#pragma omp parallel
	printf("Hello world parallel\n");
}

void fn_helloworld_serial()
{

	printf("Hello world serial \n");

}

