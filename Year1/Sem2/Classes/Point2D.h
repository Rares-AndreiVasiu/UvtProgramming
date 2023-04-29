#ifndef POINT2D_H
#define POINT2D_H

class Point2D
{
    public:
       Point2D(int, int);

       Point2D(const Point2D&);
       
       ~Point2D();
       
       int getX();
       
       int getY();
    
    private:
       int *x, *y;
};

#endif
