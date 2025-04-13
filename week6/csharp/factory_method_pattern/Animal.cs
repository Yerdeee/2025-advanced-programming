using System;

abstract class Animal {
    public abstract string Speak();
}

class Dog : Animal {
    public override string Speak() => "Woof!";
}

class Cat : Animal {
    public override string Speak() => "Meow!";
}

class AnimalFactory {
    public Animal CreateAnimal(string animalType) {
        if (animalType == "dog") return new Dog();
        if (animalType == "cat") return new Cat();
        return null;
    }
}

class Program {
    static void Main() {
        AnimalFactory factory = new AnimalFactory();

        Animal dog = factory.CreateAnimal("dog");
        Animal cat = factory.CreateAnimal("cat");

        if (dog != null) Console.WriteLine(dog.Speak());
        if (cat != null) Console.WriteLine(cat.Speak());
    }
}
