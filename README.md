# LaboratorPOO

## Tema 0
    Nume proiect (poate fi schimbat ulterior)
 
    Scurtă descriere a temei alese, ce v-ați propus să implementați
    
## Tema 1

    Cerințe

    - definirea a minim 3-4 clase folosind compunere
    - constructori de inițializare pentru o clasă;
    - constructor de copiere, operator= de copiere, destructor
    - operator<< pentru toate clasele
    - cât mai multe const
    - implementarea a minim 3 funcții membru publice pentru funcționalități specifice temei alese
    - scenariu de utilizare a claselor definite (crearea de obiecte și apelarea funcțiilor membru publice în main)

## Tema 2

    Separarea codului din clase în fișiere header (.h/.hpp etc.) și surse (.cpp etc.)
    clasele mici și legate între ele se pot afla în aceeași pereche de fișiere header-sursă
    FĂRĂ using namespace std în fișiere .h la nivel global

    - moșteniri
    - funcții virtuale (pure); funcțiile virtuale vor fi apelate prin pointeri la clasa de bază
    - pointerii la clasa de bază vor fi atribute ale altei clase, nu doar niște pointeri/referințe în main
    - apelarea constructorului din clasa de bază
    - smart pointers
    - dynamic_cast
    - suprascris cc/op= pentru copieri/atribuiri corecte
    - excepții:
       - ierarhie proprie (cu baza std::exception sau derivată din std::exception)
       - utilizare cu sens: de exemplu, throw în constructor, try/catch în main
    - funcții și atribute statice
    - STL
    - fără variabile globale
    - cât mai multe const, testat/apelat tot codul public de interes din main
    - implementarea a două funcționalități noi specifice temei; pot fi folosite funcții virtuale în acest scop
