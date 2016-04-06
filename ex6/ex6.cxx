#include <mpi.h>
#include <iostream>

int main(int argc, char** argv) {
	
  MPI_Init(&argc, &argv);

  int rk, sz;
  MPI_Comm_size(MPI_COMM_WORLD, &sz);
  MPI_Comm_rank(MPI_COMM_WORLD, &rk);

  if (sz == 10) {
  	// failure
  	if (rk == 0) std::cerr << "BOOM!\n";
  	return 1;
  }
  std::cout << "I'm " << rk << '\n';

  if (rk == 0) std::cout << "PASSED\n";
  MPI_Finalize();
  return 0;
}