class Graph:
    def __init__(self) -> None:
        self.vertices = []
        self.matrix = []

    # formats the adjacency matrix as a _somewhat_ pretty string
    def __to_string__(self):
        s = ""
        s += " " * 3
        for v in self.vertices:
            s += v + "  "
        s += "\n"
        for i, row in enumerate(graph.matrix):
            s += f"{graph.vertices[i]} {row}\n"
        return s

    # formats the adjacency matrix as mermaid, to get a graphical representation (pun very much intended)
    def to_mermaid_string(self, filepath):
        with open(filepath, 'w') as f:
            f.write("```mermaid\n")
            f.write("graph LR\n")
            
            for i in range(len(self.vertices)):
                f.write(f"{self.vertices[i]}\n")
                for j in range(len(self.vertices)):
                    if self.matrix[i][j] > 0:
                        f.write(f"{self.vertices[i]}-- {self.matrix[i][j]} -->{self.vertices[j]}\n")
            f.write("```")

    # add a vertex to the graph
    def add_vertex(self, v):
        self.vertices.append(v) # add new vertex to list of vertices
        num_vertices = len(self.matrix)

        # add a new column to the matrix
        for i in range(num_vertices):
            self.matrix[i].append(0)
        self.matrix.append([0] * (num_vertices + 1)) # add a new row to the matrix

    # really just a wraper function to make adding to the matrix more readable
    def add_edge(self, src: int, dest: int, weight=1):
        self.matrix[src][dest] = weight


# -------------------------------------


def init_niko_matrix(g: Graph):
    g.add_vertex("0")
    g.add_vertex("1")
    g.add_vertex("2")
    g.add_vertex("3")
    g.add_vertex("4")
    g.add_vertex("5")

    g.add_edge(0, 1, weight=2)
    g.add_edge(0, 3, weight=10)
    g.add_edge(0, 4, weight=8)
    g.add_edge(1, 3, weight=4)
    g.add_edge(1, 2, weight=2)
    g.add_edge(1, 4, weight=9)
    g.add_edge(2, 4, weight=1)
    g.add_edge(3, 2, weight=4)
    g.add_edge(3, 5, weight=19)
    g.add_edge(5, 4, weight=6)




if __name__ == "__main__":
    graph = Graph()
    init_niko_matrix(graph)

    # graph.add_vertex("A")
    # graph.add_vertex("B")
    # graph.add_vertex("C")
    # graph.add_vertex("D")
    # graph.add_vertex("E")
    # graph.add_vertex("F")

    # graph.add_edge(0, 1, weight=2)
    # graph.add_edge(1, 2)
    # graph.add_edge(2, 3)
    # graph.add_edge(3, 1)
    # graph.add_edge(3, 0)
    # graph.add_edge(4, 3)
    # graph.add_edge(5, 4)
    # graph.add_edge(4, 4)



    graph.to_mermaid_string("graph.md")
    print(graph.__to_string__())
