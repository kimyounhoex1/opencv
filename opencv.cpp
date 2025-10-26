#include <opencv2/opencv.hpp>

int main() {
  cv::VideoCapture cap(0); //웹캠 열기
  if (!cap.isOpened()) 
    return -1;
  
  cv::Mat frame;
  while(true) {
    cap >> frame;
    cv::imshow("hi", frame);

    if(cv::waitKey(1) == 27) break;
  }
}