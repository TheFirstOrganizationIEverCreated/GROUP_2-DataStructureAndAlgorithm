#include <stdio.h>

int getTotalWaysToJump(int targetedLeaf)
{
	if(targetedLeaf == 1)
	{
		return 1;
	}
	else if (targetedLeaf == 2)
	{
		return 2;
	}
	
	return getTotalWaysToJump(targetedLeaf - 1) + getTotalWaysToJump(targetedLeaf - 2);
}

int main()
{
	int targetedLeaf;
	printf("\nThe leaf which the frog wants to be is leaf  ");
	scanf("%d", &targetedLeaf);
	
	if(targetedLeaf <= 0)
	{
		printf("\nWrong input, the target leaf obviously can't be less than 1, please try again  (:\n");
		main();
        return -1;
	}
	
	// int totalWaysToJump = getTotalWaysToJump(targetedLeaf);
	// printf("\nThere're total  %d ways  to jump from leaf 0 to leaf targetedLeaf  :)\n", totalWaysToJump);
	
	printf("\nThere're total  %d ways  to jump from leaf 0 to leaf %d  :)\n", getTotalWaysToJump(targetedLeaf), targetedLeaf);
	
	// prevents the CLI from closing too soon
	printf("\nPlease enter an integer to end the program  :))\n");
	scanf("%*d");
	return 0;
}
