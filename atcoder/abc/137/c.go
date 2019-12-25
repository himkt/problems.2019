package main


import (
  "fmt"
  // "strings"
  "strconv"
  "sort"
)


func sum (n int) int {
  return (n * (n+1)) / 2
}


func max(a int, b int) int {
  if a > b {
    return a
  }
  return b
}


func main () {
  var n int
  fmt.Scanf("%d", &n)

  var s string
  a := make(map[string]int)

  for i := 0; i<n; i++ {
    var keys []string
    var sign string

    fmt.Scanf("%s", &s)
    m := make(map[string]int)

    for k := 0; k<10; k++ {
      keys = append(keys, string(s[k]))

      val, ok := m[string(s[k])]
      if (ok) {
        m[string(s[k])] = val+1
      } else {
        m[string(s[k])] = 1
      }
    }

    sort.Strings(keys)
    for _, key := range keys {
      sign += (key + strconv.Itoa(m[key]))
    }

    val, ok := a[sign]
    if (ok) {
      a[sign] = val + 1
    } else {
      a[sign] = 1
    }
  }

  var ans int
  for _, val := range a {
    ans += sum(val-1)
  }

  fmt.Println(ans)
}
