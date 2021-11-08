#include <iostream>


int main ()
	Rectangulo obj (3, 4);
	Rectangulo * foo , * bar, * baz;
	foo = &obj
	bar = new Rectangulo (5, 6);
	baz = new Rectangulo [2 ] { {2,5}, {3,6} };
	cout << "obj's area : " << obj.area () << '\n';
	cout << "foo's area : " << foo area () << '\n';
	cout << "bar's area : " << bar area () << '\n';
	cout << "baz [0]'s area :" << baz [ area () << '\n';
	cout << "baz [1]'s area :" << baz [ area () << '\n';
delete bar;
delete[] baz;
return 0;
}

