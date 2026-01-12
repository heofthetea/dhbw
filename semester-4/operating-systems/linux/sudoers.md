> The file where is specified which users are allowed to use [[Super user|sudo]]


## Format
> [!warning] A new line after every entry!!!!
> The adduser payload of MSF does not do that, so that breaks sudo.... keep that in mind :)

```
username host=(user:group) tag:commands
```

typical entry:
```
# (ALL) is shorthand for (ALL:ALL)
username ALL=(ALL) ALL 
```

