#include <stdio.h>
#include <stdlib.h>

int main()
{
/* adding different OSes, not just Windows */
#if defined(_WIN32)
  system("start https://www.youtube.com/watch?v=dQw4w9WgXcQ");
#elif defined(__APPLE__)
  system("open -u https://www.youtube.com/watch?v=dQw4w9WgXcQ");
#elif defined(__linux__)
  system("xdg-open https://www.youtube.com/watch?v=dQw4w9WgXcQ");
#else
  printf("Not really sure what to do now...");
#endif

  return 0;
}
