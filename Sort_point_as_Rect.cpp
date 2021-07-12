bool point_comparator(const cv::Point& a, const cv::Point& b) {
    if ((a.x + a.y) == (b.x + b.y))
    	return a.x < b.x;
    return ((a.x + a.y) < (b.x + b.y));
}

std::vector<cv::Point> sort_coor(std::vector<cv::Point> coor) {
    std::vector<cv::Point> coor_after_sort;
    std::sort(coor.begin(), coor.end(), point_comparator);

    coor_after_sort.push_back(coor[0]);
    coor_after_sort.push_back(coor[2]);
    coor_after_sort.push_back(coor[3]);
    coor_after_sort.push_back(coor[1]);
    return coor_after_sort;
}

int main()
{
	std::vector<cv::Point> coor;
	coor = sort_coor(coor);
}
