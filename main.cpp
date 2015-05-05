#include <iostream>
#include "StringList.h"

using namespace std;

int main() {
    StringList* myList = new StringList();
    myList->append("Some Item");
    myList->append("Other Item");
    myList->append("Another Item");
    myList->append("Another Item 2");
    myList->append("Another Item 3");
    myList->append("Another Item 4");
    myList->printAll();
    return 0;
}