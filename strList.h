//
// Created by galen on 19/03/2020.
//

#ifndef ALGORITHUMS_FINAL_STRLIST_H
#define ALGORITHUMS_FINAL_STRLIST_H

struct strListNode;
typedef struct strListNode strListNode;
struct strList;
typedef struct strList strList;

// Create and destroy a list
struct strList* strlistConstructor();
void listDestructor(struct strList* list);

// Insert an element into a list. Takes a list and a value to add.
int strlistAdd(struct strList* list, void *element);

// Prints the contents of an array. Takes an initialised list to display.
void strlistDisplay(struct strList* list);

// Retrieves a value from a list. Takes an initialised list, the index of
// the requested element and the address of where the read value should be stored.
// If the value was read then *entity is set and 1 is returned. Otherwise 0 is returned.
int strlistRead(struct strList* list, int index, void * element);

// Returns the first index of the requested element. If the element is not found returns -1
int strlistSearch(struct strList* list, char str[]);

// Removes an entity from a list at the given index
int strlistRemove(struct strList* list, int index);

// Returns the number of items in the list
int strlistSize(struct strList* list);

// Returns 1 if the list is empty and 0 otherwise
int strlistIsEmpty(struct strList* list);

//sorts through the array using bubble sort method switching to largest value when found.
void strlistBubbleSort(struct strList* list);

#endif //ALGORITHUMS_FINAL_STRLIST_H
