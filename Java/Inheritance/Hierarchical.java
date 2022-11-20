// * hierarchical Inheritance
class Employee{
    float salary = 40000;
    }
    class PermanentEmp extends Employee{
    double bonus = 3000;
    }
    class TemporaryEmp extends Employee{
    double bonus = 1000;
    }
    public class Hierarchical
    {
    public static void main(String args[]){
    PermanentEmp p = new PermanentEmp();
    TemporaryEmp t = new TemporaryEmp();
  
    System.out.println("Permanent Employee salary is :" +p.salary);
    System.out.println("Hike for Permanent Employee is:" +p.bonus);
    System.out.println("Temporary Employee salary is :" +t.salary);
    System.out.println("Hike for Temporary Employee is :" +t.bonus);
    }
    }