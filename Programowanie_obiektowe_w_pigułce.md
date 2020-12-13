# Klasy i obiekty

Klasa to abstrakcyjna definicja czegoś, co ma atrybuty (własności, stany) i wzorce zachowań (metody, możliwości).

Obiekt to konkretny egzemplarz klasy, który ma własny stan niepowiązany ze stanami innych egzemplarzy tej klasy.

Hermetyzacja to ukrywanie szczegółów implementacji.

# Dziedziczenie i polimorfizm

Dziedziczenie polega na tym, że można zdefiniować klasę jako zmodyfikowaną lub bardziej wyspecjalizowaną wersję innej klasy.
Gdy klasa B dziedziczy po klasie A, klasa A jest rodzicem klasy B (klasą bazową, nadklasą), natomiast klasa B jest podklasą (klasą podrzędną klasy A).
Wszystkie zachowania zdefiniowane w klasie A znajdują się też w klasie B, chociaż mogą być nieco zmieione. Egzemplarza klasy B można użyć wszędzie tam, gdzie można zastosować egzemplarz klasy A.

Polimorfizm to możliwość dostarczania wielu implementacji zachowania i wybierania jednej z nich na podstawie kontekstu. Przykładowo klasa może zawierać definicje dwóch wersji jednej metody,
z których każda przyjmuje inne parametry wywołania. Ta sama metoda też może być zdefiniowana zarówno w nadklasie jak i podklasie (przesłania nadklasę w przypadku wywołań na obiektach podklasy).
Wybór metody wywołania może odbywać się podczas kompilacji kodu lub działania programu.

# Kontrukcja i destrukcja obiektów

Konstrukcja obiektu to tworzenie obiektu. W procesie tym wywołuje się metodę klasy zwaną konstruktorem, który inicjuje stan obiektu, co zazwyczaj wymaga wywołania (jawnie lub niejawnie) konstruktorów klas nadrzędnych, aby te zainicjowały swoją część stanu obiektu.

Destrukcja obiektu to jego niszczenie. W procesie tym wywołuje się metodę klasy zwaną destruktorem, której zadaniem jest skasowanie stanu obiektu. Destruktory są wywoływane automatycznie, gdy obiekt wychodzi poza zakres dostępności lub w wyniku użycia operatora delete służącego do usuwania dynamicznie utworzonych obiektów - ważne jest zapamiętywanie obiektów, aby uniknąć wycieku pamięci.

# Interfejsy i klasy abstrakcyjne

Interfejs zawiera deklaracje zestawu powiązanych metod, poza jakąkolwiek klasą.

Klasa abstrakcyjna to niekompletna definicja klasy, zawierająca deklaracje wszystkich metod, ale nie zawierająca wszystkich definicji.

# Metody wirtualne

Klasy potomne mogą (przesłaniać) przedefiniowywać metody zdefinowane w klasach nadrzędnych. Jeśli metoda jest wirtualna, definicja metody do wywołania jest określana w czasie działania programu na podstawie typu (klasy) obiektu, na którym została wywołana.

# Wielodziedziczenie
