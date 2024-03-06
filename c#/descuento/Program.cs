using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace descuento
{
    class Program
    {
        static void Main(string[] args)
        {
            int sueldo_base = 3300,sueldo_empleado;
            double renta = 0.10,
                   afp = 0.07,
                   seguro_social = 0.05;
            string rpt;

            do {

                Console.Write("ingrese sueldo: ");
                sueldo_empleado = Convert.ToInt32(Console.ReadLine());


                if (sueldo_empleado >= sueldo_base)
                {
                    Console.WriteLine("esta en el proyecto de ayuda social");

                    double descuRenta = sueldo_empleado * renta;
                    double descuAfp = sueldo_empleado * afp;
                    double descuSeguro = sueldo_empleado * seguro_social;

                    double descuento = descuRenta + descuAfp + descuSeguro;
                    double sueldoFinal = sueldo_empleado - descuento;

                    Console.WriteLine("Descuento: " + descuRenta);
                    Console.WriteLine("Descuento: " + descuAfp);
                    Console.WriteLine("Descuento: " + descuSeguro);

                    Console.WriteLine("Descuento: " + descuento);
                    Console.WriteLine("Sueldo final: " + sueldoFinal);

                }
                else
                {
                    Console.WriteLine("muy poco");
                }


                Console.Write("seguir (S/N): ");
                 rpt = Console.ReadLine();
                Console.Clear();
            } while ((rpt == "s") || (rpt == "S"));

         

            
            



            Console.ReadKey();
        }
    }
}
