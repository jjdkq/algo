/*
 * main.c
 *
 *  Created on: 2018年8月31日
 *      Author: zhoubo
 */

#include "bubblesort.h"

int main(void)
{
	int i;
	BubbleSort_Ascending();					//升序排序
	printf("\n要降序排序吗？\nY（是） N（否）\n");
	for(i=0;i<2;i++)
	{
		if(getchar()=='Y')
			BubbleSort_Desceding();			//降序排序
	}
	return 0;
}

