import java.util.*;
class recursiveGCD{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    print("Enter n1");
    int n1=sc.nextInt();
    print("Enter n2");
    int n2=sc.nextInt();
    int gcd=GCD(Math.max(n1,n2),Math.min(n1,n2));
    print(gcd);
    
  }
  static int GCD(int n1,int n2){
    if(n2!=0)
      return GCD(n2,n1%n2);
    else
      return n1;
  }
  static void print(String s){
    System.out.println(s);
  }
  static void print(int s){
    System.out.println(s);
  }
}