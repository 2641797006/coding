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

	t = move(*p);

	delete p;

	cout<< "delete end" <<endl;

	t.join();
}

