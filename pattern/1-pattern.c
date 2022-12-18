#include <stdio.h>

void main (void)
{
	int i, j, rowNum;

	prinf("Please enter number of row\n");

	scanf("%d number of row",&rowNum);

	for (i = 1; i <= rowNum; i++)
	{
		for (j = 1; j<= i; j++)
		{
			printf (j);
		}
		printf(\n);
	}
	return (0);
}
