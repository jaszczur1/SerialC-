#include <iostream>
#include "..\myDll\main.h"

DWORD L;

using namespace std;

void doSomething(string s) { printf("Hello there\n"); }

int main()
{
    HINSTANCE hDll;
    hDll = LoadLibrary( "myDll" );


if( hDll != NULL )
{
    cout << "biblioteki zalaadowane" << endl;
typedef void( * MYPROC )( string );

    MYPROC printer;
    printer =( MYPROC ) GetProcAddress( hDll, "printer" );

    if( printer != NULL ){

           // printer = &doSomething;
            printer("libary");
    }

    // jeœli wszystko posz³o dobrze, tutaj mo¿emy wywo³aæ jak¹œ funkcjê biblioteczn¹
}



   // wsprintf( buf, "256 do potêgi 2 jest równe %lu.", L );
    //MessageBox( hwnd, buf, "Test", MB_ICONINFORMATION
    return 0;
}
