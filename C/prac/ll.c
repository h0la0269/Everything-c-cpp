#include <stdio.h>
#include<stdlib.h>
#define ITEM int
typedef struct block
{
	ITEM data;
	struct block *next;
}node;
