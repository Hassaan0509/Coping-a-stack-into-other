#include "pch.h"
#include "Stack.h"

bool stack::swap(stack& s)
{
	stack s1;
	int x = 0;
	int counter = 0;
	while (!isEmpty())
	{
		x = chktop();
		pop();
		while (!s1.isEmpty())
		{
			s.push(s1.chktop());
			s1.pop();
			counter++;
		}
		s1.push(x);
		while (counter>0)
		{
			s1.push(s.chktop());
			s.pop();
			counter--;
		}
	}
	s = s1;
	return true;
}