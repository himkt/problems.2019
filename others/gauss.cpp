#include <iostream>
#include <string>
#include <math.h>

const int N=3; /* 変数の数 */

typedef double Matrix[N+1][N+1]; /* ユーザー定義の型 Matrix の定義 */
/* 以後  Matrix a;としてa[N+1][N+1]を宣言できる*/

typedef double Vector[N+1]; /* ユーザー定義の型 Vector の定義 */
/* 以後  Vector b;としてb[N+1]を宣言できる*/

/* ご存知 swap template */
  template <class T>
void swap( T & a, T & b )
{
  T temp=a;
  a = b;
  b = temp;
}

/* pivot 選択 */
void pivot_sel(Matrix a,Vector b,int t,int n)
{
  int mk=t;
  for( int i=t+1; i<=n; i++ )
    if ( fabs(a[mk][t]) < fabs(a[i][t]) )
      mk = i;
  for( int j=t; j<=n ; j++ )
    swap( a[t][j] , a[mk][j] );
  swap( b[t],b[mk]);
}


int main()
{
  using namespace std;
  Matrix a; /* 係数行列を格納する２次元配列 */
  Vector b,x; /* 定数ベクトルbと変数ベクトルx */
  int i,j,k;
  double p;
  double pivot;

  for (i=1;i<=N;i++)
    for (j=1;j<=N;j++)
      cin >> a[i][j]; /* 係数行列の読み込み */
  for (i=1;i<=N;i++)
    cin >> b[i]; /* 定数ベクトルの読み込み */
  /* ----------------前進消去----------------- */
  for (i=1;i<=N;i++){
    pivot_sel(a,b,i,N); //軸選択
    pivot = a[i][i];
    for (j=i+1;j<=N;j++){
      p=a[j][i]/pivot;
      a[j][i]=0.0;
      for (k=i+1;k<=N;k++)
        a[j][k] -= p*a[i][k]; /* j行からi行のp倍を引く*/
      b[j] -= p*b[i]; /* 定数ベクトルも同上 */
    }
  }
  /* ----------------後退代入----------------- */
  x[N] = b[N]/a[N][N];
  for (i=N-1;i>=1;i--){
    x[i]=b[i];
    for (j=i+1;j<=N;j++)
      x[i] -= a[i][j]*x[j];
    x[i] /= a[i][i];
  }
  /* ----------------結果の表示----------------- */
  for (i=1;i<=N;i++)
    cout << "x_" << i << "=" << x[i] << "\n";
}
