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

    // je�li wszystko posz�o dobrze, tutaj mo�emy wywo�a� jak�� funkcj� biblioteczn�
}



   // wsprintf( buf, "256 do pot�gi 2 jest r�wne %lu.", L );
    //MessageBox( hwnd, buf, "Test", MB_ICONINFORMATION
    return 0;
}
