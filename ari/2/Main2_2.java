import java.util.*;

class Main2_2{
  public static int MAX_N = 100;
  public static int MAX_M = 100;
  static Scanner in = new Scanner(System.in);
  public static int N = in.nextInt();
  public static int M = in.nextInt();
  public static char[][] field = new char[N][M];


  public static void main(String[] args){
    for(int i=0; i<N; i++){
      String str = in.next();
      char[] ch = str.toCharArray();
      for(int k=0; k<M; k++){
        field[i][k] = ch[k];
      }
    }
    int res = 1;
    for(int x=0; x<N; x++){
      for(int y=0; y<M; y++){
        if (field[x][y]  == 'w'){
          dfs(x, y);
          res++;
        }
      }
    }
    System.out.println(res);
  }




  public static void dfs(int x, int y){
    field[x][y] = '.';
    for(int dx=-1; dx<=1; dx++){
      for(int dy=-1; dy<=1; dy++){
        int nx = x + dx, ny = y + dy;
        if(0 <= nx && nx < N && 0<=ny && ny < M && field[nx][ny] == 'W') dfs(nx, ny);
      }
    }
  }
}
