#pragma once
#include<stdio.h>
#include "helloworld.h"

int fn_mnudrvprg_helloworld()
{
	int choice;
	while (1)
	{
		printf("List of choices\n");
		printf("1-Hello world serial program \t 2-Hello world program parallel\n ");
		printf("Enter your choice\n");
		scanf_s("%d", &choice);
		switch (choice)
		{

		case 0:
		{
			printf("You opted to exit current menu\n");
			return 0;
		}
		case 1:
		{
			printf("The following is Hello world serial program output\n");
			fn_helloworld_serial();
			break;
		}

		case 2:
		{
			printf("The following is Hello world parallel program output\n");
			fn_helloworld_parallel();
			break;
		}

		default:
		{
			printf("You opted wrong choice \n");
			break;
		}

		}

	}
	return 0;

}

