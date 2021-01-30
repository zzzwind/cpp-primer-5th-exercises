struct Y;//forward declaration

struct X {
  Y *y;
};

struct Y {
  X x;
};
