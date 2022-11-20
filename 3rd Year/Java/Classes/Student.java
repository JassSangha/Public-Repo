// ? Default Constructor
public class Student {
    String firstName;
    String lastName;
    int age;

    public Student() {
        firstName = "Jass";
        lastName = "Sangha";
        age = 100;
    }

    public static void main(String[] args) {
        Student myStudent = new Student();
        System.out.println(myStudent.firstName);
    }
}