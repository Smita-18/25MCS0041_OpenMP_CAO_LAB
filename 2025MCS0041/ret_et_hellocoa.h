#include "stdio.h"
#include "omp.h"

void fn_ret_et_hellocoa_srl() {

	double start, end;
	start = omp_get_wtime();  // capture the time before print
	printf("Hello coa serial \n");
	end = omp_get_wtime();   // capture the time after print

	printf("Execution Time of Serial Program = %f ns \n", end - start);
}

void fn_ret_et_hellocoa_prl() {

	double start, end;
	start = omp_get_wtime();  // capture the time before print
#pragma omp parallel
	printf("Hello coa Parallel \n");
	end = omp_get_wtime();   // capture the time after print

	printf("Execution Time of Parallel Program = %f ns \n", end - start);
}
