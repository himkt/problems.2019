package main

import (
	"fmt"
)

var ans = 0

func dfs(nodeID int, graph [][]int, visited []bool) {

	var _ans = true
	for i := 0; i < len(visited); i++ {
		if !visited[i] {
			_ans = false
		}
	}
	if _ans {
		ans++
	}

	for nextNodeID := 0; nextNodeID < len(graph[nodeID]); nextNodeID++ {

		if graph[nodeID][nextNodeID] == 0 {
			continue
		}

		if visited[nextNodeID] {
			continue
		}

		visited[nextNodeID] = true
		dfs(nextNodeID, graph, visited)
		visited[nextNodeID] = false
	}

}

func main() {
	var n, m int
	fmt.Scanf("%d %d", &n, &m)

	graph := make([][]int, n)
	for i := 0; i < n; i++ {
		graph[i] = make([]int, n)
	}

	var s, t int
	for i := 0; i < m; i++ {
		fmt.Scanf("%d %d", &s, &t)
		s--
		t--
		graph[s][t] = 1
		graph[t][s] = 1
	}

	visited := make([]bool, n)
	visited[0] = true

	dfs(0, graph, visited)
	fmt.Println(ans)
}
