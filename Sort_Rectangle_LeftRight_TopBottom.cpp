bool compare(const cv::Rect& a, const cv::Rect& b)
{
    float cellSize = 20.0f;
    float lCell = floorf(a.y / cellSize);
    float rCell = floorf(b.y / cellSize);
	
    // config 10 with your purpose
    if (abs(lCell - rCell) < 10) return a.x < b.x;
    return (lCell < rCell);
};

int main()
{
	std::vector<cv::Rect> RectInImage;
	std::sort(RectInImage.begin(), RectInImage.end(), compare);
}
