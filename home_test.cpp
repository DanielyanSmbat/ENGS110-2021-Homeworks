
#include <stdio.h>

struct vector
{
        // m_array is the integer pointer
        // which stores the address of our vector
        int* m_array;

        // m_capacity is the total storage
        // capacity of the vector
        int m_capacity;

        // m_current_size is the number of elements
        // currently present in the vector
        int m_current_size;
};

void vector_insert(vector* v, int index, int data)
{
        //TODO
}

void vector_remove(vector* v, int index, int data)
{
        // TODO
}

void vector_set_element(vector* v, int index, int data)
{
        // TODO
}

