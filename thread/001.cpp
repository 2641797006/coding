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

	for (i=0; i<10; ++i) {
		lt.push_back(*(new thread(sl)));
		lt.back().join();
	}

}

