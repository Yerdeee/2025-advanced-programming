using System;

// 기본 커피 클래스
class Coffee {
    public virtual int Cost() {
        return 5;
    }
}

// 커피 데코레이터 클래스 (기본 커피 객체를 감싸는 클래스)
class CoffeeDecorator : Coffee {
    protected Coffee coffee;

    public CoffeeDecorator(Coffee coffee) {
        this.coffee = coffee;
    }

    public override int Cost() {
        return coffee.Cost();
    }
}

// 우유 데코레이터 클래스
class MilkDecorator : CoffeeDecorator {
    public MilkDecorator(Coffee coffee) : base(coffee) { }

    public override int Cost() {
        return coffee.Cost() + 2;  // 우유는 2가 추가됨
    }
}

// 설탕 데코레이터 클래스
class SugarDecorator : CoffeeDecorator {
    public SugarDecorator(Coffee coffee) : base(coffee) { }

    public override int Cost() {
        return coffee.Cost() + 1;  // 설탕은 1이 추가됨
    }
}

class Program {
    static void Main() {
        Coffee coffee = new Coffee();
        Console.WriteLine(coffee.Cost());  // 5

        Coffee coffeeWithMilk = new MilkDecorator(coffee);
        Console.WriteLine(coffeeWithMilk.Cost());  // 7

        Coffee coffeeWithSugar = new SugarDecorator(coffee);
        Console.WriteLine(coffeeWithSugar.Cost());  // 6

        Coffee coffeeWithMilkAndSugar = new SugarDecorator(coffeeWithMilk);
        Console.WriteLine(coffeeWithMilkAndSugar.Cost());  // 8
    }
}
