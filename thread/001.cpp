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
	thread t;
	list<thread> lt;

	for (i=0; i<100; ++i) {
		new(&t) thread(sl);
		lt.push_back( move(t) );
	}

	for (auto &x : lt)
		x.join();
}

