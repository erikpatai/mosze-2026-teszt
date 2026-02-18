#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // HIBA_1: NELEMENTS nincs deklarálva. "int *b = new int[N_ELEMENTS];" lenne a helyes megoldás.
    int *b = new int[NELEMENTS];
    // HIBA_2: Karakter literál (') helyett string literál (") kellene, és a sor végéről hiányzik: "<< std::endl;".
    std::cout << '1-100 ertekek duplazasa'
    // HIBA_3: A for ciklus fejléce hibás (nincs feltétel és léptetés). "for (int i = 0; i < N_ELEMENTS; i++)" lenne a helyes megoldás.
    for (int i = 0;)
    {
        // HIBA_4: Az i 0-tól 99-ig megy, de a feladat 1–100-ig ígéri a számok duplázását. Tehát "b[i] = (i+1)*2;" lenne a helyes megoldás.
        b[i] = i * 2;
    }
    // HIBA_5: A feltétel csak 'i', ezért a ciklus nem a tömb méretéhez igazodik. "for (int i = 0; i < N_ELEMENTS; i++)" lenne a helyes megoldás.
    for (int i = 0; i; i++)
    {
        // HIBA_6: Hiányzik a kiírandó érték és a lezáró. "std::cout << "Ertek: " << b[i] << std::endl;" lenne a helyes megoldás.
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    // HIBA_7: Az "atlag" változó nincs inicializálva használat előtt. "int atlag = 0" lenne a helyes megoldás.
    int atlag;
    // HIBA_8: A for fejlécben ',' szerepel ';' helyett a feltétel és léptetés között.
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // HIBA_9: A sor végéről hiányzik a ';'.
        atlag += b[i]
    }
    
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    // HIBA_10: A dinamikusan foglalt memória felszabadítása hiányzik. "delete[] b;" kellene még ide.
    return 0;
}
