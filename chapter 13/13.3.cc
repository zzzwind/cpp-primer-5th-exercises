Point global;
Point foo_bar(Point arg) { //1. 非引用类型的形参
  Point local = arg, *heap = new Point(global); //2.
  *heap = local;
  Point pa[4] = {local, *heap}; //3. 用花括号列表初始化一个数组中的元素
  return *heap;
}
