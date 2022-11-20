// Constructor_Overloading
public class Cons_Overloading {

    int id;
    String name;

    Cons_Overloading() {
        System.out.println("this a default constructor");
    }

    Cons_Overloading(int i, String n) {
        id = i;
        name = n;
    }

    public static void main(String[] args) {
        Cons_Overloading s = new Cons_Overloading();
        System.out.println("\nDefault Constructor values: \n");
        System.out.println("Student Id : " + s.id + "\nStudent Name : " + s.name);

        System.out.println("\nParameterized Constructor values: \n");
        Cons_Overloading student = new Cons_Overloading(10, "Jassa");
        System.out.println("Student Id : " + student.id + "\nStudent Name : " + student.name);
    }
}