#ifndef POINT2D_H
#define POINT2D_H

class Point2D 
{
    public:
        Point2D(int, int);
        int getX();
        int getY();

    private:
        int x;
        int y;
};

#endif