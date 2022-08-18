#include<iostream.h>
#include<conio.h>

	main()
	{
		int a=20;
		int b=15;
		int c;
		clrscr();

		c = a + b;
		cout<<"Addition - Value of c is:"<<c<<;

		c = a - b;
		cout<<"Subtraction - Value of c is:"<<c<<;

		c = a * b;
		cout<<"Multiplication - Value of c is:"<<c<<;

		c = a / b;
		cout<<"Division - Value of c is:"<<c<<;

		c = a % b;
		cout<<"Modulos - Value of c is:"<<c<<;

		c = b++;
		cout<<"Increament - Value of c is:"<<c<<;

		c = a--;
		cout<<"Decreament - Value of c is:"<<c<<;

		return 0;
	}