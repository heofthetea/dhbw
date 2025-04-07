
[[Mount]]

- The source of the [[Mount]] $S$ is **overlayed** over the Mount point $T$ in the target filesystem
	- => Does not attach a new [[Filesystem|tree]] to the [[Filesystem]], but joins them

> [!hint] Is called that way, because it creates the [[Operationen auf Mengen#Union|Union Set]] of the two [[Filesystem]].

## Handling Conflicts
- Always the top-most version is used.

> [!warning] Interesting behaviour: overwrititing a file in the top-most layer, then deleting that file in that layer, will _delete_ the file -> An older version in the lower layers does still exist, but cannot be accessed.


