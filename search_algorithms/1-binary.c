#include"search_algos.h"
/**
  *
  *
  *
  *
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, midlle, j;
	int index = 0;
midlle = size /2;

	for ( ; i < size; i++)
	{
		/**printf("searching in array %d", array[i]);*/
		if (array[midlle] > value)
		{
		size = midlle - 1;
			midlle = (size - i) / 2;
		/**	j = i;
			for (j = i; j < size; j++)
			{*/
				printf("searching in array %d\n", array[i]);
	/**		}*/
		}
		else if (array[midlle] < value)
		{
			i = midlle + 1;
			midlle = (size + i) /2;
			j = i;
for (; j < size; j++)
             {
                  printf("searching in array %d\n", array[j]);
            }
		}
		else if (array[midlle] == value)
		{
			index = midlle;
			break;
		}
	}
	if (index == 0)
	{
		return -1;
	}
	else
		return (index);
}


	

