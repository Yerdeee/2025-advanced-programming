using System;

// 외부 클래스
class ExternalClass {
    public string Search() {
        return "get user info";
    }
}

// 내부 클래스 (인터페이스)
interface InternalClass {
    string Fetch();
}

// 어댑터 클래스
class Adapter : InternalClass {
    private ExternalClass external;

    public Adapter(ExternalClass external) {
        this.external = external;
    }

    public string Fetch() {
        return external.Search();
    }
}

class Program {
    static void Main() {
        ExternalClass external = new ExternalClass();
        InternalClass adapter = new Adapter(external);

        Console.WriteLine(adapter.Fetch()); // "get user info"
    }
}
