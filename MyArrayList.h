/* 
 * MyArrayList header file
 * File:   MyArrayList.h
 * Author: chase
 *
 * Due on February 17, 2020
 */

#ifndef MYARRAYLIST_H
#define MYARRAYLIST_H

class MyArrayList {
public:
    /** Defines ItemType as a double type */
    typedef double ItemType;
    
    /** Constructor with a default capacity of 10 */
    MyArrayList(int cap = 10);
    
    /** Copy Constructor */
    MyArrayList(const MyArrayList& m);
    
    /** Destructor */
    ~MyArrayList();
    
    /** Assignment operator */
    void operator =(const MyArrayList &m);
    
    /** increases capacity when needed*/
    void increaseCap();
    
    /** 
     * Appends the specified element to the end of the list
     * Precondition : A double, entered as type ItemType
     */
    void add(ItemType e);
    
    /** 
     * Appends the specified element to the specified position
     * Precondition: An int, specifying where to insert the data, or 
     *               negative insert at the beginning, or larger than the
     *               array to insert at the end, and a double, as ItemType
     */
    void add(int index, ItemType e);
    
    /** Removes all elements from this MyArrayList */
    void clear();
    
    /** Checks to see if a given ItemType is in this MyArrayList
     *  Precondition: ItemType variable
     *  Postcondition: a boolean whether the ArrayList contains ItemType o
     */
    bool contains(ItemType o);
    
    /** Returns the item at index, returns item 0 if index less than 0, or
     *  returns last item if index >= items
     *  Precondition: int for desired index
     */
    ItemType get(int index);
    
    /** 
     * Checks to see if a given ItemType is in this MyArrayList and 
     * returns the index
     * Precondition: ItemType variable
     * Postcondition: the index of o, or -1 if not in this MyArrayList
     */
    int indexOf(ItemType o);
    
    /** 
     * Checks to see if the array is empty and returns it
     * Postcondition: boolean whether the array is empty or not.
     */
    bool isEmpty();
    
    /**
     * Removes ItemType at index
     * Precondition: Valid index
     * Postcondition: Whether the item was removed or not
     */
    bool remove(int index);
    
    /**
     * Removes given ItemType from MyArrayList
     * Precondition: ItemType contained in this MyArrayList
     * Postcondition: Whether the item was removed or not
     */
    bool remove(ItemType o);
    
    /** 
     * Sets an ItemType at index i to o 
     * Precondition: index i, to place ItemType o at
     */
    void set(int i, ItemType o);
    
    /**
     * Returns the size of the MyArrayList
     * Postcondition: number of items
     */
    int size();
    
    /**
     * Creates a subList from 'from' inclusive to 'to' exclusive
     * Precondition: from and to, as ints
     * Postcondition: MyArrayList subList
     */
    MyArrayList subList(int from, int to);   
    
    /** Overload of insertion operator */
    friend std::ostream& operator <<(std::ostream &out, 
        const MyArrayList &m);
private:
    int capacity;
    int items;
    ItemType *data;
};

#endif /* MYARRAYLIST_H */

