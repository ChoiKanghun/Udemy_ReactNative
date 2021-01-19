# include "Pony.hpp"

void ponyOnTheHeap()
{
	Pony *pony_heap = new Pony("pony on the heap\n");
	pony_heap->speech();
	std::cout << "Deleteing pony on the heap \n";
	delete pony_heap; 
}

void ponyOnTheStack()
{
	Pony pony_stack("pony on the stack\n");
	pony_stack.speech();
	std::cout << "Deleteing Pony on stack\n";
}

int main()
{
	std::cout << "# On Heap #\n";
	ponyOnTheHeap();
	std::cout << "\n\n";

	std::cout << "# On Stack #\n";
	ponyOnTheStack();
	std::cout << "\n";
}
