
/* C keyworods >>


auto :     Declares a variable with automatic storage duration (local to the block).
break :     Exits a loop or switch statement.
case :     Used within a switch statement to identify a specific case to execute.
char :     Declares a character variable.
const :     Declares a constant variable whose value cannot be changed.
continue :     Skips remaining statements in the current loop iteration and continues to the next.
default :     In a switch statement, specifies the code to execute if no other case matches.
do :     Creates a do-while loop, executing the code at least once even if the condition is false.
double :     Declares a double-precision floating-point variable.
else :     Specifies the code to execute if the condition in an if statement is false.
enum :     Creates a user-defined data type consisting of named constants.
extern :     Declares a variable or function defined in another source file.
float :     Declares a single-precision floating-point variable.
for :     Creates a loop with initialization, condition, and increment expressions.
goto :     Transfers control to a specific label within the program.
if :     Executes a block of code only if a specified condition is true.
int :     Declares an integer variable.
long :     Declares a long integer variable.
register :     Declares a variable stored in a processor register for potentially faster access.
return :     Exits a function and optionally provides a return value.
short :     Declares a short integer variable.
signed :     Declares a signed integer variable, allowing positive, negative, and zero values.
sizeof :     Gets the size of a data type or variable in bytes.
static :     Declares a variable with static storage duration, lasting throughout the file.
struct :     Creates a user-defined data type with a collection of related variables.
switch :     Selects one block of code from a set of alternatives based on a variable's value.
typedef :     Creates a new name for an existing data type.
union :     Creates a user-defined data type sharing a memory location with other data types.
unsigned :     Declares an unsigned integer variable, allowing only positive and zero values.
void :     Declares a function that does not return a value.
volatile :     Declares a variable that may be changed by something outside the program.
while :     Creates a loop that executes repeatedly while a specified condition is true.

*/

#include <stdio.h>
int main()
{
    int x = 5;
    char name [20]= "Mahid";
    printf("%s %d", name, x);
    return 0;
}