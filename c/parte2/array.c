#include <stdio.h>
void bubble_sort(int num_list[],int size)
{
	for (int k = 0; k < size-1; k++)
	{
		for (int x = 0; x < size-1; x++)
		{
			if(num_list[x]>num_list[x+1])
			{
				int temp = num_list[x];
				num_list[x] = num_list[x+1];
				num_list[x+1] = temp;
			}
		}
	}
	
}
int main()
{
	int num_list[]={5,1,3,9,7,11,21,17};
	int size = sizeof(num_list)/sizeof(num_list[0]);
	bubble_sort(num_list, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ",num_list[i]);
	}
	return 0;
}