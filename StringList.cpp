
#include <iostream>
#include "StringList.h"

StringList::StringList() {
    StringList::first_item = nullptr;
    StringList::iterator = nullptr;
}

void StringList::printAll() {
    StringList::resetIterator();
    do {
        StringList::printCurrent();
    } while(StringList::next());
}

void StringList::printCurrent() {
    std::cout << StringList::iterator->getData() << std::endl;
}

bool StringList::next() {
    if (StringList::iterator->getNext() != nullptr) {
        StringList::iterator = StringList::iterator->getNext();
        return true;
    }
    return false;
}

void StringList::resetIterator() {
    StringList::iterator = StringList::first_item;
}

void StringList::append(const char* string) {
    StringListItem* item = new StringListItem(string);
    StringList::resetIterator();
    if(StringList::iterator == nullptr) {
        StringList::first_item = item;
    } else {
        while(StringList::iterator->getNext() != nullptr) {
            StringList::next();
        }
        StringList::iterator->setNext(item);
    }
}

void StringList::printItem(int position) {
    StringList::resetIterator();
    int count = 0;
    while(position > count) {
        StringList::next();
        count++;
    }
    StringList::printCurrent();
}

std::string* StringList::toArray() {
    int size = StringList::getLength();
    std::string* myArray = (std::string*) calloc((size_t)size, sizeof(std::string));
    StringList::resetIterator();
    int count = 0;
    do {
        myArray[count] = StringList::iterator->getData();
        count++;
    } while(StringList::next());
    return myArray;
}

int StringList::getLength() {
    StringList::resetIterator();
    int count = 0;
    while(StringList::next()){
        count++;
    }
    return count;
}
