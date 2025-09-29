
| shortcut | what it does                      |
| -------- | --------------------------------- |
| ctrl + A | jump to start of line             |
| ctrl + E | jump to end of line               |
| !!       | run previous command              |
| !\<cmd\> | run previous matching command[^1] |

#### Example previous matching command
```bash
$ docker compose up
some ERROR
$ !docker
docker compose up
[+] Running 1/0
.
.
.
```




---
[^1]: [[#Example previous matching command]] 
