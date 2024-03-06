using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace convertidor
{
    class Program
    {
        static void Main(string[] args)
        {
            string rpt;
            int opc,km=1000;
            double mtr = 1,
                   yrd = 1.09361,
                    vara = 1.1963081929167,
                    result,valor;
            do {
                Console.WriteLine(".:CONVERTIDOR DE kilometros a UNIDADES:.");
                Console.Write("Ingrese cantida Km: ");
                valor = Convert.ToInt32(Console.ReadLine());

                Console.WriteLine("1. metro");
                Console.WriteLine("2. Yarda");
                Console.WriteLine("3. vara");
                Console.Write("Elige Oopcion: "); opc = Convert.ToInt32(Console.ReadLine());


                if (opc == 1)
                {
                    result = mtr * valor*km;
                    Console.WriteLine("Km  a metro es: " + result);
                }
                else if (opc == 2)
                {
                    result = valor * km*yrd;
                    Console.WriteLine("Km  a yrd es: " + result);
                }
                else if (opc == 3)
                {
                    result = vara * km;
                    Console.WriteLine("Km  a vara es: " + result);
                }
                else
                {
                    Console.WriteLine("Hey bobo bobo");
                }




                Console.Write("seguir (S/N): ");
                rpt = Console.ReadLine();
                Console.Clear();
            } while ((rpt == "s") || (rpt == "S"));




            Console.ReadKey();
        }
    }
}
