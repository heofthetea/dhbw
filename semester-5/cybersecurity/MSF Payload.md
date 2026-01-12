> What should be executed on the victim

- most basic example: Reverse Shell



## Encoders
- Encoders from what I understand basically ensure that the payload will be understood by the target system
	- e.g. shutting down the target system looks different for [[Windows]] than it does for [[Linux]]

## Choosing a Payload
- list supported payloads for an [[MSF Exploit]] through
```shell
msf> show payloads
```
- choose one of the payloads with

```shell
msf> set payload path/to/payload
# or:
msf> set payload n # where n is an index of the show payloads output
```


## Generation
- idfk I hope I don't have to work with this, it's all a bit much tbh
- basically generates the [[Shellcode]] to be run on the target machine