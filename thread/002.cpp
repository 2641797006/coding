#include <iostream>
#include <list>
#include <thread>
using namespace std;

void sl(int i)
{
	while(1)
		printf("线程%2d, char=\'%c\'\n", i, getchar());
}

int main()
{
	int i;
	thread t;
	list<thread> lt;

	for (i=0; i<100; ++i) {
		new(&t) thread(sl, i);
		lt.push_back( move(t) );
	}

	for (auto &x : lt)
		x.join();
}

