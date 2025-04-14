> [!warning] UNFINISHED lol

> [[Wurzel|Root]] of the [[Hierarchical Filesystem]]


See: https://refspecs.linuxfoundation.org/FHS_3.0/fhs/index.html

> [!info] Linux/Unix follows the "[[Everything is a file]]" paradigm
### bin
> stands for: **binaries**

typically [[Hard Links|linked]] to `usr/bin`
- simple binaries (eg. `ls`, `touch`)
### boot
files relevant for booting up system
> [!warning] don't mess with this

### dev
> stands for: **devices**

Information about all connected devices (such as keyboard, cpu, ssd...)
External devices are stored elswhere (where actually? media?)
- special devices:
	- `/dev/null`: Discards anything _written_ to it
	- `/dev/zero`: Returns only zeroes when _reading_ from it

### etc
> actually stands for "**ecetera**"

- Can be configured
- Contains tools such as:
	- [[cron]]
	- apt

### media
Information on connected media such as
- USB sticks
- external mouse

### proc
> stands for: **processes**

Since [[Everything is a file]], each system process has its own directory here with information about said process

> [!info] Directory for a process is named after its process id

### var
> stands for: **variable**

Contains files that are expected to _grow_ in size over time, such as
- logs
- email data


### tmp
> Where temporary files go


> [!hint] As one of the only root-level directories, this  directory _doesn't_ need [[Super user|sudo]] privileges!!!
- You can make use of this for installation directories - source code, that isn't needed anymore as soon as a package is built and installed

### usr
> UNIX System Resources

[[usr filesystem]]