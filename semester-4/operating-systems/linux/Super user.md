> Execute [[Prozess|process]] in [[Kernel Mode]]


- `sudo` actually performs action as super user
	- `id -u` inside an executed bash script will return 0

### Switch to sudo
```bash
su
```
- requires password (always lol)

```bash
sudo -i
```
- if there is no root password, this will get you to be sudo lol