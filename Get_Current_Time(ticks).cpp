std::string currentDateTime() {
    auto time = std::chrono::system_clock::now();
    std::time_t tt = std::chrono::system_clock::to_time_t(time);
    std::tm tm = *std::gmtime(&tt);
    std::stringstream ss;
    std::string format = "%Y%m%d%H%M%S";
    ss << std::put_time(&tm, format.c_str());
    return ss.str();

}
