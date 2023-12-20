#include <iostream>
using namespace std;

class Shape {
public:
    virtual void Show_data() = 0;
    virtual void Area() = 0;
};

class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float len, float wid) : length(len * 2), width(wid / 2) {}

    void Show_data() override {
        cout << "the length of the rectangle is " << length << " and the width is " << width << endl;
    }

    void Area() override {
        cout << "\t The area of the rectangle = " << (length * width) << endl;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(int rad) : radius(rad / 2) {}

    void Show_data() override {
        cout << "the radius of the circle is " << radius << endl;
    }

    void Area() override {
        cout << "\t The area of the circle = " << (3.14 * radius * radius) << endl;
    }
};

int main() {
    Shape* shp;
    Rectangle rec(5.5, 6);
    shp = &rec;
    shp->Show_data();
    shp->Area();

    Circle cir(10);
    shp = &cir;
    shp->Show_data();
    shp->Area();

    return 0;
}
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void Show_data() = 0;
    virtual void Area() = 0;
};

class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float len, float wid) : length(len * 2), width(wid / 2) {}

    void Show_data() override {
        cout << "the length of the rectangle is " << length << " and the width is " << width << endl;
    }

    void Area() override {
        cout << "\t The area of the rectangle = " << (length * width) << endl;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(int rad) : radius(rad / 2) {}

    void Show_data() override {
        cout << "the radius of the circle is " << radius << endl;
    }

    void Area() override {
        cout << "\t The area of the circle = " << (3.14 * radius * radius) << endl;
    }
};

int main() {
    Shape* shp;
    Rectangle rec(5.5, 6);
    shp = &rec;
    shp->Show_data();
    shp->Area();

    Circle cir(10);
    shp = &cir;
    shp->Show_data();
    shp->Area();

    return 0;
}
