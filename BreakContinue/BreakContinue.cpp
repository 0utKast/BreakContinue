#include <iostream>

int main()
{
    int contador{ 0 };
    while (contador < 10)
    {
        if (contador == 5)
            continue; // salta al final del cuerpo del loop

        std::cout << contador << ' ';

        ++contador; // esta declaración deja de ejecutarse cuando contador llega a 5

        // La declaración continue salta aquí
    }

    return 0;
}





















/*#include <iostream>

int main()
{
    for (int contador{ 0 }; contador < 10; ++contador)
    {
        // si el número es divisible por 4, saltar esta iteración
        if ((contador % 4) == 0)
            continue; // ir a la próxima iteración

        // Si el número no es divisible por 4, seguir adelante
        std::cout << contador << '\n';

        // La declaración continue salta aquí
    }

    return 0;
}*/





























/*#include <iostream>

int breakOReturn()
{
    while (true) // loop infinito
    {
        std::cout << "Escribe 'b' para break o 'r' para return: ";
        char ch;
        std::cin >> ch;

        if (ch == 'b')
            break; // la ejecución continuará en la primera declaración fuera del loop

        if (ch == 'r')
            return 1; // return hará que la función vuelva inmediatamente al llamador (en este caso, main())
    }

    // breaking el loop hace que la ejecución continúe aquí

    std::cout << "El break del loop llevará la ejecución aquí\n";

    return 0;
}

int main()
{
    int devolverValor{ breakOReturn() };
    std::cout << "La función breakOReturn ha devuelto " << devolverValor << '\n';
    return 0;
}*/





















/*#include <iostream>

int main()
{
    while (true) // loop infinito
    {
        std::cout << "Escribe 0 para salir o cualquier otro entero para continuar: ";
        int num{};
        std::cin >> num;

        // salir del loop si el usuario escribe 0
        if (num == 0)
            break;
    }

    std::cout << "Ahora ya estamos fuera del loop\n";

    return 0;
}*/









/*#include <iostream>

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    int sum{ 0 };

    // Permite al usuario escribir hasta 10 números
    for (int contador{ 0 }; contador < 10; ++contador)
    {
        std::cout << "Escribe un número para sumar, ó 0 para salir: ";
        int num{};
        std::cin >> num;

        // salir del loop si el usuario escribe 0
        if (num == 0)
            break; // salir del loop ahora

        // en otro caso añadir número a nuestra suma
        sum += num;
    }

    // La ejecución continuará aquí después del break
    std::cout << "La suma de todos los números que ha escrito es: " << sum << "\n";

    return 0;
}*/















/*#include <iostream>

void printMath(int x, int y, char ch)
{
    switch (ch)
    {
    case '+':
        std::cout << x << " + " << y << " = " << x + y << '\n';
        break; // no fall-through (caer) al siguiente case
    case '-':
        std::cout << x << " - " << y << " = " << x - y << '\n';
        break; // no fall-through (caer) al siguiente case
    case '*':
        std::cout << x << " * " << y << " = " << x * y << '\n';
        break; // no fall-through (caer) al siguiente case
    case '/':
        std::cout << x << " / " << y << " = " << x / y << '\n';
        break;
    }
}

int main()
{
    printMath(2, 3, '+');

    return 0;
}*/














