/**
** LED_Strip.h - Library for writing to RGBW LED strips.
** Contains definition for a color profile as well as a LED Strip
**
** Author: Kevin Gates, 2018
**
*/

#ifndef LED_Strip.h
#define LED_Strip.h

Class Color{
    public:
        Color();
	Color(int r, int g, int b, int w);
	int getr();
	int getg();
	int getb();
	int getw();
	void setCol(int r, int g, int b, int w);

    private:
        int red;
	int green;
	int blue;
	int white;
};

Class Strip{
    public:
        Strip(int rpin, int gpin, int bpin, int wpin);
	Color getCol();
	void setCol(Color color);



};

#endif
