#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// class Range
// {
// public:
//   Range();
//   Range(int _start, int _end); //시작, 끝

//   int size() const; // 범위의 크기 (end - start)
//   bool empty() const; // start와 end가 같은 경우
//   static Range all(); // INT_MIN ~ INT_MAX 객체 반환 (static인거 참고)
//   // , Range::all() 이렇게 쓰인다.

//   int start, end;
// };

int main() {
  Range r1(0, 10);
  cout << r1.start << ", " << r1.end << endl;
}