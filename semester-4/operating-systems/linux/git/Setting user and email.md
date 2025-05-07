### Retrieve current settings:
```bash
git config user.name
git config user.email
```

### Configure locally
```bash
git config user.name heofthetea
```
- passing an argument after the call will change this setting for the _current repository only_.

### Configure globally
```bash
git config --global user.name heofthetea
```
- the `--global` flag changes the settings for every git repository on the machine.
- NOTE that changes already made [[#Configure locally|locally]] will be retained and _not_ overwritten.