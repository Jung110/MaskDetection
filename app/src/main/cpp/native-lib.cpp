#include <jni.h>
#include <opencv2/opencv.hpp>

using namespace cv;


extern "C"
JNIEXPORT void JNICALL
//JNIEnv *env는 자바와 네이티브 메소드를 연결하는 인터페이스 포인터
Java_com_example_maskdetection_MainActivity_ConvertRGBtoGray(JNIEnv *env, jobject thiz,
                                                             jlong mat_addr_input,
                                                             jlong mat_addr_result) {
    // TODO: implement ConvertRGBtoGray()
    Mat &matInput = *(Mat *)mat_addr_input;
    Mat &matResult = *(Mat *)mat_addr_result;

    cvtColor(matInput, matResult, COLOR_RGBA2GRAY);
}