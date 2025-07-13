using DemoApp;
using System;
public class Program
{
    static int SumCal(int a, int b)
    {
        return a + b;
    }

    public static void Main()
    {
        //int b = 5;
        //Function f = new Function();
        //f.valueTypePassByValue(b);
        //Console.WriteLine(b);

        //f.valueTypePassByReference(ref b);
        //Console.WriteLine(b);
        //Student s1 = new Student(1, "Sam");
        ////Console.WriteLine(s1.Name);
        ////f.method3(s1);
        ////Console.WriteLine(s1.Name);
        //f.referenceTypePassByReference(ref s1);
        //Console.WriteLine(s1.Name);
        //Console.WriteLine(s1.Id);

        Student sv1 = new Student(2, "Bac");
        Student sv2 = new Student(3, "Trang");
        Student sv3 = new Student(2, "Bac");
        Student.MayChieu = 2;
        Console.WriteLine(sv1.MayChieu);
        Console.WriteLine(Student.Id);
    }
}
