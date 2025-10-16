#include<stdio.h>
#include<omp.h>
void fn_default_Static_Scheduling()
{
	int i;
	int n = 16;
	omp_set_num_threads(4);
	printf("Static Scheduling Example\n");
#pragma omp parallel for schedule(static)
	for (i = 0;i < n;i++)
	{
		int tid = omp_get_thread_num();
		printf("Iteration %d handled by thread %d\n", i, tid);
	}
}
void fn_static_01()
{
	int i;
	int n = 16;
	omp_set_num_threads(4);
	printf("Static Scheduling Example\n");
#pragma omp parallel for schedule(static,1)
	for (i = 0;i < n;i++)
	{
		int tid = omp_get_thread_num();
		printf("Iteration %d handled by thread %d\n", i, tid);
	}
}
void fn_static_02()
{
	int i;
	int n = 16;
	omp_set_num_threads(4);
	printf("Static Scheduling Example\n");
#pragma omp parallel for schedule(static,2)
	for (i = 0;i < n;i++)
	{
		int tid = omp_get_thread_num();
		printf("Iteration %d handled by thread %d\n", i, tid);
	}
}
