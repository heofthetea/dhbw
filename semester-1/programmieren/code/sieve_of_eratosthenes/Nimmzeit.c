#include <stdio.h>
#include <linux/time.h>
#include <termios.h>

double nimmzeit(void);
char getch(void);


// int main(void)
// {
//   double mw1, mw2;
//   mw1 = nimmzeit();
//   printf("\n... druecke beliebige Taste\n");
//   getch();
//   mw2 = nimmzeit();
//   printf("\nvergangene Zeit: %.3f sec\n",mw2-mw1);

//   return 0;
// }

double nimmzeit(void)
{
  double messwert;
  struct timespec ts;

  clock_gettime(CLOCK_REALTIME, &ts);

  messwert = (double)ts.tv_sec + (double)ts.tv_nsec / 1.0e9;

  return messwert;
}

//--------------------------------------------------------------------------------------------------------------

/*

THIS IS SO FUCKING RIDICULOUSLY STUPID

*/

static struct termios old, current;

/* Initialize new terminal i/o settings */
void initTermios(int echo)
{
  tcgetattr(0, &old);         /* grab old terminal i/o settings */
  current = old;              /* make new settings same as old settings */
  current.c_lflag &= ~ICANON; /* disable buffered i/o */
  if (echo)
  {
    current.c_lflag |= ECHO; /* set echo mode */
  }
  else
  {
    current.c_lflag &= ~ECHO; /* set no echo mode */
  }
  tcsetattr(0, TCSANOW, &current); /* use these new terminal i/o settings now */
}

/* Restore old terminal i/o settings */
void resetTermios(void)
{
  tcsetattr(0, TCSANOW, &old);
}

/* Read 1 character - echo defines echo mode */
char getch_(int echo)
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}

/* Read 1 character without echo */
char getch(void)
{
  return getch_(0);
}

/* Read 1 character with echo */
char getche(void)
{
  return getch_(1);
}



/*
struct timeb       ==> aus timeb.h
{
	long	time;
	short	millitm;
	short	timezone;
	short	dstflag;
};

*/
