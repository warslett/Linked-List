//
// Created by William Arslett on 04/05/2015.
//

#include <iosfwd>
#include <string>

#ifndef LINKEDLIST_STRING_LIST_ITEM_H
#define LINKEDLIST_STRING_LIST_ITEM_H

#endif //LINKEDLIST_STRING_LIST_ITEM_H

class StringListItem
{
private:
    std::string data;
    StringListItem* next;

public:
    StringListItem(const char* data, StringListItem* next = nullptr);
    std::string getData();
    StringListItem* getNext();
    void setNext(StringListItem* next);
};