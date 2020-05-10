#include <stdio.h>
#include <signal.h>

#define QUIT 'q'
#define NEW_PIPE 'n'
#define WRITE_TO_PIPE 'w'
#define READ_FROM_PIPE 'r'
#define CLOSE_PIPE_END 'c'

static int getCommand()
{
   char command;

   printf("\nCommand Menu:\n");
   printf("   n - Create a new pipe\n");
   printf("   w - Write to a pipe end\n");
   printf("   r - Read from a pipe end\n");
   printf("   c - Close a pipe end\n");
   printf("   q - Quit\n\n");
   printf("Enter a command: ");

   /* I know, this expects the user to be perfect - hey it's an exercise! */
   scanf(" %c", &command);
   return command;
}

static int doACommand()
{
   char command = getCommand();
   
   switch (command)
   {
      case NEW_PIPE:
         /* Good design/decompostion suggest calling a helper function here! */
         printf("TODO: You must provide this functionality!\n");
      break;

      case WRITE_TO_PIPE:
         /* Good design/decompostion suggest calling a helper function here! */
         printf("TODO: You must provide this functionality!\n");
      break;

      case READ_FROM_PIPE:
         /* Good design/decompostion suggest calling a helper function here! */
         printf("TODO: You must provide this functionality!\n");
      break;

      case CLOSE_PIPE_END:
         /* Good design/decompostion suggest calling a helper function here! */
         printf("TODO: You must provide this functionality!\n");
      break;

      case QUIT:
         printf("Bye Bye - see you next time!\n");
      break;

      default:
         printf("Unknown command, please try again...\n");
   }

   return command;
}

/*
 * NOTE: The SIGPIPE signal is ignored in this program so that you can see the
 *       error that occurs when you try to write to a pipe whose read-end is
 *       closed - be sure to try that scenario!
 */
int main()
{
   int command = !QUIT;

   /* See comment block preceding main */
   signal(SIGPIPE, SIG_IGN);

   while (command != QUIT)
      command = doACommand();

   return 0;
}
