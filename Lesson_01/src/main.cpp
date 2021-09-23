#include <iostream>
#include <opencv2/opencv.hpp>

int main(void)
{
    const std::string img_path = "img/mandrill.tiff";

    cv::Mat img_color = cv::imread(img_path, cv::IMREAD_COLOR);
    cv::Mat img_grayscale = cv::imread(img_path, cv::IMREAD_GRAYSCALE);
    cv::Mat img_unchanged = cv::imread(img_path, cv::IMREAD_UNCHANGED);

    cv::imshow("color image", img_color);
    cv::imshow("grayscale image", img_grayscale);
    cv::imshow("unchanged image", img_unchanged);

    cv::waitKey(0);

    cv::destroyAllWindows();

    cv::imwrite("grayscale.jpg", img_grayscale);

    return 0;
}
