cv::Rect AlignImg(cv::Mat img, int x1, int y1, int x2, int y2)
{
    x1 = (x1 < 0) ? 0 : x1;
    y1 = (y1 < 0) ? 0 : y1;
    x2 = (x2 >= img.cols) ? (img.cols - 1) : x2;
    y2 = (y2 >= img.rows) ? (img.rows - 1) : y2;

    cv::Rect roi(x1, y1, x2 - x1, y2 - y1);

    return roi;
}

int main(){
	cv::Rect rect = AlignImg(img_input, x1, y1, x2, y2);
}
