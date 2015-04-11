import  java.util.Scanner;

class Main2_1{
  static int n, k;
  static int[] a = new int[1000000];

  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    n = in.nextInt();
    for(int i=0; i<n; i++){
      a[i] = in.nextInt();
    }
    k = in.nextInt();
    solve();
  }

  public static boolean dfs(int i, int sum){
    if (i == n) return sum == k;
    if (dfs(i+1, sum)) return true;
    if (dfs(i+1, sum+a[i])) return true;
    return false;
  }

  public static void solve(){
    if(dfs(0, 0)) System.out.println("YES");
    else System.out.println("NO");
  }
}
