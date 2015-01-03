#ifndef VECTOR2D_H
#define VECTOR2D_H
#include <cmath>

using unit = double;

class vector2D {
    public:
        vector2D(unit newX = 0, unit newY = 0);
        ~vector2D();
        unit getLength() const;
        unit getX() const;
        unit getY() const;
        void normalize();
        void setX(const unit& newX);
        void setY(const unit& newY);
        void set(const unit& newX, const unit& newY);
        void clear();
        vector2D operator+ (const vector2D& otherVector);
        vector2D operator - (const vector2D& otherVector);
        vector2D operator * (const unit& factor);
        vector2D operator / (const unit& factor);
        void operator = (const vector2D& newValue);
    protected:
    private:
        unit x;
        unit y;
};

#endif // VECTOR2D_H