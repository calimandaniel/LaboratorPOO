#include <iostream>
#include <fstream>
#include <string>


class File {
public:
    File(const std::string& filename) : m_file(filename) {
        if (!m_file.is_open()) {
            throw std::runtime_error("Could not open file.");
        }
    }

    ~File() {
        if (m_file.is_open()) {
            m_file.close();
        }
    }

    std::string readLine() {
        std::string line;
        std::getline(m_file, line);
        return line;
    }

private:
    std::ifstream m_file;
};

int main() {
    try {
        File file("example.txt");
        std::string line = file.readLine();
        std::cout << line << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
