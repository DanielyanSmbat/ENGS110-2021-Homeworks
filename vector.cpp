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

// Constructor to initialise
// an initial capacity of 1 element and
// allocating storage using dynamic allocation
void vector_init(vector* v)
{
        v->m_array = new int[1];
        v->m_capacity = 1;
        v->m_current_size = 0;
}

// Function to add an element at the last
void vector_push_back(vector* v, int data)
{
        if (v->m_current_size == v->m_capacity) {
                int* temp = new int[2 * v->m_capacity];
                for (int i = 0; i < v->m_current_size; i++) {
                        temp[i] = v->m_array[i];
                }
                delete[] v->m_array;
                v->m_capacity *= 2;
                v->m_array = temp;
        }
        v->m_array[v->m_current_size] = data;
        v->m_current_size++;
}

// function to delete last element
void vector_pop_back(vector* v)
{
        v->m_current_size--;
}

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

// function to extract element at any index
int vector_get_element_by_index(vector* v, int index)
{
        if (index >= 0 && index < v->m_current_size) {
                return v->m_array[index];
        }
        // TODO: THINK
}

// function to get size of the vector
int vector_size(vector* v)
{
        return v->m_current_size;
}

// function to get capacity of the vector
int vector_capacity(vector* v)
{
        return v->m_capacity;
}

// function to print array elements
void vector_print(vector* v)
{
        for (int i = 0; i < v->m_current_size; i++) {
                printf("%d ", v->m_array[i]);
        }
        printf("\n");
}

int main()
{
        vector v;
        vector_init(&v);
        vector_push_back(&v, 10);
        vector_push_back(&v, 20);
        vector_push_back(&v, 30);
        vector_push_back(&v, 40);
        vector_push_back(&v, 50);
        printf("Vector size : %d\n", vector_size(&v));
        printf("Vector capacity : %d\n", vector_capacity(&v));
        printf("Vector elements : ");
        vector_print(&v);
        vector_pop_back(&v);
        printf("After deleting last element\n");
        printf("Vector size : %d\n", vector_size(&v));
        printf("Vector capacity : %d\n", vector_capacity(&v));
        printf("Vector elements : ");
        vector_print(&v);
        return 0;
}
