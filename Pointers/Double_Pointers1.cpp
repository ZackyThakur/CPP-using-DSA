#include<iostream>
using	namespace	std;
int	main(){
		int	a	=	10;
		int	*p	=	&a;
		int	**q	=	&p;
//	Next	three	statements	will	print	same	value i.e.	address	of	a
		cout	<<	&a	<<	endl;
		cout	<<	p	<<	endl;
		cout	<<	*q	<<	endl;
//	Next	two statements	will	print	same	value i.e.	address	of	p
		cout	<<	&p	<<	endl;
		cout	<<	q	<<	endl;
//	Next	two statements	will	print	same	value i.e.	value	of	a which	is	10
		cout	<<	a	<<	endl;
		cout	<<	*p	<<	endl;
		cout	<<	**q	<<	endl;
}
