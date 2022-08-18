#include<iostream.h>
#include<conio.h>

	int main()
	{
		int a=50;
		int b=40;
		clrscr();

		if(a == b)
		{
			cout<<"\n a is equal to b:";
		}
		else
		{
			cout<<"\n a is not equal to b:";
		}
		if(a < b)
		{
			cout<<"\n a is less than b:";
		}
		else
		{
			cout<<"\n a is not less than b:";
		}

		if(a > b)
		{
			cout<<"\n a is greater than b:";
		}
		else
		{
			cout<<"\n a is not greater than b:";
		}

		a = 40;
		b = 30;

		if(a <= b)
		{
			cout<<"\n a is less than or equal to b:";
		}
		else
		{
			cout<<"\n a is not less than or equal to b:";
		}

		if(a >= b)
		{
			cout<<"\n a is greater than or equal to b:";
		}
		else
		{
			cout<<"\n a is not greater than or equal to b:";
		}

		return 0;
	}
