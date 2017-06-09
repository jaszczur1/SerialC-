#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>
#include <cstdio>
#include<iostream>


using namespace std;

/*  To use this exported function of dll, include this header
 *  in your project.
 */

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C"
{
#endif

void DLL_EXPORT  printer(string text);

#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__
