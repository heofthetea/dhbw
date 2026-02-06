\> [[Hash Map]] to store relevant informations of a position in an [[Alpha-Beta-Pruning|Alpha Beta]] search

- some kind of [[Cache]]
- Access happens through a [[Modulo]] operation on the [[Zobrist Hashing|Zobrist key]] of a position
	- if a [[semester-2/algorithmen/Kollision|Collision]] occurs -> use a Replacement Scheme


> [!error] Storing all positions is impossible: A [[Zobrist Hashing|Zobrist key]] is $64$ bit, meaning such a TT would need to have $2^{64} * s$ space (where $s$ is the size of one entry), which would be somewhere in the Zetabytes


http://web.archive.org/web/20071031100051/http://www.brucemo.com:80/compchess/programming/hashing.htm


## Information Stored

| Information  |             | what                                                                                         |
| ------------ | ----------- | -------------------------------------------------------------------------------------------- |
| zobrist hash |             | to see whether the entry for a position is actually a cache miss                             |
| best move    |             | for move ordering                                                                            |
| evaluation   |             | For pruning purposes                                                                         |
| depth        |             | to know whether the entry can be used                                                        |
| Score Type   |             | Score Type                                                                                   |
|              | PV Node     | exact evaluation exists (tree was explored fully)                                            |
|              | lower bound | `evaluation` is not exact - $\beta$-cutoff (failed high)<br>=> actual score is $\geq$ `eval` |
|              | upper bound | `evaluation` is not exact - $\alpha$-cutoff (failed low)<br>=> actual score is $\leq$ `eval` |

> [!hint] The Score Type can also be encoded into the evaluation itself (a little less space but terrible to read i reckon)