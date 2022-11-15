class ExpHandle {
  public static void main(String[] args) {
    try {
      int divideByZero = 5 / 0;
    //   the above given expression will generate an exception
    //   and the rest of the code will be skipped.
      System.out.println('Jassa');
    }

    catch (ArithmeticException e) {
      System.out.println("ArithmeticException => " + e.getMessage());
       //this block will execute after catching the exception
    }
    
    finally {
      System.out.println("This is the finally block");
      // this block will always run
    }
  }
}