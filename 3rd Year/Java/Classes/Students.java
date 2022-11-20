// Constructor_Overloading
public class Students {

    int id;
    String name;

    Students() {
        System.out.println("this a default constructor");
    }

    Students(int i, String n) {
        id = i;
        name = n;
    }

    public static void main(String[] args) {
        Students s = new Students();
        System.out.println("\nDefault Constructor values: \n");
        System.out.println("Student Id : " + s.id + "\nStudent Name : " + s.name);

        System.out.println("\nParameterized Constructor values: \n");
        Students student = new Students(10, "Jassa");
        System.out.println("Student Id : " + student.id + "\nStudent Name : " + student.name);
    }
}