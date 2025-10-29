#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// template<typename _Tp> class Size_{
// public:
//   Size_(); // 기본 생성자 (0, 0)
//   Size_(_Tp _width, _TP _height); // _width, _height로 초기화
//   Size_(const Size_& sz); // sz->_width와 sz->_height로 초기화

//   Size_& operator = (const Size_&sz); // 대입 연산자 재정의

//   _Tp area() const; // 영역의 넓이
//   bool empty() const; // 비어있는지 확인

//   _Tp width, height; // width는 가로, height는 세로를 나타낸다.
// };

// typedef Size_<int> Size2i;
// typedef Size_<int64> Size2k;
// typedef Size_<float> Size2f;
// typedef Size_<double> Size2d;
// typedef Size2i Size;

int main() {
  Size sz1;
  sz1.width = 5, sz1.height = 10;
  Size sz2(10, 30);

  int area = sz1.area();
  cout << "sz1 area = " << area << endl;
  Size sz3 = sz1 + sz2;
  cout << "sz3 = " << sz3 << endl;
  Size sz4 = sz1 * 2;
  cout << "sz4 = " << sz4 << endl;
  cout << "sz3.empty = " << sz3.empty() << endl;
  cout << "sz4.empty = " << sz4.empty() << endl;
}