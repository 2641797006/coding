#include <iostream>
#include <thread>
using namespace std;

void sl()
{
	system("sl");
}

int main()
{
	thread t1(sl);// t2(sl);
}

