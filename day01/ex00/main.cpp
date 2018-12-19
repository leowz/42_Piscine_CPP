#include "Pony.hpp"

static void ponyOnTheHeap()
{
    Pony    *ponyPtr = new Pony("Heap Pony", "male", 8);

    ponyPtr->ponyRun();
    ponyPtr->ponyCry();

    delete ponyPtr;
}
static void ponyOnTheStack()
{
    Pony    pony = Pony("Stack Pony", "female", 10);
    
    pony.ponyRun();
    pony.ponyCry();
}

int     main(void)
{
    std::cout << "~~ Pony on the Heap ~~" << std::endl;
    ponyOnTheHeap();
    std::cout << std::endl;
    std::cout << "~~ Pony on the Stack ~~" << std::endl;
    ponyOnTheStack();
    return (0);
}
