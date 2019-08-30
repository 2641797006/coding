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

	thread *p = new thread(sl), t;
	list<thread> lt;

	lt.push_back( move(*p) );

	delete p;

	cout<< "delete end" <<endl;

	lt.back().join();

}

