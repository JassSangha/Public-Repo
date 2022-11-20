// ~ Multilevel Inheritance
class Name {
   public void name() {
      System.out.println("Jassa");
   }
}

class Grade extends Name {
   public void grade() {
      System.out.println("BCA");
   }
}

class Rollno extends Grade {
   public void rollno() {
      System.out.println("322");
   }
}

public class Multi {
   public static void main(String[] arguments) {
      Rollno std = new Rollno();
      std.name();
      std.grade();
      std.rollno();
   }
}