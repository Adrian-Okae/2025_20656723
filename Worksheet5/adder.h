/** @file
 * This file contains the declarations of all exported functions in the maths library.
 */

 /** Adding function - more detailed explanation
  * This function adds two numbers
  * @param a is the first number
  * @param b is the second number
  * @return sum of a and b
  */
#ifndef ADDER_H
#define ADDER_H

#ifdef _WIN32

// If building a static library, don't use dllimport/dllexport
#ifdef mathsSTATIC
#define MATHSLIBAPI
#else
  // Building/using a DLL
#ifdef mathsEXPORTS
#define MATHSLIBAPI __declspec(dllexport)
#else
#define MATHSLIBAPI __declspec(dllimport)
#endif
#endif

#else
// Non-Windows: nothing special needed
#define MATHSLIBAPI
#endif

MATHSLIBAPI int add(int a, int b);

#endif // ADDER_H
