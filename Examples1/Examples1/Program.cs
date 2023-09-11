using System;

namespace Examples1
{
    // Задача 1. 
    class Animal
    {
        protected int a = 1;
        public void PrintInfo()
        {
            Console.WriteLine("It's animal");
        }
    }

    class Cat : Animal
    {
        public void sum()
        {
            int b = 2;
            a = b + a;
            Console.WriteLine(b);
        }
        protected void PrintInfoCat()
        {
            Console.WriteLine("cat");
        }
        public void Print()
        {
            PrintInfoCat();
        }
    }

    // Задача 2.
    class unit
    {
        public virtual void weapon()
        {
            Console.WriteLine("Меч");
        }
    }
    class Maga : unit
    {
        public override void weapon()
        {
            Console.WriteLine("Posoh");
        }
    }
    class Mushket : unit
    {
        public override void weapon()
        {
            Console.WriteLine("Gun");
        }
    }

    // Задача 3. Написать программу, которая определяет абстрактный класс фигур
    // и определяет производный от него класс прямоугольник и треугольник, добавьте абстрактный метод периметр и переопределите его в произодных классов.

    abstract class Figure
    {
        public abstract void Perimetr();
    }
    class Treugolnik : Figure
    {
        public override void Perimetr()
        {
            int P;
            Console.WriteLine("Введита стороны треуогльника: ");
            Console.Write("A: ");
            int a = Convert.ToInt32(Console.ReadLine());
            Console.Write("B: ");
            int b = Convert.ToInt32(Console.ReadLine());
            Console.Write("C: ");
            int c = Convert.ToInt32(Console.ReadLine());
            P = a + b + c;
            Console.WriteLine(P);
        }
    }
    class Priamougolnik : Figure
    {
        public override void Perimetr()
        {
            int P;
            Console.WriteLine("Введита стороны прямоугольника: ");
            Console.Write("A and B: ");
            int a = Convert.ToInt32(Console.ReadLine());
            Console.Write("C and D: ");
            int b = Convert.ToInt32(Console.ReadLine());
            P = (a + b) * 2;
            Console.WriteLine(P);
        }
    }


    //Задача 4 программа принимает цвет и тип оборудование в качестве входных данных и передает их констркуктору класса, реализуйте интерфейсе icolor и iecepemet и определить их методы.

    public interface IColor {
        void GetColor();
    };
    public interface IEcepemet
    {
        void GetEcepemet();
    }
    class Car : IColor, IEcepemet
    {
        string e, c;
        public void GetColor()
        {
            Console.WriteLine(c);
        }
        public void GetEcepemet()
        {
            Console.WriteLine(e);
        }
        public Car(string e, string c) {
            this.e = e;
            this.c = c;
        }
    }
 

    class Program
    {
        static void Main(string[] args)
        {
            // Задача 1
            Console.WriteLine("Hello World!");
            Cat c1 = new Cat();
            c1.sum();
            c1.PrintInfo();
            c1.Print();
            // Задача 2
            unit Voin1 = new unit();
            unit Voin2 = new Maga();
            unit Voin3 = new Mushket();
            Voin1.weapon();
            Voin2.weapon();
            Voin3.weapon();
            // Задача 3
            Figure t = new Treugolnik();
            Figure p = new Priamougolnik();
            t.Perimetr();
            p.Perimetr();
            // Задача 4
            Car c = new Car("Кастрюля", "Blue");
            c.GetColor();
            c.GetEcepemet();
        }
    }
}