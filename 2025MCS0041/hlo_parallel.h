#include "stdio.h"
#include "omp.h"


void fn_hlo_parallel()
{
	#pragma omp parallel;
	printf("print hello world\n");
	}