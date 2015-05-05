//
// Created by William Arslett on 04/05/2015.
//

#include "StringListItem.h"

StringListItem::StringListItem(const char *data, StringListItem *next)
{
    StringListItem::data = std::string(data);
    StringListItem::setNext(next);
}

std::string StringListItem::getData() {
    return StringListItem::data;
}

StringListItem *StringListItem::getNext() {
    return StringListItem::next;
}

void StringListItem::setNext(StringListItem *next) {
    StringListItem::next = next;
}
