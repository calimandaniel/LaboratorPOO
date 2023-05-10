#include <iostream>
#include <vector> 

class connection {
private:
    bool opened = false;
public:
    void open() { opened = true; }
    bool free() const { return !opened; }
    void close() { opened = false; }
    ~connection() { close(); }
};

class connection_pool {
private:
    static const int max_conns = 5;
    std::vector<connection> conns{ max_conns };
public:
    connection& get_conn() {
        for (auto& conn : conns)
            if (conn.free()) {
                conn.open();
                return conn;
            }
        throw std::runtime_error("too many open connections!");
    }
};

std::string fetch_data(const connection&) {
    return "Data from fetch_data()";
}

int main()
{
    connection_pool pool;
    try {
        connection& c = pool.get_conn();
        auto data = fetch_data(c); //orice metoda din conexiune
        std::cout << data;
        connection& c1 = pool.get_conn();
        auto data1 = fetch_data(c1); //orice metoda din conexiune
        std::cout << data;
        connection& c2 = pool.get_conn();
        auto data2 = fetch_data(c2); //orice metoda din conexiune
        std::cout << data;
        connection& c3 = pool.get_conn();
        auto data3 = fetch_data(c3); //orice metoda din conexiune
        std::cout << data;
        connection& c4 = pool.get_conn();
        auto data4 = fetch_data(c4); //orice metoda din conexiune
        std::cout << data;
        connection& c5 = pool.get_conn();
        auto data5 = fetch_data(c5); //orice metoda din conexiune
        std::cout << data;

    }
    catch (std::runtime_error& err) { std::cout << err.what() << "\n"; }
}