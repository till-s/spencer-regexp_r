#include <stdio.h>

void
spencer_regerror(s)
char *s;
{
	fprintf(stderr, "regexp(3): %s", s);
}
