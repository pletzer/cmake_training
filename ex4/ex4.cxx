#include <mpi.h>
#include <iostream>

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int rk;
    MPI_Comm_rank(MPI_COMM_WORLD, &rk);
    std::cout << "I'm " << rk << '\n';

    MPI_Finalize();
    return 0;
}
