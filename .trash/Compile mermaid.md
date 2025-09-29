
### 1. Install the thing if not present
```bash
npn i -g @mermaid-js/mermaid-cli
```

### 2. disable suid sandbox
> [!hint] I have absolutely zero clue what the fuck this is and why it doesn't work but the programs still need it, but [this chromium article](https://chromium.googlesource.com/chromium/src/+/main/docs/security/apparmor-userns-restrictions.md) provides ways to disable it

```bash
echo 0 | sudo tee /proc/sys/kernel/apparmor_restrict_unprivileged_userns
```

> [!warning] As per my understanding, this should be reverted on reboots. At least I hope so.


### 3. transparent dark mode image
```bash
mmdc -i input.md -o output.png -t dark -b transparent
```
