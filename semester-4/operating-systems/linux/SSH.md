1> Secure Shell Protocol

```bash
ssh <user>@<remote> -i <private-key-file> -p <port>
```


## Key generation
- generate [[RSA]] key
```shell
ssh-keygen -t rsa -b 4096 -f <file>
```

--- 
## Useful snippets
### tail -f-ing a file in real-time
```bash
ssh -t root@192.168.214.100 tail -f /var/log/iptables > test_log
```

