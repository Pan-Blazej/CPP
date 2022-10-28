#include "h.h"

int main()
{
	char	cc;
	void	*wv = &cc;
	char	*wc;
	
	
	wc = reinterpret_cast <char*> (wv);
	
	
	PAUSE;
}