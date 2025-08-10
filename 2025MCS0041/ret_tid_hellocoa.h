 #include <stdio.h>
 #include <omp.h>

void fn_ret_tid_hellocoa_srl() {
    printf("Hello coa Printed by Thread Id : %d\n", omp_get_thread_num());
}

void fn_ret_tid_hellocoa_prl() {
#pragma omp parallel
    printf("Hello coa Printed by Thread Id : %d\n", omp_get_thread_num());
}
