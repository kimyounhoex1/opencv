#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// class RotatedRect {
// public:
//   RotatedRect();
//   RotatedRect(const Point2f& _center, const Size2f& _size, float _angle);
//   RotatedRect(const Point2f& _point1, const Point2f& point2, const Point2& point3);

//   void points(Point2f pts[]) const;
//   Rect boundingRect() const;
//   Rect_<float> boundingRect2f() const;

//   Point2f center;
//   Size2f size;
//   float angle;
// }
int main() {
  RotatedRect rr1(Point2f(40, 30), Size2f(40, 20), 30.f);
  // 40, 30을 시작으로 40, 20 그리고 30도만큼 회전

  Point2f pts[4];
  rr1.points(pts);
  cout << pts[0] << ", " << pts[1] << ", " << pts[2] << ", " << pts[3] << endl;

}