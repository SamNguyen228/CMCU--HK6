using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DemoApp
{
    internal class Function
    {
        public void valueTypePassByValue(int x)
        {
            x = 10;
            Console.WriteLine(x);
        }

        public void valueTypePassByReference(ref int x)
        {
            x = 10;
            Console.WriteLine(x);
        }

        public void referenceTypePassByValue(Student sv)
        {
            sv = new Student();
            Console.WriteLine(sv.Id);
            sv.Name = "Dieu";
            Console.WriteLine(sv.Name);
        }

        public void referenceTypePassByReference(ref Student sv)
        {
            sv = new Student();
            Console.WriteLine(sv.Id);
            sv.Name = "Dieu";
            Console.WriteLine(sv.Name);
        }
    }

}
