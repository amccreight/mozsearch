template <typename> struct Point {
  bool IsThereOne();
};

template <typename>
struct Foo {
  template <typename F>
  void Project(Point<F>) {}

  template <typename F>
  void Project(Point<F>, Point<F>) {}

  void Bar() {
    Point<float> p;
    Project(p);
  }
};

template <typename T> void TemplateFunc() {
  Point<T> p;
  p.IsThereOne();
}