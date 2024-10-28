#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, string> idioma;

    idioma["brasil"] = "Feliz Natal!";
    idioma["alemanha"] = "Frohliche Weihnachten!";
    idioma["austria"] = "Frohe Weihnacht!";
    idioma["coreia"] = "Chuk Sung Tan!";
    idioma["espanha"] = "Feliz Navidad!";
    idioma["grecia"] = "Kala Christougena!";
    idioma["estados-unidos"] = "Merry Christmas!";
    idioma["inglaterra"] = "Merry Christmas!";
    idioma["australia"] = "Merry Christmas!";
    idioma["portugal"] = "Feliz Natal!";
    idioma["suecia"] = "God Jul!";
    idioma["turquia"] = "Mutlu Noeller";
    idioma["argentina"] = "Feliz Navidad!";
    idioma["chile"] = "Feliz Navidad!";
    idioma["mexico"] = "Feliz Navidad!";
    idioma["antardida"] = "Merry Christmas!";
    idioma["canada"] = "Merry Christmas!";
    idioma["irlanda"] = "Nollaig Shona Dhuit!";
    idioma["belgica"] = "Zalig Kerstfeest!";
    idioma["italia"] = "Buon Natale!";
    idioma["libia"] = "Buon Natale!";
    idioma["siria"] = "Milad Mubarak!";
    idioma["marrocos"] = "Milad Mubarak!";
    idioma["japao"] = "Merii Kurisumasu!";

    string pais;

    while (getline(cin, pais)) {
        auto it = idioma.find(pais);

        if (it == idioma.end()) {
            cout << "--- NOT FOUND ---" << endl; 
        } else {
            cout << it->second << endl;
        }
    }

    return 0;
}
