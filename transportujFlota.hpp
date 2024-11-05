#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj
    unsigned int suma = 0;
    unsigned int liczba_zaglowcow = 0;
    Stocznia stocznia{};
    
    while(suma < towar)
    {
        Statek* s = stocznia();
        suma += s->transportuj();
        if(dynamic_cast<Zaglowiec*>(s) != nullptr) {liczba_zaglowcow++;}
        delete s;
    }

    return liczba_zaglowcow;
}
