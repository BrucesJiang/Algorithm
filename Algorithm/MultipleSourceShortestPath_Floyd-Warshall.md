#多源最短路径算法——Floyd-Warshall算法
***
>算法解决任意两点之间最短路径算法，适用于有向图或负权的最短路径问题，负权环不适用。

>算法思想：

>该算法是典型的动态规划算法。我们的目标是寻找从节点i到节点j的最短路径。从任意节点i到任意节点j的最短路径不外乎两种情况：（1）由节点i直接到节点j；（2）从节点i经过若干节点到达节点j。设Dis(i,j)表示从节点i到节点j的最短路径。一般情况而言，对于某条从节点i到节点j的路径上的某一点k而言，如果Dis(i,k)+Dis(k,j)<Dis(i,j)，那么从节点i到节点j之间的最短路径就变成了Dis(i,j)=Dis(i,k)+Dis(k,j) . 这样当我们遍历完所有的节点k,那么 Dist(i,j)中记录的便是从节点i到节点j的最短路径。

>算法描述：
>1>从任意一条边路径开始。所有有向边<i,j>两点之间的距离是权重，如果两点之间没有边相连，则权重为无穷大。
>2>对于任意对节点<i,j>,如果存在节点k,使得从<i,k>+<k,j>的路径权重和小于<i,j>，则更新最短路径大小。

>     Input: n —— number of vertices
>            a —— adjacency
>     Output: Tansformed **a** that contains the shortest path lengths
>     for k <- 0 to n-1
>        for i<-0 to n-1
>           for j<-0 to n-1
>             a[i,j] = min(a[i,j],a[i,k]+a[k,j]);
