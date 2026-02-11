#ifndef ADDER_H
#define ADDER_H

#ifdef maths_EXPORTS
#define MATHS_API __declspec(dllexport)
#else
#define MATHS_API __declspec(dllimport)
#endif

MATHS_API int add(int a, int b);

#endif
