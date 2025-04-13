// 외부 클래스
class ExternalClass {
    fun search(): String {
        return "get user info"
    }
}

// 내부 클래스 (인터페이스)
interface InternalClass {
    fun fetch(): String
}

// 어댑터 클래스
class Adapter(private val external: ExternalClass) : InternalClass {
    override fun fetch(): String {
        return external.search()
    }
}

fun main() {
    val external = ExternalClass()
    val adapter = Adapter(external)

    println(adapter.fetch()) // "get user info"
}
