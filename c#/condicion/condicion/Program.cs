using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace condicion
{
    class Program
    {
        static void Main(string[] args)
        {
            int respuesta = 0;
            

            string rpt; // Declarar rpt fuera del bucle

            do
            {
                Console.WriteLine("..:Menu:..");
                Console.WriteLine("2 Area de cuadrado");
                Console.WriteLine("3. area de un triangulo");
                Console.WriteLine("elige opcion: ");
                int opc = Convert.ToInt32(Console.ReadLine());

                if (opc == 2)
                {
                    int lado;
                    Console.WriteLine("ingrese lado: ");
                    lado = Convert.ToInt32(Console.ReadLine());

                    respuesta = lado * lado;

                    Console.WriteLine($"resultado es: {respuesta}");
                }
                else if (opc == 3)
                {
                    int alt, bass;
                    Console.WriteLine("ingrese altura: ");
                    alt = Convert.ToInt32(Console.ReadLine());

                    Console.WriteLine("ingrese base: ");
                    bass = Convert.ToInt32(Console.ReadLine());

                    respuesta = bass * alt;
                    Console.WriteLine($"resultado es: {respuesta}");
                }
                else
                {
                    Console.WriteLine("nose puede");
                }

                Console.WriteLine("¿Desea seguir? (s/n)");
                rpt = Console.ReadLine();
            } while (rpt.ToLower() == "s"); // Comparar con una cadena y convertir a minúsculas

        }
    }
}
