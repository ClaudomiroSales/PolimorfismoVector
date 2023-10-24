#ifndef FORMA_H
#define FORMA_H

class Forma
{
public:
	Forma( int );
	virtual ~Forma();
	
	virtual double calcArea( ) { return 0.0; };
	
private:

};

#endif // FORMA_H
