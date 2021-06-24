
#ifndef SHAPE_H_
#define SHAPE_H_

class Shape{
protected:
short int x; // width
short int y; // height

public:
Shape();
virtual void setX();
virtual void setY();

void rotateLeft();
void rotateRight();

};
#endif /* SHAPE_H_ */