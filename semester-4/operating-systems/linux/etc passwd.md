> File: `/etc/passwd`

- stores: Every [[User]] on the system
	- what "command" (for login users: = shell) they're using
- (used to store the user's password, but isn't doing that anymore)
## Format
```
username:password:uid:gid:comment:homedir:command
```

> [!hint] An `x` in the password field means the password [[Hash]] (with salt) is stored in [[etc shadow]]