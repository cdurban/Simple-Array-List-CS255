/* 
 * MyArrayList implementation file, allows for array of any size
 * File:   MyArrayList.cpp
 * Author: chase
 * 
 * Due on February 17, 2020
 */

#include <cstdlib>
#include <iostream>

#include "MyArrayList.h"

MyArrayList::MyArrayList(int cap){
    capacity = cap;
    items = 0;
    data = new ItemType[capacity];
}

MyArrayList::MyArrayList(const MyArrayList& m){
    this->capacity = m.capacity;
    this->items = m.items;
    this->data = new ItemType[capacity];
    for(int i = 0; i < items; i++)
        this->data[i] = m.data[i];
}

MyArrayList::~MyArrayList(){
    delete[] data;
}

void MyArrayList::operator =(const MyArrayList &m){
    this->capacity = m.capacity;
    this->items = m.items;
    if(this->data!=NULL)
        delete[] data;
    this->data = new ItemType[capacity];
    for(int i = 0; i < items; i++)
        this->data[i] = m.data[i];
}

void MyArrayList::increaseCap(){
    capacity *= 2;
    ItemType *newData = new ItemType[capacity];
    for(int i = 0; i < items; i++)
        newData[i] = data[i];
    delete[] data;
    data = newData;
}

void MyArrayList::add(ItemType e){
    if(capacity == items)
        increaseCap();
    data[items++] = e;
}

void MyArrayList::add(int index, ItemType e){
    if(index < 0)
        index = 0;
    else if(index >= items)
        index = items-  1;
    for(int i = items; i >= index; i--)
        data[i + 1] = data[i];
    data[index] = e;
    items++;
}

void MyArrayList::clear(){
    capacity = 10;
    items = 0;
    delete[] data;
    data = new ItemType[capacity];
}

bool MyArrayList::contains(ItemType o){
    for(int i = 0; i < items; i++)
        if(data[i] == o)
            return true;
    return false;
}

MyArrayList::ItemType MyArrayList::get(int index){
    if(index < 0)
        index = 0;
    else if(index >= items)
        index = items - 1;
    return data[index];
}

int MyArrayList::indexOf(ItemType o){
    for(int i = 0; i < items; i++)
        if(data[i] == o)
            return i;
    return -1;
}

bool MyArrayList::isEmpty(){
    if(items == 0)
        return true;
    return false;
}

bool MyArrayList::remove(int index){
    if(0 >= index && index > items){
        for(int i = index; i < items; i++)
        data[i] = data[i+1];
        items--;
        return true;
    }
    return false;
}

bool MyArrayList::remove(ItemType o){
    int index = indexOf(o);
    if(index == -1)
        return false;
    for(int i = index; i < items; i++)
        data[i] = data[i+1];
    items--;
    return true;
}

void MyArrayList::set(int i, ItemType o){
    if(0 <= i &&  i < items)
        data[i] = o;
}

int MyArrayList::size(){
    return items;
}

MyArrayList MyArrayList::subList(int from, int to){
    MyArrayList a;
    if(from < to){
        int length = to - from;
        for(int i = from; i < to; i++)
            a.add(data[i]);
    }
    return a;
}

std::ostream& operator <<(std::ostream &out, const MyArrayList &m){
    out << "<";
    for(int i = 0; i < m.items-1; i++)
        out << m.data[i] << ", ";
    if(m.items == 0)
        out << " >";
    else
        out << m.data[m.items - 1] << ">";
    return out;
}