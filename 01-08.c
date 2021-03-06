#include <stdio.h>

int main(void)
{
	int blanks, tabs, newlines;
	int c;

	blanks = tabs = newlines = 0;

	while((c = getchar()) != EOF) {
		if(c == ' ')
			++blanks;
		if(c == '\t')
			++tabs;
		if(c == '\n')
			++newlines;
	}

	printf("Blanks: %d\nTabs: %d\nLines: %d\n", blanks, tabs, newlines);

	return 0;
}
