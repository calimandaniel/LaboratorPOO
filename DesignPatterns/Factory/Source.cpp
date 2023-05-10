#include <iostream>

class scaun {
    int nr_picioare;
    bool spatar;
    std::string material;
public:
    scaun(int nrPicioare, bool spatar, std::string material)
        : nr_picioare(nrPicioare), spatar(spatar), material(std::move(material)) {}
};

class scaun_factory {
public:
    static scaun taburet() { return scaun(4, false, "lemn"); }
    static scaun taburet_simplu() { return scaun(3, false, "lemn"); }
    static scaun scaun_de_lemn() { return scaun(4, true, "lemn"); }
    static scaun scaun_de_metal() { return scaun(4, true, "metal"); }
    static scaun scaun_modern() { return scaun(2, true, "metal"); }
};

int main()
{
    scaun s = scaun_factory::taburet();
}