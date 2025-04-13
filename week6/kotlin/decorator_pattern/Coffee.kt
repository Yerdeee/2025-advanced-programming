// 기본 커피 클래스
open class Coffee {
    open fun cost(): Int {
        return 5
    }
}

// 커피 데코레이터 클래스 (기본 커피 객체를 감싸는 클래스)
open class CoffeeDecorator(protected val coffee: Coffee) : Coffee() {
    override fun cost(): Int {
        return coffee.cost()
    }
}

// 우유 데코레이터 클래스
class MilkDecorator(coffee: Coffee) : CoffeeDecorator(coffee) {
    override fun cost(): Int {
        return coffee.cost() + 2  // 우유는 2가 추가됨
    }
}

// 설탕 데코레이터 클래스
class SugarDecorator(coffee: Coffee) : CoffeeDecorator(coffee) {
    override fun cost(): Int {
        return coffee.cost() + 1  // 설탕은 1이 추가됨
    }
}

fun main() {
    val coffee = Coffee()
    println(coffee.cost())  // 5

    val coffeeWithMilk = MilkDecorator(coffee)
    println(coffeeWithMilk.cost())  // 7

    val coffeeWithSugar = SugarDecorator(coffee)
    println(coffeeWithSugar.cost())  // 6

    val coffeeWithMilkAndSugar = SugarDecorator(coffeeWithMilk)
    println(coffeeWithMilkAndSugar.cost())  // 8
}
