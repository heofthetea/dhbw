- Java Bytecode: Essentially an Assembler containing Operations 

> [!hint] Java Bytecode is not bound to Java!!
> A shit ton of other languages can compile to [[JAR]] via some plugins
> --> Platform also allows using Libraries from _other_ languages🤯


- [[JVM]] is extremely optimized for the Execution of Java Bytecode

> [!hint] JARs are [[Tarballs]]
> They can easily be extracted - it has to be renamed to a tar extension tho.
## Compile to JAR
Needs a [[Manifest file]]
```bash
jar -cfm <output-file> <manifest> <input-class>
```

## Run a JAR
```bash
java -jar <jar-file>
```