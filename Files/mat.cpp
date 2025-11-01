#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// class Mat{
// public:
//   Mat();
//   Mat(int rows, int cols, int type);
//   Mat(Size size, int tpye);
//   Mat(int rows, int cols, int type, const Scalar& s);
//   Mat(Size size, int type, const Scalar& s);
//   Mat(const Mat& m);
//   ~Mat();

//   void create(int rows, int cols, int type);
//   bool empty() const;

//   Mat clone() const;
//   void copyTo(OutputArray m) const;
//   Mat& setTo(InputArray value, InputArray mask=noArray());

//   static MatExpr zeros(int rows, int cols, int type);
//   static MatExpr ones(int rows, int cols, int type);

//   Mat& operator = (const Mat& m);
//   Mat operator()(const Rect& roi) const;

//   template<typename _Tp> _Tp* ptr(int i0 = 0);
//   template<typename _Tp> _Tp& at(int row, int col);

//   int dims;
//   int rows, cols;
//   uchar* data;
//   MatSize size;
//   //...
// }
int main() {
  /**
   * rows, cols = 0
   * data = 0(NULL)
   */
  Mat img1; // 클래스 타입의 변수 선언,
  float data[] = {1, 2, 3, 4, 5, 6};
  Mat mat(2, 3, CV_32FC1, data);

  namedWindow("zz");
  imshow("mat", mat);
  waitKey(5000);
}