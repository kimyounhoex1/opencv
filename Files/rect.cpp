#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// template <typename _Tp> class Rect_{
// public:
//   Rect_();
//   Rect_(_Tp _x, _Tp _y, _Tp _width, _Tp _height);
//   Rect_(const Rect_& r);
//   Rect_(const Point<_Tp>& org, const Size_<_Tp>& s2);
//   Rect_(const Point<_Tp>& pt1, const Point_<_Tp>& pt2);

//   Rect_& operator = (const Rect_$ r);

//   Point_<_Tp> tl() const;
//   Point_<_Tp> br() const;
//   Size_<_Tp> size() const;
//   _Tp area() const;
//   bool empty() const;
//   bool conatins(const Point_<_Tp>& pt) const;  

//   _Tp x, y, width, height;
// };

// typedef Rect_<int> Rect2i;
// typedef Rect_<float> Rect2f;
// typedef Rect_<double> Rect2d;
// typedef Rect2i Rect;

int main() {
  Rect rc1; // (0, 0 ~ 0. 0)
  Rect rc2(10, 10, 60, 40); // (60, 40 ~ 10, 10);
  cout << "rc1 = " << rc1 << endl;
  cout << "rc2 = " << rc2 << endl;

  Rect rc3 = rc1 + Size(50, 40); // (0, 0 ~ 50, 40);
  Rect rc4 = rc2 + Point(10, 10); // [60, 40 ~ 20, 20];
  cout << "rc3 = " << rc3 << endl;
  cout << "rc4 = " << rc4 << endl;

  Rect rc5 = rc3 & rc4; // rc3과 rc4의 교집합부분(20, 20 ~ 30, 20)
  Rect rc6 = rc3 | rc4; // Rc3과 rc4의 합집합 부분(0, 0 ~ 60, 40)
  cout << "rc5 = " << rc5 << endl;
  cout << "rc6 = " << rc6 << endl;

}