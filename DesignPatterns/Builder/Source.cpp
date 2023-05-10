#include <iostream>

class dulap {
    int nr_rafturi;
    int nr_sertare;
    std::string tip_maner;
    std::string tip_balama;
    friend class dulap_builder;
public:
    dulap() = default;
};

class dulap_builder {
private:
    dulap d;
public:
    dulap_builder() = default;
    dulap_builder& nr_rafturi(int nr) {
        d.nr_rafturi = nr;
        return *this;
    }
    dulap_builder& nr_sertare(int nr) {
        d.nr_sertare = nr;
        return *this;
    }
    dulap_builder& tip_maner(const std::string& tip) {
        d.tip_maner = tip;
        return *this;
    }
    dulap_builder& tip_balama(const std::string& tip) {
        d.tip_balama = tip;
        return *this;
    }
    dulap build() {
        return d;
    }
};

int main()
{
    // mod de folosire
    dulap_builder b;
    dulap d = b.nr_rafturi(5).tip_balama("clasic").build();
    
}                                                