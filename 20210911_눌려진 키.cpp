// 눌려진 키 
#include <stdio.h>
#include <conio.h>

int main( void )
{
	int ch;
	
	printf( "아무키나 누르세요...\n" );
	
	ch = getch();        //get charcter
	
	printf( "%c 키가 눌려졌습니다. ", ch);
}
