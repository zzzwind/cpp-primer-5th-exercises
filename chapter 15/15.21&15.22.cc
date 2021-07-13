#include<iostream>

using namespace std;

class ShapeBase {
public:
  ShapeBase() = default;
  virtual void speak() const = 0;
  virtual ~ShapeBase() = default;
};

class Shape3D : public ShapeBase {
public:
  Shape3D() = default;
  void speak() const override { cout << "3D shape" << endl; }
};

class Shape2D : public ShapeBase {
public:
  Shape2D() = default;
  void speak() const override { cout << "2D shape" << endl; }
};

class Rectangle : public Shape2D {
public:
  Rectangle() = default;
  void speak() const override { cout << "Rec shape" << endl; }
};

class Circle : public Shape2D {
public:
  Circle() = default;
  void speak() const override { cout << "Circle" << endl; }
};

class Sphere : public Shape3D {
public:
  Sphere() = default;
  void speak() const override { cout << "Sphere" << endl; }
};

class Cone : public Shape3D {
public:
  Cone() = default;
  void speak() const override { cout << "cone" << endl; }
};

void print(ShapeBase &b) {
  b.speak();
}

int main() {
  Circle c;
  print(c);
  return 0;
}
