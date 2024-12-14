interface One {
    boolean A1();
    boolean B1();
}
abstract class Two implements One {
    Two(){
        this.A1();
    }
    public boolean A1(){
        System.out.println("A");
        return true;
    }
    public boolean B1(){
        System.out.print("B");
        return false;
    }
}
class Three extends Two implements One {
    public Three(){
        super();
    }
    public boolean A1(){
        System.out.print("C");
        return true;
    }
}
public class Main extends Three {
    public Main(){
        super.A1();
    }
    public static void main(String ar[]){
        Two de = new Three();
        One One;
        One = (Three)de;
        System.out.print(One.A1()+" ");
        System.out.print(One.B1()+" ");
    }
}