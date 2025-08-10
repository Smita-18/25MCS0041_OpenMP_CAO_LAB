#include "stdio.h"
#include "omp.h"

void fn_hellocoa_prl() {

#pragma omp parallel
	printf("Hello coa Parallel\n");
}