#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;


int main() {
  cout << "Hello OpenCV" << CV_VERSION << endl;
  // OpenCV 되는지 확인, Version으로 확인한다.

  Mat img; // Mat 클래스 타입의 변수 선언
  img = imread("test.jpg"); // 이미지 경로로 읽어 들인다.
  // cv 네임스페이스에 정말 많은 것이 담겨져 있음

  if(img.empty()){
    cerr << "Image Load Failed!" << endl;
    return -1;
  }
  // 로드하지 못하거나(파일 손상 및, 파일이 없는 경우) img를 받아오지 못하여 종료
  
  namedWindow("image");
  // 새로운 창을 생성하고, Image 라는 이름을 부여한다.
  imshow("image", img);
  // 새로운 창에 img객체가 가지고 있는 test.jpg를 출력한다.

  waitKey(5000);
  // 5초만큼 기다리고, 사용자가 키보드 입력을 누르면 즉시 종료한다.
  return 0;
}