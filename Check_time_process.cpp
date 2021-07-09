#include <time.h>

int main()
{
	const auto t1 = std::chrono::system_clock::now();
	
	/* 
		process some thing
	*/
	const auto t2 = std::chrono::system_clock::now();
    const auto duration = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
    std::cout << "Time: " << duration / 1e+6 << "s" <<std::endl;
}
