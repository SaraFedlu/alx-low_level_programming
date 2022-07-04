#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print propertes of dog
 * @d: the structure of the attribute dog
 */
void print_dog(struct dog *d)
{
if (d->name != NULL || d->age >= 0 || d->owner != NULL)
{
(d->name != NULL) ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)"));
(d->age >= 0) ? (printf("Age: %.6f\n", d->age)) : (printf("Age: (nil)"));
(d->owner != NULL) ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)");
}
else
{
return;
}
}
