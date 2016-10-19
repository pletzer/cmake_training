
#include <stdio.h>
#include <stdlib.h>
#ifndef NO_OMP
#include <omp.h>
#endif


int main (int argc, char *argv[])
{
    #pragma omp parallel
    {
        int tid = -1;

        #ifndef NO_OMP
        tid = omp_get_thread_num();
        #endif
        printf("Hello World from thread = %d\n", tid);
    }
}
