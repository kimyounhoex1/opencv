#include <opencv2/opencv.hpp>

int main() {
  // 1기본 카메라 장치(0번 장치) 열기 
  cv::VideoCapture cap(0); // 웹캠 연결
  if (!cap.isOpened()) {
    std::cerr << "웹캠을 열 수 없습니다!" << std::endl;
    return -1;
  }

  // 한 프레임(이미지)를 담을 Mat 객체 생성
  cv::Mat frame;

  // 무한 루프: 계속해서 영상 프레임 읽기
  while (true) {
    cap >> frame; // 웹캠에서 프레임 가져오기
    if (frame.empty()) break; // 실패 시 종료 (프레임 없을 때)

    // 프레임을 창에 출력
    cv::imshow("Webcam", frame);

    // 30ms(약 0.03초)마다 화면 갱신, ESC(27) 누르면 종료
    if (cv::waitKey(30) == 27) break;
  }

  // 자원 해제
  cap.release();
  cv::destroyAllWindows();

  return 0;
}