import java.util.*;
class Hashmaps{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    HashMap<String,Integer> map=new HashMap<>();//unordered map
    TreeMap<String,Integer> mp=new TreeMap<>();//ordered map

    System.out.println("Enter names in the name counter");
    String s="";
    while(!s.equals("-1")){
      s=sc.next();
      if(!s.equals("-1")){
      if(!map.containsKey(s)){ map.put(s,0); mp.put(s,0);}
        map.put(s,map.get(s)+1);
        mp.put(s,mp.get(s)+1);
      }
    }
    System.out.println(map);
    System.out.println(mp);
    sc.close();
  }
  // static void print(String s){
  //   System.out.println(s);
  // }
  // static void print(int s){
  //   System.out.println(s);
  // }
}