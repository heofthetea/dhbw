### 1. Find Process in port
```bash
lsof -i :8081
```
The process's id is printed under `PID` 

### 2. Kill the Process
```bash
sudo kill -9 123998
```
> [!warning] the -9 is the kill command's version of _--force_


## Combined
using the `-t` flag, the ports can be [[xargs|xargs-ed]] directly into the kill command:

```shell
lsof -ti :8081 | xargs sudo kill -9
```



## More ways
### ss
```bash
sudo ss -lptn 'sport = :1883'
```