#ifndef _COLOUR_H
#define _COLOUR_H


class Colour {
private:
    unsigned char red;

    unsigned char green;

    unsigned char blue;


public:
    Colour();

    //Constructor
    Colour(unsigned char r, unsigned char g, unsigned char b);

    //Overloaded
    ~Colour();

    //Destructor
    //Access methods
    void setRed(unsigned char red);

    unsigned char getRed();

    void setGreen(unsigned char green);

    unsigned char getGreen();

    void setBlue(unsigned char blue);

    unsigned char getBlue();

    static const unsigned char MAX = 255;

};
#endif
