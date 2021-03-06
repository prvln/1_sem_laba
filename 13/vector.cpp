#include "assert.h"
#include "stdlib.h"
#include "stdio.h"
#include "vector.h"

int *data = 0;
size_t size = 0;
size_t capacity = 0;

void reserve(size_t newCap)
{
    if (newCap > capacity)
    {
        capacity = (capacity == 0) ? 1 : capacity;
        
        while (newCap > capacity)
            capacity <<= 1;
        
        if (data == 0)
            data = (int *)malloc(capacity * sizeof(int));
        else
            data = (int *)realloc((void *)data, capacity * sizeof(int));
    }
}

void append(int value)
{
    reserve(size+1);
    
    data[size] = value; 

    size++;
}

void insert(size_t pos, int value)
{
    assert(pos < size);
    
    reserve(size+1);

    for (int i = size; i > pos; i--)
        data[i] = data[i-1];
    
    data[pos] = value; 
    
    size++;
}

void erase(size_t pos)
{
    assert(pos < size);

    for (int i = pos; i < size; i++)
        data[i] = data[i+1];
    
    size--;
}

void print()
{
    for (int i = 0; i < size; i++)
        printf("%d ", data[i]);

    printf("\n");
}

void squeeze()
{
    if (data == 0)
        return;

    if (size == 0)
    {
        free(data);
        return;
    }
    
    data = (int *)realloc((void *)data, size * sizeof(int));
    capacity = size;
}

void deleteSome(int a, int b) {
  for(int i = 0; i < size;i++){
	  if((data[i] >= a)&&(data[i] <= b)){
		  erase(i);
		  i--;
		  }
	  } 	
}
