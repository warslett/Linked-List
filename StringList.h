//
// Created by William Arslett on 04/05/2015.
//

#ifndef LINKEDLIST_STRINGLIST_H
#define LINKEDLIST_STRINGLIST_H


#include "StringListItem.h"

class StringList {
    private:
        StringListItem* first_item;
        StringListItem* iterator;

    public:
        StringList();
        void resetIterator();
        void printCurrent();
        void printAll();
        bool next();
        void append(const char*);
        std::string* toArray();
        int getLength();
        void printItem(int position);
};


#endif //LINKEDLIST_STRINGLIST_H
