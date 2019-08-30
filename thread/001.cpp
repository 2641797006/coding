#include <iostream>
#include <list>
#include <thread>
using namespace std;

void sl()
{
	system("sl");
}

int main()
{
	int i;
	list<thread> lt;

	for (i=0; i<2; ++i) {
		lt.push_back( move(*new thread(sl)) );
		lt.back().join();
	}
}

