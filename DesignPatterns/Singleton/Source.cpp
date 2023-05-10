#include <iostream>
#include <fstream>

class Logger {
public:
    static Logger& getInstance() {
        static Logger instance;
        return instance;
    }

    void log(const std::string& message) {
        logFile << message << std::endl;
    }

private:
    Logger() {
        logFile.open("log.txt");
    }

    ~Logger() {
        logFile.close();
    }

    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    std::ofstream logFile;
};

int main() {
    Logger& logger = Logger::getInstance();

    logger.log("Starting the program...");
    logger.log("Performing some operations...");

    // Rest of the program...

    logger.log("Program execution completed.");

    return 0;
}