using System;

namespace ExampleCs2
{
    abstract class BasedDuck
    {
        public abstract void Swim ();
        protected IFly flying { get; set; }
        public IFly Flying { 
            get {
                return flying;
            }
            set {
                flying = value;
            } 
        }

        protected IEat eating { get; set; }
        public IEat Eating {
            get {
                return eating;
            }
            set {
                eating = value;
            }
        }
        protected IKrya kryaing { get; set; }
        public IKrya Kryaing {
            get {
                return kryaing;
            }
            set {
                kryaing = value;
            }
        }

        public void Alert()
        {
            Flying.Fly();
            Eating.Eat();
            Kryaing.Krya();
        }
    }
    class WildDuck : BasedDuck
    {
        public override void Swim() {
            Console.WriteLine("Быстро плывет");
        }
        public WildDuck()
        {
            flying = new FastFly();
            eating = new WildEat();
            kryaing = new WildKrya();
        }
    }

    class HomeDuck : BasedDuck
    {
        public override void Swim()
        {
            Console.WriteLine("Медлено плывет");
        }
        public HomeDuck()
        {
            flying = new SlowFly();
            eating = new HomeEat();
            kryaing = new HomeKrya();
        }
    }

    class LatexDuck : BasedDuck
    {
        public override void Swim()
        {
            Console.WriteLine("Плавает на месте");
        }
        public LatexDuck()
        {
        }
    }

    public interface IFly
    {
        void Fly();
    }
    public class FastFly : IFly
    { 
        public void Fly()
        {
            Console.WriteLine("Быстро полетела");
        }
    }
    public class SlowFly : IFly
    {
        public void Fly()
        {
            Console.WriteLine("Медлено полетела");
        }
    }

    public interface IEat
    {
        void Eat();
    }
    public class WildEat : IEat
    {
        public void Eat()
        {
            Console.WriteLine("Поела добычу");
        }
    }
    public class HomeEat : IEat
    {
        public void Eat()
        {
            Console.WriteLine("Дали поесть");
        }
    }
    public interface IKrya
    {
        void Krya();
    }
    public class WildKrya : IKrya
    {
        public void Krya()
        {
            Console.WriteLine("Дико крякнула");
        }
    }
    public class HomeKrya : IKrya
    {
        public void Krya()
        {
            Console.WriteLine("Крякнула спокойно");
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            WildDuck WDuck = new WildDuck();
            WDuck.Swim();
            WDuck.Alert();
            HomeDuck HDuck = new HomeDuck();
            HDuck.Swim();
            HDuck.Alert();
            LatexDuck LDuck = new LatexDuck();
            LDuck.Swim();


        }
    }
}
