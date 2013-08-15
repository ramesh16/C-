#include <stdio.h>


int 
main (int argc, char *argv[])
{
  char c[10];
  enum color
  { white, black, red, green, blue, yellow, pink, brown };
  enum color walls, floor;
  printf("Enter the walls color\n");
  scanf("%u",walls);
  if (walls == pink)
    {
      floor = blue;
      printf ("floor is blue\n");
    }
  else
    {
      floor = white;
      printf ("floor is white\n");
    }

  return 0;
}
