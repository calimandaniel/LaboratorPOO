Câteva sfaturi pentru colocviu
- cel mai important este să trimiteți un cod în **C++** care **compilează**
- **fără goto!**
- **fără `#define N 5`! folosiți `const int N = 5`**
- **fără câmpuri/atribute publice!**
- **fără variabile globale!**
- **fără `conio.h`, fără `windows.h` și alte headere specifice unui SO!**
- **fără binare/executabile în arhivă!**
- **verificați că fișierele nu sunt atașate ca fișiere pe OneDrive!!!** Mailul de la Universitate (Outlook)
  are tendința să vă înlocuiască atașamentele în fișiere OneDrive, mare atenție!!
- **verificați încă o dată că arhiva nu conține binare/executabile!**
- **fără tot codul direct în clasă! folosiți "split into declaration and definition"**
- **nu pierdeți timpul!** folosiți conceptele de oop care se scriu cel mai repede 😁
- **nu trimiteți codul în ultimul moment!** rezervați-vă 5-10 minute la sfârșit
- **exersați _din timp_ să scrieți repede!**
- nu pierdeți timpul cu comentarii evidente; dpmdv nu ajută la nimic
- aveți voie cu `using namespace std;` (dar pot să dau puncte bonus dacă nu folosiți asta în fișiere header)
- puteți scrie codul în fișiere separate sau într-un singur fișier, ce vi se pare mai rapid
- pe ce ar trebui să luați multe puncte ușor:
  - constructori de inițializare
  - moșteniri (virtuale multiple - unde punem virtual?), funcții virtuale **pure**
  - excepții (cu moștenire din `std::exception`)
  - `operator<<`
  - id_max static
    - dacă id-ul simplu este const, trebuie suprascris cc/op= pt că altfel compilatorul nu generează cc/op=
- folosiți `std::string` în loc de `char*`, folosiți `std::vector` în loc de `A *vec = new A[nr]` (și `delete[]`)
- recomandarea mea e să folosiți `std::shared_ptr`: așa pot să dau puncte bonus pe smart pointeri și nu sunteți depunctați pt eventuale memory leaks
- nu folosiți citiri de la tastatură/nu pierdeți timpul să testați dacă merge citirea; dacă faceți cu citire de la tastatură și chiar vreți să testați dacă merge, salvați-vă undeva într-un notepad/comentariu datele de intrare, pentru ca apoi să faceți doar "paste"
  (ca să câștigați timp să nu scrieți aceleași date de fiecare dată când testați programul)
  - verificați dacă merge acest truc înainte de colocviu, nu atunci pe loc; nici mie nu îmi merge din prima