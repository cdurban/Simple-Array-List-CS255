/* 
 * Main fucntion to test MyArrayList class
 * File:   main.cpp
 * Author: chase
 *
 * Due on February 17, 2020
 */

#include <cstdlib>
#include <iostream>

#include "MyArrayList.h"

using namespace std;

int main(int argc, char** argv) {
    //Creates a test array
    MyArrayList a1;
    //Tests add without index
    a1.add(1.2);
    a1.add(5.6);
    a1.add(7.8);
    a1.add(9.1);
    cout << "a1 = " <<  a1 << endl << endl;
    
    //Tests the add with index
    a1.add(1,3.4);
    cout << "a1 = " << a1 << endl << endl;
    
    //Tests copy constructor
    MyArrayList a2(a1);    
    //Tests clear()
    a1.clear();
    cout << "a1 = " << a1 << endl;
    cout << "a2 = " << a2 << endl << endl;
    
    //Tests assignment operator
    a1 = a2;
    cout << "a1 = " << a1 << endl;
    cout << "a2 = " << a2 << endl << endl;
    
    //Adds to a cleared and assigned array
    a1.add(1.23);
    cout << "a1 = "<< a1 << endl << endl;
    
    //Tests contains()
    cout << "a1 contains 1.23? ";
    if(a1.contains(1.23))
        cout << "true" << endl << endl;
    else
        cout << "false" << endl << endl;
    cout << "a2 contains 1.23? ";
    if(a2.contains(1.23))
        cout << "true" << endl << endl;
    else
        cout << "false" << endl << endl;
    
    //Tests get()
    cout << "Item at position 3 in a2: " << a2.get(3) << endl << endl;
    
    //Tests indexOf()
    cout << "Index of 1.23 in a1: " << a1.indexOf(1.23) << endl << endl;
    
    //Tests isEmpty()
    MyArrayList a3;
    cout << "Is a2 empty? ";
    if(a2.isEmpty())
        cout << "true" << endl;
    else
        cout << "false" << endl;
    cout << "Is a3 empty? ";
    if(a3.isEmpty())
        cout << "true" << endl << endl;
    else
        cout << "false" << endl << endl;
    
    cout << "a1 = " << a1 << endl;
    cout << "a2 = " << a2 << endl;
    cout << "a3 = " << a3 << endl << endl;
    
    //Tests remove(ItemType o)
    a2.remove(5.6);
    cout << "a1 = " << a1 << endl;
    cout << "a2 = " << a2 << endl;
    cout << "a3 = " << a3 << endl << endl;
    
    //Tests set(int i, ItemType o)
    a1.set(5, 11.12);
    cout << "a1 = " << a1 << endl;
    cout << "a2 = " << a2 << endl;
    cout << "a3 = " << a3 << endl << endl;
    
    //Tests size()
    cout << "Size of a1 = " << a1.size() << endl;
    cout << "Size of a2 = " << a2.size() << endl;
    cout << "Size of a3 = " << a3.size() << endl << endl;
    
    //Tests subList()
    a3 = a1.subList(1,4);
    cout << "a1 = " << a1 << endl;
    cout << "a2 = " << a2 << endl;
    cout << "a3 = " << a3 << endl << endl;
    
    
    
    return 0;
}

